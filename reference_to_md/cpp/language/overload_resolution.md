

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Functions](functions.html "cpp/language/functions")

Declarations  
---  
[Function declaration](function.html "cpp/language/function")  
[Function parameter list](function.html#Parameter_list "cpp/language/function")  
[Function definition](function.html#Function_definition "cpp/language/function")  
[Function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") (C++26)  
[Default arguments](default_arguments.html "cpp/language/default arguments")  
[Variadic arguments](variadic_arguments.html "cpp/language/variadic arguments")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
[Coroutines](coroutines.html "cpp/language/coroutines") (C++20)  
[Replacement functions](replacement_function.html "cpp/language/replacement function")  
Function calls  
[Argument-Dependent Lookup (ADL)](adl.html "cpp/language/adl")  
[Function-call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other")  
[Function objects](../named_req/FunctionObject.html "cpp/named req/FunctionObject")  
Overloading  
**Overload resolution**  
[Operator overloading](operators.html "cpp/language/operators")  
[Address of an overload set](overloaded_address.html "cpp/language/overloaded address")  
  


In order to compile a function call, the compiler must first perform [name lookup](lookup.html "cpp/language/lookup"), which, for functions, may involve [argument-dependent lookup](adl.html "cpp/language/adl"), and for function templates may be followed by [template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction"). 

If the name refers to more than one entity, it is said to be _overloaded_ , and the compiler must determine which overload to call. In simple terms, the overload whose parameters match the arguments most closely is the one that is called. 

In detail, overload resolution proceeds through the following steps: 

  1. Building the set of [candidate functions](overload_resolution.html#Candidate_functions). 
  2. Trimming the set to only [viable functions](overload_resolution.html#Viable_functions). 
  3. Analyzing the set to determine the single [best viable function](overload_resolution.html#Best_viable_function) (this may involve [ranking of implicit conversion sequences](overload_resolution.html#Ranking_of_implicit_conversion_sequences)). 


    
    
    void f(long);
    void f(float);
     
    f(0L); // calls f(long)
    f(0);  // error: ambiguous overload

Besides function calls, overloaded function names may appear in several additional contexts, where different rules apply: see [Address of an overloaded function](overloaded_address.html "cpp/language/overloaded address"). 

If a function cannot be selected by overload resolution, it cannot be used (e.g. it is a [templated entity](templates.html#Templated_entity "cpp/language/templates") with a failed [constraint](constraints.html "cpp/language/constraints")). 

## Contents

  * [1 Candidate functions](overload_resolution.html#Candidate_functions)
    * [1.1 Call to a named function](overload_resolution.html#Call_to_a_named_function)
    * [1.2 Call to a class object](overload_resolution.html#Call_to_a_class_object)
    * [1.3 Call to an overloaded operator](overload_resolution.html#Call_to_an_overloaded_operator)
    * [1.4 Initialization by constructor](overload_resolution.html#Initialization_by_constructor)
    * [1.5 Copy-initialization by conversion](overload_resolution.html#Copy-initialization_by_conversion)
    * [1.6 Non-class initialization by conversion](overload_resolution.html#Non-class_initialization_by_conversion)
    * [1.7 Reference initialization by conversion](overload_resolution.html#Reference_initialization_by_conversion)
    * [1.8 List-initialization](overload_resolution.html#List-initialization)
    * [1.9 Additional rules for function template candidates](overload_resolution.html#Additional_rules_for_function_template_candidates)
    * [1.10 Additional rules for constructor candidates](overload_resolution.html#Additional_rules_for_constructor_candidates)
    * [1.11 Additional rules for member function candidates](overload_resolution.html#Additional_rules_for_member_function_candidates)
  * [2 Viable functions](overload_resolution.html#Viable_functions)
  * [3 Best viable function](overload_resolution.html#Best_viable_function)
  * [4 Ranking of implicit conversion sequences](overload_resolution.html#Ranking_of_implicit_conversion_sequences)
  * [5 Implicit conversion sequence in list-initialization](overload_resolution.html#Implicit_conversion_sequence_in_list-initialization)
  * [6 Defect reports](overload_resolution.html#Defect_reports)
  * [7 References](overload_resolution.html#References)
  * [8 See also](overload_resolution.html#See_also)

  
---  
  
### Candidate functions

Before overload resolution begins, the functions selected by name lookup and template argument deduction are combined to form the set of _candidate functions_. The exact details depend on the context in which overload resolution will take place. 

#### Call to a named function

If E in a [function call expression](operator_other.html#Built-in_function_call_operator "cpp/language/operator other") E(args) names a set of overloaded functions and/or function templates (but not callable objects), the following rules are followed: 

  * If the expression E has the form PA->B or A.B (where A has class type _cv_ `T`), then B is [looked up](lookup.html "cpp/language/lookup") as a member function of `T`. The function declarations found by that lookup are the candidate functions. The argument list for the purpose of overload resolution has the implied object argument of type _cv_ `T`. 
  * If the expression E is a [primary expression](expressions.html#Primary_expressions "cpp/language/expressions"), the name is [looked up](lookup.html "cpp/language/lookup") following normal rules for function calls (which may involve [ADL](adl.html "cpp/language/adl")). The function declarations found by this lookup are (due to the way lookup works) either: 



    

  * all non-member functions (in which case the argument list for the purpose of overload resolution is exactly the argument list used in the function call expression) 
  * all member functions of some class `T`, in which case, if this is in scope and is a pointer to `T` or to a derived class of `T`, *this is used as the implied object argument. Otherwise (if this is not in scope or does not point to `T`), a fake object of type `T` is used as the implied object argument, and if overload resolution subsequently selects a non-static member function, the program is ill-formed. 



#### Call to a class object

If E in a [function call expression](operator_other.html#Built-in_function_call_operator "cpp/language/operator other") E(args) has class type _cv_ `T`, then 

  * The function-call operators of `T` are obtained by ordinary [lookup](lookup.html "cpp/language/lookup") of the name operator() in the context of the expression (E).operator(), and every declaration found is added to the set of candidate functions. 
  * For each non-[`explicit`](explicit.html "cpp/language/explicit") [user-defined conversion function](cast_operator.html "cpp/language/cast operator") in `T` or in a base of `T` (unless hidden), whose cv-qualifiers are the same or greater than `T`'s cv-qualifiers, and where the conversion function converts to: 



    

  * pointer-to-function 
  * reference-to-pointer-to-function 
  * reference-to-function 


    then a _surrogate call function_ with a unique name whose first parameter is the result of the conversion, the remaining parameters are the parameter list accepted by the result of the conversion, and the return type is the return type of the result of the conversion, is added to the set of candidate functions. If this surrogate function is selected by the subsequent overload resolution, then the user-defined conversion function will be called and then the result of the conversion will be called. 

In any case, the argument list for the purpose of overload resolution is the argument list of the function call expression preceded by the implied object argument E (when matching against the surrogate function, the user-defined conversion will automatically convert the implied object argument to the first argument of the surrogate function). 
    
    
    int f1(int);
    int f2(float);
     
    struct A
    {
        using fp1 = int(*)(int);
        operator fp1() { return f1; } // conversion function to pointer to function
        using fp2 = int(*)(float);
        operator fp2() { return f2; } // conversion function to pointer to function
    } a;
     
    int i = a(1); // calls f1 via pointer returned from conversion function

#### Call to an overloaded operator

If at least one of the arguments to an operator in an expression has a class type or an enumeration type, both [builtin operators](expressions.html#Operators "cpp/language/expressions") and [user-defined operator overloads](operators.html "cpp/language/operators") participate in overload resolution, with the set of candidate functions selected as follows: 

For a unary operator `**@**` whose argument has type `T1` (after removing cv-qualifications), or binary operator `**@**` whose left operand has type `T1` and right operand of type `T2` (after removing cv-qualifications), the following sets of candidate functions are prepared: 

1) _member candidates_ : if `T1` is a complete class or a class currently being defined, the set of member candidates is the result of [qualified name lookup](lookup.html "cpp/language/lookup") of `T1::operator@`. In all other cases, the set of member candidates is empty. 

2) _non-member candidates_ : For the operators where [operator overloading](operators.html "cpp/language/operators") permits non-member forms, all declarations found by [unqualified name lookup](lookup.html "cpp/language/lookup") of `operator@` in the context of the expression (which may involve [ADL](adl.html "cpp/language/adl")), except that member function declarations are ignored and do not prevent the lookup from continuing into the next enclosing scope. If both operands of a binary operator or the only operand of a unary operator has enumeration type, the only functions from the lookup set that become non-member candidates are the ones whose parameter has that enumeration type (or reference to that enumeration type)

3) _built-in candidates_ : For operator,, the unary operator&, and operator->, the set of built-in candidates is empty. For other operators built-in candidates are the ones listed in [built-in operator pages](expressions.html#Operators "cpp/language/expressions") as long as all operands can be implicitly converted to their parameters. If any built-in candidate has the same parameter list as a non-member candidate or rewritten non-member candidate(since C++20) that is not a function template specialization, it is not added to the list of built-in candidates. When the built-in assignment operators are considered, the conversions from their first parameters are restricted: only the [standard conversion sequences](implicit_cast.html "cpp/language/implicit conversion") are considered.

4) _rewritten candidates_ : 

  * For the four relational operator expressions x < y, x <= y, x > y, and x >= y, all member, non-member, and built-in operator<=>s found are added to the set. 
  * For the four relational operator expressions x < y, x <= y, x > y, and x >= y as well as the three-way comparison expression x <=> y, a synthesized candidate with the order of the two parameters reversed is added for each member, non-member, and built-in operator<=>s found. 
  * For x != y, all member, non-member, and built-in operator==s found are added to the set, unless there is a matching operator!=. 
  * For equality operator expressions x == y and x != y, a synthesized candidate with the order of the two parameters reversed is added for each member, non-member, and built-in operator==s found, unless there is a matching operator!=.

In all cases, rewritten candidates are not considered in the context of the rewritten expression. For all other operators, the rewritten candidate set is empty.  | (since C++20)  
---|---  
  
The set of candidate functions to be submitted for overload resolution is a union of the sets above. The argument list for the purpose of overload resolution consists of the operands of the operator except for `operator->`, where the second operand is not an argument for the function call (see [member access operator](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access")). 
    
    
    struct A
    {
        operator int();              // user-defined conversion
    };
    A operator+(const A&, const A&); // non-member user-defined operator
     
    void m()
    {
        A a, b;
        a + b; // member-candidates: none
               // non-member candidates: operator+(a, b)
               // built-in candidates: int(a) + int(b)
               // overload resolution chooses operator+(a, b)
    }

If the overload resolution selects a built-in candidate, the [user-defined conversion sequence](implicit_cast.html "cpp/language/implicit conversion") from an operand of class type is not allowed to have a second standard conversion sequence: the user-defined conversion function must give the expected operand type directly: 
    
    
    struct Y { operator int*(); }; // Y is convertible to int*
    int *a = Y() + 100.0;          // error: no operator+ between pointer and double

For operator,, the unary operator&, and operator->, if there are no viable functions (see below) in the set of candidate functions, then the operator is reinterpreted as a built-in. 

If a rewritten operator<=> candidate is selected by overload resolution for an operator `@`, x @ y is interpreted as the rewritten expression: 0 @ (y <=> x) if the selected candidate is a synthesized candidate with reversed order of parameters, or (x <=> y) @ 0 otherwise, using the selected rewritten operator<=> candidate. If a rewritten operator== candidate is selected by overload resolution for an operator `@` (which is either `==` or `!=`), its return type must be (possibly cv-qualified) bool, and x @ y is interpreted as the rewritten expression: y == x or !(y == x) if the selected candidate is a synthesized candidate with reversed order of parameters, or !(x == y) otherwise, using the selected rewritten operator== candidate. Overload resolution in this case has a final tiebreaker preferring non-rewritten candidates to rewritten candidates, and preferring non-synthesized rewritten candidates to synthesized rewritten candidates. This lookup with the reversed arguments order makes it possible to write just operator<=>([std::string](../string/basic_string.html), const char*) and operator==([std::string](../string/basic_string.html), const char*) to generate all comparisons between [std::string](../string/basic_string.html "cpp/string/basic string") and const char*, both ways. See [default comparisons](default_comparisons.html "cpp/language/default comparisons") for more detail.  | (since C++20)  
---|---  
  
#### Initialization by constructor

When an object of class type is [direct-initialized](direct_initialization.html "cpp/language/direct initialization") or [default-initialized](default_initialization.html "cpp/language/default initialization") (including default-initialization in the context of [copy-list-initialization](list_initialization.html "cpp/language/list initialization"))(since C++11), the candidate functions are all constructors of the class being initialized. The argument list is the expression list of the initializer. 

Otherwise, the candidate functions are all [converting constructors](converting_constructor.html "cpp/language/converting constructor") of the class being initialized. The argument list is the expression of the initializer. 

For default-initialization in the context of copy-list-initialization, if an [`explicit`](explicit.html "cpp/language/explicit") constructor is chosen, the initialization is ill-formed.  | (since C++11)  
---|---  
  
#### Copy-initialization by conversion

If [copy-initialization](copy_initialization.html "cpp/language/copy initialization") of an object of class type requires that a user-defined conversion is called to convert the initializer expression of type _cv_ `S` to the type _cv_ `T` of the object being initialized, the following functions are candidate functions: 

  * all [converting constructors](converting_constructor.html "cpp/language/converting constructor") of `T`
  * the non-[`explicit`](explicit.html "cpp/language/explicit") conversion functions from `S` and its base classes (unless hidden) to `T` or class derived from `T` or a reference to such. If this copy-initialization is part of the direct-initialization sequence of _cv_ `T` (initializing a reference to be bound to the first parameter of a constructor that takes a reference to _cv_ `T`), then explicit conversion functions are also considered. 



Either way, the argument list for the purpose of overload resolution consists of a single argument which is the initializer expression, which will be compared against the first argument of the constructor or against the implicit object argument of the conversion function. 

#### Non-class initialization by conversion

When initialization of an object of non-class type _cv1_ `T` requires a [user-defined conversion function](cast_operator.html "cpp/language/cast operator") to convert from an initializer expression of class type _cv_ `S`, the following functions are candidates: 

  * the non-explicit user-defined conversion functions of `S` and its base classes (unless hidden) that produce type `T` or a type convertible to `T` by a [standard conversion sequence](implicit_cast.html "cpp/language/implicit conversion"), or a reference to such type. cv-qualifiers on the returned type are ignored for the purpose of selecting candidate functions. 
  * if this is [direct-initialization](direct_initialization.html "cpp/language/direct initialization"), the explicit user-defined conversion functions of `S` and its base classes (unless hidden) that produce type `T` or a type convertible to `T` by a [qualification conversion](implicit_cast.html#Qualification_conversion "cpp/language/implicit conversion"), or a reference to such type, are also considered. 



Either way, the argument list for the purpose of overload resolution consists of a single argument which is the initializer expression, which will be compared against the implicit object argument of the conversion function. 

#### Reference initialization by conversion

During [reference initialization](reference_initialization.html "cpp/language/reference initialization"), where the reference to _cv1_ `T` is bound to the lvalue or rvalue result of a conversion from the initializer expression from the class type _cv2_ `S`, the following functions are selected for the candidate set: 

  * The non-explicit user-defined conversion functions of `S` and its base classes (unless hidden) to the type 



    

  * (when converting to an lvalue) lvalue reference to _cv2_ `T2`
  * (when converting to an rvalue or an lvalue of function type) _cv2_ `T2` or rvalue reference to _cv2_ `T2`


     where _cv2_ `T2` is [reference-compatible](reference_initialization.html#Definitions "cpp/language/reference initialization") with _cv1_ `T`. 

  * For direct initialization, the explicit user-defined conversion functions are also considered if `T2` is the same type as `T` or can be converted to type `T` with a qualification conversion. 



Either way, the argument list for the purpose of overload resolution consists of a single argument which is the initializer expression, which will be compared against the implicit object argument of the conversion function. 

#### List-initialization

When an object of non-aggregate class type `T` is [list-initialized](list_initialization.html "cpp/language/list initialization"), two-phase overload resolution takes place. 

  * at phase 1, the candidate functions are all initializer-list constructors of `T` and the argument list for the purpose of overload resolution consists of a single initializer list argument 
  * if overload resolution fails at phase 1, phase 2 is entered, where the candidate functions are all constructors of `T` and the argument list for the purpose of overload resolution consists of the individual elements of the initializer list. 



If the initializer list is empty and `T` has a default constructor, phase 1 is skipped. 

In copy-list-initialization, if phase 2 selects an explicit constructor, the initialization is ill-formed (as opposed to all over copy-initializations where explicit constructors are not even considered). 

#### Additional rules for function template candidates

If name lookup found a function template, [template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction") and checking of any explicit template arguments are performed to find the template argument values (if any) that can be used in this case: 

  * If both succeeds, the template arguments are used to synthesize declarations of the corresponding function template specializations, which are added to the candidate set, and such specializations are treated just like non-template functions except where specified otherwise in the tie-breaker rules below. 
  * If argument deduction fails or the synthesized function template specialization would be ill-formed, no such function is added to the candidate set (see [SFINAE](sfinae.html "cpp/language/sfinae")). 



If a name refers to one or more function templates and also to a set of overloaded non-template functions, those functions and the specializations generated from the templates are all candidates. 

See [function template overloading](function_template.html#Function_template_overloading "cpp/language/function template") for further detail. 

If a constructor template or conversion function template has a [conditional explicit specifier](explicit.html "cpp/language/explicit") which happens to be [value-dependent](dependent_name.html#Value-dependent_expressions "cpp/language/dependent name"), after deduction, if the context requires a candidate that is not explicit and the generated specialization is explicit, it is removed from the candidate set.  | (since C++20)  
---|---  
  
#### Additional rules for constructor candidates

Defaulted [move constructors](move_constructor.html "cpp/language/move constructor") and [move assignment operators](move_operator.html "cpp/language/move assignment") that are defined as deleted are excluded in the set of candidate functions. A constructor [inherited](using_declaration.html#Inheriting_constructors "cpp/language/using declaration") from class type `C` that has a first parameter of type “reference to `P`” (including such a constructor instantiated from a template) is excluded from the set of candidate functions when constructing an object of type `D` if all following conditions are satisfied: 

  * The argument list has exactly one argument. 
  * `C` is [reference-related](reference_initialization.html#Definitions "cpp/language/reference initialization") to `P`. 
  * `P` is reference-related to `D`. 

| (since C++11)  
---|---  
  
#### Additional rules for member function candidates

If any candidate function is a [member function](member_functions.html "cpp/language/member functions") (static or non-static) that does not have an [explicit object parameter](member_functions.html#Explicit_object_parameter "cpp/language/member functions")(since C++23), but not a constructor, it is treated as if it has an extra parameter (_implicit object parameter_) which represents the object for which they are called and appears before the first of the actual parameters. 

Similarly, the object on which a member function is being called is prepended to the argument list as the _implied object argument_. 

For member functions of class `X`, the type of the implicit object parameter is affected by cv-qualifications and ref-qualifications of the member function as described in [member functions](member_functions.html "cpp/language/member functions"). 

The user-defined conversion functions are considered to be members of the _implied object argument_ for the purpose of determining the type of the _implicit object parameter_. 

The member functions introduced by a using-declaration into a derived class are considered to be members of the derived class for the purpose of defining the type of the _implicit_ object parameter _._

For the static member functions, the _implicit object parameter_ is considered to match any object: its type is not examined and no conversion sequence is attempted for it.  | (until C++23)  
---|---  
  
For the rest of overload resolution, the _implied object argument_ is indistinguishable from other arguments, but the following special rules apply to the _implicit object parameter_ : 

1) user-defined conversions cannot be applied to the implicit object parameter

2) rvalues can be bound to non-const implicit object parameter (unless this is for a ref-qualified member function)(since C++11) and do not affect the ranking of the implicit conversions. 
    
    
    struct B { void f(int); };
    struct A { operator B&(); };
     
    A a;
    a.B::f(1); // Error: user-defined conversions cannot be applied
               // to the implicit object parameter
    static_cast<B&>(a).f(1); // OK

### Viable functions

Given the set of candidate functions, constructed as described above, the next step of overload resolution is examining arguments and parameters to reduce the set to the set of _viable functions_

To be included in the set of viable functions, the candidate function must satisfy the following: 

1) If there are `M` arguments, the candidate function that has exactly `M` parameters is viable

2) If the candidate function has less than `M` parameters, but has an [ellipsis parameter](variadic_arguments.html "cpp/language/variadic arguments"), it is viable.

3) If the candidate function has more than `M` parameters and the `M+1`'st parameter and all parameters that follow have default arguments, it is viable. For the rest of overload resolution, the parameter list is truncated at `M`.

4) If the function has an associated [constraint](constraints.html "cpp/language/constraints"), it must be satisfied | (since C++20)  
---|---  
  
5) For every argument there must be at least one implicit conversion sequence that converts it to the corresponding parameter.

6) If any parameter has reference type, reference binding is accounted for at this step: if an rvalue argument corresponds to non-const lvalue reference parameter or an lvalue argument corresponds to rvalue reference parameter, the function is not viable.

User-defined conversions (both converting constructors and user-defined conversion functions) are prohibited from taking part in implicit conversion sequence where it would make it possible to apply more than one user-defined conversion. Specifically, they are not considered if the target of the conversion is the first parameter of a constructor or the implicit object parameter of a user-defined conversion function, and that constructor/user-defined conversion is a candidate for 

  * [copy-initialization of a class by user-defined conversion](overload_resolution.html#Copy-initialization_by_conversion), 
  * [initialization of a non-class type by a conversion function](overload_resolution.html#Non-class_initialization_by_conversion), 
  * [initialization by conversion function for direct reference binding](overload_resolution.html#Reference_initialization_by_conversion), 
  * [initialization by constructor](overload_resolution.html#Initialization_by_constructor) during the second (direct-initialization) step of class [copy-initialization](copy_initialization.html "cpp/language/copy initialization"), 



  * initialization by list-initialization where the initializer list has exactly one element that is itself an initializer list, and the target is the first parameter of a constructor of class `X`, and the conversion is to `X` or reference to (possibly cv-qualified) `X`: 


    
    
    struct A { A(int); };
    struct B { B(A); };
     
    B b{{0}}; // list-initialization of B
     
    // candidates: B(const B&), B(B&&), B(A)
    // {0} -> B&& not viable: would have to call B(A)
    // {0} -> const B&: not viable: would have to bind to rvalue, would have to call B(A)
    // {0} -> A viable. Calls A(int): user-defined conversion to A is not banned

| (since C++11)  
---|---  
  
### Best viable function

For each pair of viable function `F1` and `F2`, the implicit conversion sequences from the `i`th argument to `i`th parameter are ranked to determine which one is better (except the first argument, the _implicit object argument_ for static member functions has no effect on the ranking) 

`F1` is determined to be a better function than `F2` if implicit conversions for all arguments of `F1` are _not worse_ than the implicit conversions for all arguments of F2, and 

1) there is at least one argument of `F1` whose implicit conversion is _better_ than the corresponding implicit conversion for that argument of `F2`, or, if not that,

2) (only in context of non-class initialization by conversion), the standard conversion sequence from the result of `F1` to the type being initialized is _better_ than the standard conversion sequence from the result of `F2`, or, if not that,

3) (only in context of initialization by conversion function for direct reference binding of a reference to function type), the result of `F1` is the same kind of reference (lvalue or rvalue) as the reference being initialized, and the result of `F2` is not, or, if not that, | (since C++11)  
---|---  
  
4) `F1` is a non-template function while `F2` is a template specialization, or, if not that,

5) `F1` and `F2` are both template specializations and `F1` is more specialized according to the [partial ordering rules for template specializations](function_template.html#Function_template_overloading "cpp/language/function template"), or, if not that,

6) `F1` and `F2` are non-template functions and `F1` is [more partial-ordering-constrained](constraints.html#Partial_ordering_of_constraints "cpp/language/constraints") than `F2`: 
    
    
    template<typename T = int>
    struct S
    {
        constexpr void f(); // #1
        constexpr void f(this S&) requires true; // #2
    };
     
    void test()
    {
        S<> s;
        s.f(); // calls #2
    }

, or, if not that, | (since C++20)  
---|---  
  
  


7) `F1` is a constructor for a class `D`, `F2` is a constructor for a base class `B` of `D`, and for all arguments the corresponding parameters of `F1` and `F2` have the same type: 
    
    
    struct A
    {
        A(int = 0);
    };
     
    struct B: A
    {
        using A::A;
     
        B();
    };
     
    B b; // OK, B::B()

, or, if not that, | (since C++11)  
---|---  
  
  


8) `F2` is a rewritten candidate and `F1` is not, or, if not that, 9) `F1` and `F2` are both rewritten candidates, and `F2` is a synthesized rewritten candidate with reversed order of parameters and `F1` is not, or, if not that, | (since C++20)  
---|---  
  
  


10) `F1` is generated from a [user-defined deduction guide](deduction_guide.html "cpp/language/deduction guide") and `F2` is not, or, if not that, 11) `F1` is the [copy deduction candidate](deduction_guide.html "cpp/language/deduction guide") and `F2` is not, or, if not that, 12) `F1` is generated from a non-template constructor and `F2` is generated from a constructor template: 
    
    
    template<class T>
    struct A
    {
        using value_type = T;
        A(value_type);  // #1
        A(const A&);    // #2
        A(T, T, int);   // #3
     
        template<class U>
        A(int, T, U);   // #4
    };                  // #5 is A(A), the copy deduction candidate
     
    A x(1, 2, 3); // uses #3, generated from a non-template constructor
     
    template<class T>
    A(T) -> A<T>;       // #6, less specialized than #5
     
    A a (42); // uses #6 to deduce A<int> and #1 to initialize
    A b = a;  // uses #5 to deduce A<int> and #2 to initialize
     
    template<class T>
    A(A<T>) -> A<A<T>>; // #7, as specialized as #5
    A b2 = a; // uses #7 to deduce A<A<int>> and #1 to initialize

| (since C++17)  
---|---  
  
These pair-wise comparisons are applied to all viable functions. If exactly one viable function is better than all others, overload resolution succeeds and this function is called. Otherwise, compilation fails. 
    
    
    void Fcn(const int*, short); // overload #1
    void Fcn(int*, int);         // overload #2
     
    int i;
    short s = 0;
     
    void f() 
    {
        Fcn(&i, 1L);  // 1st argument: &i -> int* is better than &i -> const int*
                      // 2nd argument: 1L -> short and 1L -> int are equivalent
                      // calls Fcn(int*, int)
     
        Fcn(&i, 'c'); // 1st argument: &i -> int* is better than &i -> const int*
                      // 2nd argument: 'c' -> int is better than 'c' -> short
                      // calls Fcn(int*, int)
     
        Fcn(&i, s);   // 1st argument: &i -> int* is better than &i -> const int*
                      // 2nd argument: s -> short is better than s -> int
                      // no winner, compilation error
    }

If the best viable function resolves to a function for which multiple declarations were found, and if any two of these declarations inhabit different scopes and specify a default argument that made the function viable, the program is ill-formed. 
    
    
    namespace A
    {
        extern "C" void f(int = 5);
    }
     
    namespace B
    {
        extern "C" void f(int = 5);
    }
     
    using A::f;
    using B::f;
     
    void use()
    {
        f(3); // OK, default argument was not used for viability
        f();  // error: found default argument twice
    }

### Ranking of implicit conversion sequences

The argument-parameter implicit conversion sequences considered by overload resolution correspond to [implicit conversions](implicit_cast.html "cpp/language/implicit conversion") used in [copy initialization](copy_initialization.html "cpp/language/copy initialization") (for non-reference parameters), except that when considering conversion to the implicit object parameter or to the left-hand side of assignment operator, conversions that create temporary objects are not considered. When the parameter is the implicit object parameter of a static member function, the implicit conversion sequence is a standard conversion sequence that is neither better nor worse than any other standard conversion sequence.(since C++23)

Each [type of standard conversion sequence](implicit_cast.html "cpp/language/implicit conversion") is assigned one of three ranks: 

1) **Exact match** : no conversion required, lvalue-to-rvalue conversion, qualification conversion, function pointer conversion,(since C++17) user-defined conversion of class type to the same class

2) **Promotion** : integral promotion, floating-point promotion

3) **Conversion** : integral conversion, floating-point conversion, floating-integral conversion, pointer conversion, pointer-to-member conversion, boolean conversion, user-defined conversion of a derived class to its base

The rank of the standard conversion sequence is the worst of the ranks of the standard conversions it holds (there may be up to [three conversions](implicit_cast.html "cpp/language/implicit conversion")) 

Binding of a reference parameter directly to the argument expression is either identity or a derived-to-base conversion: 
    
    
    struct Base {};
    struct Derived : Base {} d;
     
    int f(Base&);    // overload #1
    int f(Derived&); // overload #2
     
    int i = f(d); // d -> Derived& has rank Exact Match
                  // d -> Base& has rank Conversion
                  // calls f(Derived&)

Since ranking of conversion sequences operates with types and value categories only, a [bit field](bit_field.html "cpp/language/bit field") can bind to a reference argument for the purpose of ranking, but if that function gets selected, it will be ill-formed. 

1) A standard conversion sequence is always _better_ than a user-defined conversion sequence or an ellipsis conversion sequence.

2) A user-defined conversion sequence is always _better_ than an [ellipsis conversion](variadic_arguments.html "cpp/language/variadic arguments") sequence.

3) A standard conversion sequence `S1` is _better_ than a standard conversion sequence `S2` if

a) `S1` is a proper subsequence of `S2`, excluding lvalue transformations; the identity conversion sequence is considered a subsequence of any non-identity conversion, or, if not that,

b) the rank of `S1` is better than the rank of `S2`, or, if not that,

c) both `S1` and `S2` are binding to a reference parameter to something other than the implicit object parameter of a ref-qualified member function, and `S1` binds an rvalue reference to an rvalue while `S2` binds an lvalue reference to an rvalue: 
    
    
    int i;
    int f1();
     
    int g(const int&);  // overload #1
    int g(const int&&); // overload #2
     
    int j = g(i);    // lvalue int -> const int& is the only valid conversion
    int k = g(f1()); // rvalue int -> const int&& better than rvalue int -> const int&

or, if not that,

d) both `S1` and `S2` are binding to a reference parameter and `S1` binds an lvalue reference to function while `S2` binds an rvalue reference to function: 
    
    
    int f(void(&)());  // overload #1
    int f(void(&&)()); // overload #2
     
    void g();
    int i1 = f(g); // calls #1

or, if not that,

e) `S1` and `S2` only differ in qualification conversion, and  the cv-qualification of the result of `S1` is a proper subset of the cv-qualification of the result of `S2`, and `S1` is not the [deprecated string literal array-to-pointer conversion](string_literal.html#Notes "cpp/language/string literal")(until C++11).  | (until C++20)  
---|---  
the result of `S1` can be converted to the result of `S2` by a qualification conversion.  | (since C++20)  
      
    
    int f(const int*);
    int f(int*);
     
    int i;
    int j = f(&i); // &i -> int* is better than &i -> const int*, calls f(int*)

or, if not that,

f) both `S1` and `S2` are binding to a reference parameters only different in top-level cv-qualification, and `S1`'s type is _less_ cv-qualified than `S2`'s: 
    
    
    int f(const int &); // overload #1
    int f(int &);       // overload #2 (both references)
     
    int g(const int &); // overload #1
    int g(int);         // overload #2
     
    int i;
    int j = f(i); // lvalue i -> int& is better than lvalue int -> const int&
                  // calls f(int&)
    int k = g(i); // lvalue i -> const int& ranks Exact Match
                  // lvalue i -> rvalue int ranks Exact Match
                  // ambiguous overload: compilation error

or, if not that,

g) `S1` and `S2` bind the same reference type “reference to `T`” and have source types `V1` and `V2`, respectively, where the standard conversion sequence from V1* to T* is better than the standard conversion sequence from V2* to T*: 
    
    
    struct Z {};
     
    struct A
    {
        operator Z&();
        operator const Z&();  // overload #1
    };
     
    struct B
    {
        operator Z();
        operator const Z&&(); // overload #2
    };
     
    const Z& r1 = A();        // OK, uses #1
    const Z&& r2 = B();       // OK, uses #2

4) A user-defined conversion sequence `U1` is _better_ than a user-defined conversion sequence `U2` if they call the same constructor/user-defined conversion function or initialize the same class with aggregate-initialization, and in either case the second standard conversion sequence in `U1` is better than the second standard conversion sequence in `U2`
    
    
    struct A
    {
        operator short(); // user-defined conversion function
    } a;
     
    int f(int);   // overload #1
    int f(float); // overload #2
     
    int i = f(a); // A -> short, followed by short -> int (rank Promotion)
                  // A -> short, followed by short -> float (rank Conversion)
                  // calls f(int)

5) A list-initialization sequence `L1` is _better_ than list-initialization sequence `L2` if `L1` initializes an [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list") parameter, while `L2` does not. 
    
    
    void f1(int);                                 // #1
    void f1([std::initializer_list](../utility/initializer_list.html)<long>);         // #2
    void g1() { f1({42}); }                       // chooses #2
     
    void f2([std::pair](../utility/pair.html)<const char*, const char*>); // #3
    void f2([std::initializer_list](../utility/initializer_list.html)<[std::string](../string/basic_string.html)>);  // #4
    void g2() { f2({"foo", "bar"}); }             // chooses #4

6) A list-initialization sequence `L1` is _better_ than list-initialization sequence `L2` if the corresponding parameters are references to arrays, and L1 converts to type “array of N1 T”, L2 converts to “array of N2 T”, and N1 is smaller than N2.  | (since C++11)  
(until C++20)  
---|---  
6) A list-initialization sequence `L1` is _better_ than list-initialization sequence `L2` if the corresponding parameters are references to arrays, and L1 and L2 convert to arrays of same element type, and either 

  * the number of elements N1 initialized by L1 is less than the number of elements N2 initialized by L2, or 
  * N1 is equal to N2 and L2 converts to an array of unknown bound and L1 does not. 


    
    
    void f(int    (&&)[] ); // overload #1
    void f(double (&&)[] ); // overload #2
    void f(int    (&&)[2]); // overload #3
     
    f({1});        // #1: Better than #2 due to conversion, better than #3 due to bounds
    f({1.0});      // #2: double -> double is better than double -> int
    f({1.0, 2.0}); // #2: double -> double is better than double -> int
    f({1, 2});     // #3: -> int[2] is better than -> int[], 
                   //     and int -> int is better than int -> double

| (since C++20)  
  
If two conversion sequences are indistinguishable because they have the same rank, the following additional rules apply: 

1) Conversion that does not involve pointer to bool or pointer-to-member to bool is better than the one that does. 

2) Conversion that promotes an [enumeration](enum.html "cpp/language/enum") whose underlying type is fixed to its underlying type is better than one that promotes to the promoted underlying type, if the two types are different. 
    
    
    enum num : char { one = '0' };
    [std::cout](../io/cout.html) << num::one; // '0', not 48

| (since C++11)  
---|---  
  
  


3) A conversion in either direction between floating-point type `FP1` and floating-point type `FP2` is better than a conversion in the same direction between `FP1` and arithmetic type `T3` if 

  * the [floating-point conversion rank](usual_arithmetic_conversions.html#Floating-point_conversion_rank "cpp/language/usual arithmetic conversions") of `FP1` is equal to the rank of `FP2`, and 
    * `T3` is not a floating-point type, or 
    * `T3` is a floating-point type whose rank is not equal to the rank of `FP1`, or 
    * the [floating-point conversion subrank](usual_arithmetic_conversions.html#Floating-point_conversion_subrank "cpp/language/usual arithmetic conversions") of `FP2` is greater than the subrank of `T3`. 


    
    
    int f([std::float32_t](../types/floating-point.html));
    int f([std::float64_t](../types/floating-point.html));
    int f(long long);
     
    float x;
    [std::float16_t](../types/floating-point.html) y;
     
    int i = f(x); // calls f(std::float32_t) on implementations where
                  // float and std::float32_t have equal conversion ranks
    int j = f(y); // error: ambiguous, no equal conversion rank

| (since C++23)  
---|---  
  
4) Conversion that converts pointer-to-derived to pointer-to-base is better than the conversion of pointer-to-derived to pointer-to-void, and conversion of pointer-to-base to void is better than pointer-to-derived to void.

5) If `Mid` is derived (directly or indirectly) from `Base`, and `Derived` is derived (directly or indirectly) from `Mid`

a) Derived* to Mid* is better than Derived* to Base*

b) `Derived` to Mid& or Mid&& is better than `Derived` to Base& or Base&&

c) Base::* to Mid::* is better than Base::* to Derived::*

d) `Derived` to `Mid` is better than `Derived` to `Base`

e) Mid* to Base* is better than Derived* to Base*

f) `Mid` to Base& or Base&& is better than `Derived` to Base& or Base&&

g) Mid::* to Derived::* is better than Base::* to Derived::*

h) `Mid` to `Base` is better than `Derived` to `Base`

