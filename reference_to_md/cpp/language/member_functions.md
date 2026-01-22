* non-static member function
  * == function / declared | class' [member specification](class.md) /
    * WITHOUT a [`static`](static.md) OR [`friend`](friend.md) specifier

* [static member functions](static.md#static-member-functions)
* [friend declaration](friend.md)
    
* member functions
  * requirements
    * some rules
      * ❌NOT apply | 
        * [constructors](initializer_list.md)
        * [destructors](destructor.md)
        * [conversion functions](cast_operator.md)❌

* _explicit object member function_
  * | C++23
  * == non-static member function / has an [explicit object parameter](function.md#parameter-list)
  
* _implicit object member function_
  * | C++23-
    * ⚠️ONLY kind of non-static member function⚠️ 
  * == non-static member function / WITHOUT an explicit object parameter

## Contents

  * [1 Explanation](member_functions.html#Explanation)
    * [1.1 Member functions with cv-qualifiers](member_functions.html#Member_functions_with_cv-qualifiers)
    * [1.2 Member functions with ref-qualifier](member_functions.html#Member_functions_with_ref-qualifier)
    * [1.3 Virtual and pure virtual functions](member_functions.html#Virtual_and_pure_virtual_functions)
    * [1.4 Explicit object member functions](member_functions.html#Explicit_object_member_functions)
    * [1.5 Special member functions](member_functions.html#Special_member_functions)
  * [2 Notes](member_functions.html#Notes)
  * [3 Example](member_functions.html#Example)
  * [4 Defect reports](member_functions.html#Defect_reports)
  * [5 See also](member_functions.html#See_also)
  
### Explanation

Any [function declarations](function.html "cpp/language/function") are allowed, with additional syntax elements that are only available for non-static member functions: [pure-specifiers](abstract_class.html "cpp/language/abstract class"), cv-qualifiers, ref-qualifiers, [`final`](final.html "cpp/language/final") and [`override`](override.html "cpp/language/override") specifiers(since C++11), and [member initialization lists](initializer_list.html "cpp/language/initializer list"). 

A non-static member function of class `X` may be called 

1) For an object of type `X` using the class member access operator

2) For an object of a class [derived](derived_class.html "cpp/language/derived class") from `X`

3) Directly from within the body of a member function of `X`

4) Directly from within the body of a member function of a class derived from `X`

Calling a non-static member function of class `X` on an object that is not of type `X`, or of a type derived from `X` invokes undefined behavior. 

Within the body of a non-static member function of `X`, any [id-expression](expressions.html "cpp/language/expressions") e (e.g. an identifier) that resolves to a non-type non-static member of `X` or of a base class of `X`, is transformed to a member access expression (*this).e (unless it's already a part of a member access expression). This does not occur in template definition context, so a name may have to be prefixed with this-> explicitly to become [dependent](dependent_name.html "cpp/language/dependent name"). 
    
    
    struct S
    {
        int n;
        void f();
    };
     
    void S::f()
    {
        n = 1; // transformed to (*this).n = 1;
    }
     
    int main()
    {
        S s1, s2;
        s1.f(); // changes s1.n
    }

Within the body of a non-static member function of `X`, any unqualified-id that resolves to a static member, an enumerator or a nested type of `X` or of a base class of `X`, is transformed to the corresponding qualified-id: 
    
    
    struct S
    {
        static int n;
        void f();
    };
     
    void S::f()
    {
        n = 1; // transformed to S::n = 1;
    }
     
    int main()
    {
        S s1, s2;
        s1.f(); // changes S::n
    }

#### Member functions with cv-qualifiers

An implicit object member function can be declared with a [cv-qualifier](cv.html "cpp/language/cv") sequence (const, volatile, or a combination of const and volatile), this sequence appears after the parameter list in the [function declaration](function.html "cpp/language/function"). Functions with different cv-qualifier sequences (or no sequence) have different types and so may overload each other. 

In the body of a function with a cv-qualifier sequence, *this is cv-qualified, e.g. in a member function with const qualifier, only other member functions with const qualifier may be called normally. A member function without const qualifier may still be called if [`const_cast`](const_cast.html "cpp/language/const cast") is applied or through an access path that does not involve [`this`](this.html "cpp/language/this"). 
    
    
    #include <vector>
     
    struct Array
    {
        [std::vector](../container/vector.html)<int> data;
        Array(int sz) : data(sz) {}
     
        // const member function
        int operator[](int idx) const
        {                     // the this pointer has type const Array*
            return data[idx]; // transformed to (*this).data[idx];
        }
     
        // non-const member function
        int& operator[](int idx)
        {                     // the this pointer has type Array*
            return data[idx]; // transformed to (*this).data[idx]
        }
    };
     
    int main()
    {
        Array a(10);
        a[1] = 1;  // OK: the type of a[1] is int&
        const Array ca(10);
        ca[1] = 2; // Error: the type of ca[1] is int
    }

####  Member functions with ref-qualifier

An implicit object member function can be declared with no ref-qualifier, with an lvalue ref-qualifier (the token `&` after the parameter list) or the rvalue ref-qualifier (the token `&&` after the parameter list). During [overload resolution](overload_resolution.html "cpp/language/overload resolution"), an implicit object member function with a cv-qualifier sequence of class X is treated as follows: 

  * no ref-qualifier: the implicit object parameter has type lvalue reference to cv-qualified X and is additionally allowed to bind rvalue implied object argument 
  * lvalue ref-qualifier: the implicit object parameter has type lvalue reference to cv-qualified X 
  * rvalue ref-qualifier: the implicit object parameter has type rvalue reference to cv-qualified X 


    
    
    #include <iostream>
     
    struct S
    {
        void f() &  { [std::cout](../io/cout.html) << "lvalue\n"; }
        void f() && { [std::cout](../io/cout.html) << "rvalue\n"; }
    };
     
    int main()
    {
        S s;
        s.f();            // prints "lvalue"
        std::move(s).f(); // prints "rvalue"
        S().f();          // prints "rvalue"
    }

Note: unlike cv-qualification, ref-qualification does not change the properties of the [`this`](this.html "cpp/language/this") pointer: within an rvalue ref-qualified function, *this remains an lvalue expression.  | (since C++11)  
---|---  
  
#### Virtual and pure virtual functions

A non-static member function may be declared _virtual_ or _pure virtual_. See [virtual functions](virtual.html "cpp/language/virtual") and [abstract classes](abstract_class.html "cpp/language/abstract class") for details. 

####  Explicit object member functions

For a non-static non-virtual member function not declared with cv-qualifier or ref-qualifier, its first parameter, if not being a [function parameter pack](parameter_pack.html "cpp/language/parameter pack"), can be an [explicit object parameter](function.html#Explicit_object_parameter "cpp/language/function") (denoted with the prefixed keyword this): 
    
    
    struct X
    {
        void foo(this X const& self, int i); // same as void foo(int i) const &;
    //  void foo(int i) const &; // Error: already declared
     
        void bar(this X self, int i); // pass object by value: makes a copy of “*this”
    };

For member function templates, explicit object parameter allows deduction of type and value category, this language feature is called “deducing this”: 
    
    
    struct X
    {
        template<typename Self>
        void foo(this Self&&, int);
    };
     
    struct D : X {};
     
    void ex(X& x, D& d)
    {
        x.foo(1);       // Self = X&
        move(x).foo(2); // Self = X
        d.foo(3);       // Self = D&
    }

This makes it possible to deduplicate const- and non-const member functions, see [array subscript operator](operators.html#Array_subscript_operator "cpp/language/operators") for an example. Inside the body of an explicit object member function, the this pointer cannot be used: all member access must be done through the first parameter, like in static member functions: 
    
    
    struct C
    {
        void bar();
     
        void foo(this C c)
        {
            auto x = this; // error: no this
            bar();         // error: no implicit this->
            c.bar();       // ok
        }
    };

A pointer to an explicit object member function is an ordinary pointer to function, not a pointer to member: 
    
    
    struct Y 
    {
        int f(int, int) const&;
        int g(this Y const&, int, int);
    };
     
    auto pf = &Y::f;
    pf(y, 1, 2);              // error: pointers to member functions are not callable
    (y.*pf)(1, 2);            // ok
    [std::invoke](../utility/functional/invoke.html)(pf, y, 1, 2); // ok
     
    auto pg = &Y::g;
    pg(y, 3, 4);              // ok
    (y.*pg)(3, 4);            // error: “pg” is not a pointer to member function
    [std::invoke](../utility/functional/invoke.html)(pg, y, 3, 4); // ok

| (since C++23)  
---|---  
  
#### Special member functions

Some member functions are _special_ : under certain circumstances they are defined by the compiler even if not defined by the user. They are: 

  * [Default constructor](default_constructor.html "cpp/language/default constructor")
  * [Copy constructor](copy_constructor.html "cpp/language/copy constructor")



  * [Move constructor](move_constructor.html "cpp/language/move constructor")

| (since C++11)  
---|---  
  
  * [Copy assignment operator](as_operator.html "cpp/language/as operator")



  * [Move assignment operator](move_operator.html "cpp/language/move operator")

| (since C++11)  
---|---  
  
  * [Destructor](destructor.html "cpp/language/destructor")(until C++20)[Prospective destructor](destructor.html#Prospective_destructor "cpp/language/destructor")(since C++20)



Special member functions along with the [comparison operators](default_comparisons.html "cpp/language/default comparisons")(since C++20) are the only functions that can be _defaulted_ , that is, defined using = default instead of the function body (see their pages for details). 

### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_ref_qualifiers`](../experimental/feature_test.html#cpp_ref_qualifiers "cpp/feature test") | [`200710L`](../compiler_support/11.html#cpp_ref_qualifiers_200710L "cpp/compiler support/11") | (C++11) | [ref-qualifiers](function.html#Function_declaration "cpp/language/function")  
[`__cpp_explicit_this_parameter`](../experimental/feature_test.html#cpp_explicit_this_parameter "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_explicit_this_parameter_202110L "cpp/compiler support/23") | (C++23) | [explicit object parameter](function.html#explicit_object_parameter "cpp/language/function") ([deducing `this`](member_functions.html#Explicit_object_member_functions))

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 194](https://cplusplus.github.io/CWG/issues/194.html) | C++98  | ambiguous whether a non-static member function  
could have the same name as the enclosing class name  | explicit naming restriction added   
  
### See also

  * [classes](classes.html "cpp/language/classes")
  * [non-static data members](data_members.html "cpp/language/data members")
  * [static data members](static.html "cpp/language/static")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