Ambiguous conversion sequences are ranked as user-defined conversion sequences because multiple conversion sequences for an argument can exist only if they involve different user-defined conversions: 
    
    
    class B;
     
    class A { A (B&);};         // converting constructor
    class B { operator A (); }; // user-defined conversion function
    class C { C (B&); };        // converting constructor
     
    void f(A) {} // overload #1
    void f(C) {} // overload #2
     
    B b;
    f(b); // B -> A via ctor or B -> A via function (ambiguous conversion)
          // b -> C via ctor (user-defined conversion)
          // the conversions for overload #1 and for overload #2
          // are indistinguishable; compilation fails

### Implicit conversion sequence in list-initialization

In [list initialization](list_initialization.html "cpp/language/list initialization"), the argument is a braced-init-list, which isn't an expression, so the implicit conversion sequence into the parameter type for the purpose of overload resolution is decided by the following special rules: 

  * If the parameter type is some aggregate `X` and the initializer list consists of exactly one element of same or derived class (possibly cv-qualified), the implicit conversion sequence is the one required to convert the element to the parameter type. 
  * Otherwise, if the parameter type is a reference to character array and the initializer list has a single element that is an appropriately-typed string literal, the implicit conversion sequence is the identity conversion. 
  * Otherwise, if the parameter type is [std::initializer_list](../utility/initializer_list.html)<X>, and there is a non-narrowing implicit conversion from every element of the initializer list to `X`, the implicit conversion sequence for the purpose of overload resolution is the worst conversion necessary. If the braced-init-list is empty, the conversion sequence is the identity conversion. 


    
    
    struct A
    {
        A([std::initializer_list](../utility/initializer_list.html)<double>);          // #1
        A([std::initializer_list](../utility/initializer_list.html)<complex<double>>); // #2
        A([std::initializer_list](../utility/initializer_list.html)<[std::string](../string/basic_string.html)>);     // #3
    };
    A a{1.0, 2.0};     // selects #1 (rvalue double -> double: identity conv)
     
    void g(A);
    g({"foo", "bar"}); // selects #3 (lvalue const char[4] -> std::string: user-def conv)

  * Otherwise, if the parameter type is “array of N T” (this only happens for references to arrays), the initializer list must have N or less elements, and the worst implicit conversion necessary to convert every element of the list (or the empty pair of braces `{}` if the list is shorter than N) to `T` is the one used. 



  * Otherwise, if the parameter type is “array of unknown bound of T” (this only happens for references to arrays), the worst implicit conversion necessary to convert every element of the list to `T` is the one used. 

| (since C++20)  
---|---  
      
    
    typedef int IA[3];
     
    void h(const IA&);
    void g(int (&&)[]);
     
    h({1, 2, 3}); // int->int identity conversion
    g({1, 2, 3}); // same as above since C++20

  * Otherwise, if the parameter type is a non-aggregate class type `X`, overload resolution picks the constructor C of X to initialize from the argument initializer list 



    

  * If C is not an initializer-list constructor and the initializer list has a single element of possibly cv-qualified X, the implicit conversion sequence has Exact Match rank. If the initializer list has a single element of possibly cv-qualified type derived from X, the implicit conversion sequence has Conversion rank. (note the difference from aggregates: aggregates initialize directly from single-element init lists before considering [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization"), non-aggregates consider initializer_list constructors before any other constructors) 
  * otherwise, the implicit conversion sequence is a user-defined conversion sequence with the second standard conversion sequence an identity conversion. 



If multiple constructors are viable but none is better than the others, the implicit conversion sequence is the ambiguous conversion sequence. 
    
    
    struct A { A([std::initializer_list](../utility/initializer_list.html)<int>); };
    void f(A);
     
    struct B { B(int, double); };
    void g(B);
     
    g({'a', 'b'});    // calls g(B(int, double)), user-defined conversion
    // g({1.0, 1,0}); // error: double->int is narrowing, not allowed in list-init
     
    void f(B);
    // f({'a', 'b'}); // f(A) and f(B) both user-defined conversions

  * Otherwise, if the parameter type is an aggregate which can be initialized from the initializer list according by [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization"), the implicit conversion sequence is a user-defined conversion sequence with the second standard conversion sequence an identity conversion. 


    
    
    struct A { int m1; double m2; };
     
    void f(A);
    f({'a', 'b'}); // calls f(A(int, double)), user-defined conversion

  * Otherwise, if the parameter is a reference, reference initialization rules apply 


    
    
    struct A { int m1; double m2; };
     
    void f(const A&);
    f({'a', 'b'}); // temporary created, f(A(int, double)) called. User-defined conversion

  * Otherwise, if the parameter type is not a class and the initializer list has one element, the implicit conversion sequence is the one required to convert the element to the parameter type 
  * Otherwise, if the parameter type is not a class type and if the initializer list has no elements, the implicit conversion sequence is the identity conversion. 

If the argument is a designated initializer list and the parameter is not a reference, a conversion is only possible if the parameter has an aggregate type that can be initialized from that initializer list according to the rules for [aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization"), in which case the implicit conversion sequence is a user-defined conversion sequence whose second standard conversion sequence is an identity conversion. If, after overload resolution, the order of declaration of the aggregate's members does not match for the selected overload, the initialization of the parameter will be ill-formed. 
    
    
    struct A { int x, y; };
    struct B { int y, x; };
     
    void f(A a, int); // #1
    void f(B b, ...); // #2
    void g(A a);      // #3
    void g(B b);      // #4
     
    void h() 
    {
        f({.x = 1, .y = 2}, 0); // OK; calls #1
        f({.y = 2, .x = 1}, 0); // error: selects #1, initialization of a fails
                                // due to non-matching member order
        g({.x = 1, .y = 2});    // error: ambiguous between #3 and #4
    }

  
| (since C++20)  
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1](https://cplusplus.github.io/CWG/issues/1.html) | C++98  | the behavior was unspecified when the same  
function with possibly different default  
arguments (from different scopes) is selected  | the program is ill-  
formed in this case   
[CWG 83](https://cplusplus.github.io/CWG/issues/83.html) | C++98  | the conversion sequence from a string literal  
to char* was better than that to const char*  
even though the former is deprecated  | the rank of the deprecated  
conversion is lowered (it  
was removed in C++11)   
[CWG 162](https://cplusplus.github.io/CWG/issues/162.html) | C++98  | it was invalid if the overload set named by `F` contains  
a non-static member function in the case of `&F(args)` | only invalid if overload  
resolution selects a non-static  
member function in this case   
[CWG 233](https://cplusplus.github.io/CWG/issues/233.html) | C++98  | references and pointers were handled inconsistently in  
overloading resolution with user defined conversions  | they are handled  
consistently   
[CWG 280](https://cplusplus.github.io/CWG/issues/280.html) | C++98  | surrogate call functions were not added to  
the set of candidate functions for conversion  
functions declared in inaccessible base classes  | removed the accessibility  
constraint, the program is  
ill-formed if a surrogate call  
function is selected and the  
corresponding conversion  
function cannot be called   
[CWG 415](https://cplusplus.github.io/CWG/issues/415.html) | C++98  | when a function template is selected as a  
candidate, its specializations were instantiated  
using template argument deduction  | no instantiation will occur  
in this case, their declarations  
will be synthesized   
[CWG 495](https://cplusplus.github.io/CWG/issues/495.html) | C++98  | when the implicit conversions for arguments are equally  
good, a non-template conversion function was always  
better than a conversion function template, even if the  
latter may have a better standard conversion sequence  | standard conversion  
sequences are compared  
before specialization levels   
[CWG 1307](https://cplusplus.github.io/CWG/issues/1307.html) | C++11  | overload resolution based on size of arrays was not specified  | a shorter array is  
better when possible   
[CWG 1328](https://cplusplus.github.io/CWG/issues/1328.html) | C++11  | the determination of the candidate functions when  
binding a reference to a conversion result was not clear  | made clear   
[CWG 1374](https://cplusplus.github.io/CWG/issues/1374.html) | C++98  | qualification conversion was checked before reference  
binding when comparing standard conversion sequences  | reversed   
[CWG 1385](https://cplusplus.github.io/CWG/issues/1385.html) | C++11  | a non-explicit user-defined conversion function declared with  
a ref-qualifier did not have a corresponding surrogate function  | it has a corresponding  
surrogate function   
[CWG 1467](https://cplusplus.github.io/CWG/issues/1467.html) | C++11  | same-type list-initialization of  
aggregates and arrays was omitted  | initialization defined   
[CWG 1601](https://cplusplus.github.io/CWG/issues/1601.html) | C++11  | conversion from enum to its underlying type  
did not prefer the fixed underlying type  | fixed type is preferred  
to what it promotes to   
[CWG 1608](https://cplusplus.github.io/CWG/issues/1608.html) | C++98  | the set of member candidates of a unary operator `@`  
whose argument has type `T1` was empty if  
`T1` is a class currently being defined  | the set is the result of  
qualified name lookup of  
`T1::operator@` in this case   
[CWG 1687](https://cplusplus.github.io/CWG/issues/1687.html) | C++98  | when a built-in candidate is selected by overload resolution,  
the operands would undergo conversion without restriction  | only convert class type operands,  
and disabled the second  
standard conversion sequence   
[CWG 2052](https://cplusplus.github.io/CWG/issues/2052.html) | C++98  | ill-formed synthesized function template specializations could  
be added to the candidate set, making the program ill-formed  | they are not added  
to the candidate set   
[CWG 2076](https://cplusplus.github.io/CWG/issues/2076.html) | C++11  | user-defined conversion is applied to the single initializer  
in a nested initializer list during list-initialization  
due to the resolution of [CWG issue 1467](https://cplusplus.github.io/CWG/issues/1467.html) | not applied   
[CWG 2137](https://cplusplus.github.io/CWG/issues/2137.html) | C++11  | initializer list constructors lost to copy  
constructors when list-initializing `X` from {X} | non-aggregates consider  
initializer lists first   
[CWG 2273](https://cplusplus.github.io/CWG/issues/2273.html) | C++11  | there was no tiebreaker between  
inherited and non-inherited constructors  | non-inherited constructor wins   
[CWG 2673](https://cplusplus.github.io/CWG/issues/2673.html) | C++20  | built-in candidates with the same parameter  
list as a rewritten non-member candidate  
were added to the list of built-in candidates  | not added   
[CWG 2712](https://cplusplus.github.io/CWG/issues/2712.html) | C++98  | when a built-in assignment operator is considered,  
the first parameter could not bound to a  
temporary, which is already impossible[[1]](overload_resolution.html#cite_note-1) | removed the  
redundant requirement   
[CWG 2713](https://cplusplus.github.io/CWG/issues/2713.html) | C++20  | the conversion restriction regarding designated initializer  
lists was applied even if the parameter is a reference  | not restricted in this case   
[CWG 2789](https://cplusplus.github.io/CWG/issues/2789.html) | C++23  | the explicit object parameter was included  
when comparing parameter-type-lists  | excluded   
[CWG 2856](https://cplusplus.github.io/CWG/issues/2856.html) | C++11  | the overload resolution for default-initialization in the context  
of copy-list-initialization only considered converting constructor  | considers all constructors   
[CWG 2919](https://cplusplus.github.io/CWG/issues/2919.html) | C++98  | the candidate set of reference initialization by conversion  
depended on the target type of the initialization  | depends on the target  
type of the conversion   
[P2468R2](https://wg21.link/P2468R2) | C++20  | rewritten candidates based on operator== are added  
for a != b even if a matching operator!= exists  | not added   
  
  1. [↑](overload_resolution.html#cite_ref-1) The type of the of the first parameter of a built-in assignment operator is “lvalue reference to possibly volatile-qualified `T`”. References of this type cannot bound to a temporary.



### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 12.2 Overload resolution [over.match] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 12.4 Overload resolution [over.match] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 16.3 Overload resolution [over.match] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 13.3 Overload resolution [over.match] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 13.3 Overload resolution [over.match] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 13.3 Overload resolution [over.match] 



### See also

  * [Name lookup](lookup.html "cpp/language/lookup")
  * [Argument-dependent lookup](adl.html "cpp/language/adl")
  * [Template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction")
  * [SFINAE](sfinae.html "cpp/language/sfinae")


