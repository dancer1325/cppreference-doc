

  
  
  
  
  

  
  
  

---  
  

---  
  



  
 
  
  
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
[Constant expressions](constant_expression.html "cpp/language/constant expression")  
[Primary expressions](expressions.html#Primary_expressions "cpp/language/expressions")  
  
| [Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
---  
[Requires expressions](requires.html "cpp/language/requires") (C++20)  
[Pack indexing expression](pack_indexing.html#Pack_indexing_expression "cpp/language/pack indexing") (C++26)  
[Potentially-evaluated expressions](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")  
  
Literals  
| [Integer literals](integer_literal.html "cpp/language/integer literal")  
---  
[Floating-point literals](floating_literal.html "cpp/language/floating literal")  
[Boolean literals](bool_literal.html "cpp/language/bool literal")  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  
Operators  
| [Assignment operators](operator_assignment.html "cpp/language/operator assignment")  
---  
[Increment and decrement](operator_incdec.html "cpp/language/operator incdec")  
[Arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic")  
[Logical operators](operator_logical.html "cpp/language/operator logical")  
[Comparison operators](operator_comparison.html "cpp/language/operator comparison")  
[Member access operators](operator_member_access.html "cpp/language/operator member access")  
[Other operators](operator_other.html "cpp/language/operator other")  
[`new`-expression](new.html "cpp/language/new")  
[`delete`-expression](delete.html "cpp/language/delete")  
[`throw`-expression](throw.html "cpp/language/throw")  
  
| [`alignof`](alignof.html "cpp/language/alignof")  
---  
[`sizeof`](sizeof.html "cpp/language/sizeof")  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") (C++11)  
[`typeid`](typeid.html "cpp/language/typeid")  
[`noexcept`](noexcept.html "cpp/language/noexcept") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


[ Templates](templates.html "cpp/language/templates")

[Template parameters](template_parameters.html "cpp/language/template parameters")  
---  
[Template arguments](template_arguments.html "cpp/language/template arguments")  
[Class templates](class_template.html "cpp/language/class template")  
[Function templates](function_template.html "cpp/language/function template")  
**Class member templates**  
[Variable templates](variable_template.html "cpp/language/variable template") (C++14)  
[Template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction")  
[Class template argument deduction](ctad.html "cpp/language/class template argument deduction") (C++17)  
[Explicit (full) specialization](template_specialization.html "cpp/language/template specialization")  
[Partial specialization](partial_specialization.html "cpp/language/partial specialization")  
[Dependent names](dependent_name.html "cpp/language/dependent name")  
[Packs](parameter_pack.html "cpp/language/pack") (C++11)  
[sizeof...](sizeof....html "cpp/language/sizeof...") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
[Constraints and concepts](constraints.html "cpp/language/constraints") (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


Template declarations ([class](class_template.html "cpp/language/class template"), [function](function_template.html "cpp/language/function template"), and [variables](variable_template.html "cpp/language/variable template")(since C++14)) can appear inside a [member specification](class.html "cpp/language/class") of any class, struct, or union that are not [local classes](class.html#Local_classes "cpp/language/class"). 

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <string>
    #include <vector>
     
    struct Printer
    {
        // generic functor
        [std::ostream](../io/basic_ostream.html)& os;
        Printer([std::ostream](../io/basic_ostream.html)& os) : os(os) {}
        template<typename T>
        void operator()(const T& obj) { os << obj << ' '; } // member template
    };
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v{1,2,3};
        [std::for_each](../algorithm/for_each.html)(v.begin(), v.end(), Printer([std::cout](../io/cout.html)));
        [std::string](../string/basic_string.html) s{"abc"};
        std::[ranges::for_each](../algorithm/ranges/for_each.html)(s, Printer([std::cout](../io/cout.html)));
    }

Output: 
    
    
    1 2 3 a b c

Partial specializations of member template may appear both at class scope and at enclosing namespace scope. Explicit specializations may appear in any scope in which the primary template may appear. 
    
    
    struct A
    {
        template<class T> struct B;        // primary member template
        template<class T> struct B<T*> {}; // OK: partial specialization
    //  template<> struct B<int*> {};      // OK via CWG 727: full specialization
    };
    template<> struct A::B<int*> {};       // OK
    template<class T> struct A::B<T&> {};  // OK

If the enclosing class declaration is, in turn, a class template, when a member template is defined outside of the class body, it takes two sets of template parameters: one for the enclosing class, and another one for itself: 
    
    
    template<typename T1>
    struct string
    {
        // member template function
        template<typename T2>
        int compare(const T2&);
        // constructors can be templates too
        template<typename T2>
        string(const [std::basic_string](../string/basic_string.html)<T2>& s) { /*...*/ }
    };
    // out of class definition of string<T1>::compare<T2> 
    template<typename T1> // for the enclosing class template
    template<typename T2> // for the member template
    int string<T1>::compare(const T2& s) { /* ... */ }

## Contents

  * [1 Member function templates](member_template.html#Member_function_templates)
  * [2 Conversion function templates](member_template.html#Conversion_function_templates)
  * [3 Member variable templates](member_template.html#Member_variable_templates)
  * [4 Defect reports](member_template.html#Defect_reports)

  
---  
  
### Member function templates

[Destructors](destructor.html "cpp/language/destructor") and [copy constructors](copy_constructor.html "cpp/language/copy constructor") cannot be templates. If a template constructor is declared which could be instantiated with the type signature of a copy constructor, the [implicitly-declared copy constructor](copy_constructor.html#Implicitly-declared_copy_constructor "cpp/language/copy constructor") is used instead. 

A member function template cannot be virtual, and a member function template in a derived class cannot override a virtual member function from the base class. 
    
    
    class Base
    {
        virtual void f(int);
    };
     
    struct Derived : Base
    {
        // this member template does not override Base::f
        template<class T> void f(T);
     
        // non-template member override can call the template:
        void f(int i) override
        {
             f<>(i);
        }
    };

A non-template member function and a template member function with the same name may be declared. In case of conflict (when some template specialization matches the non-template function signature exactly), the use of that name and type refers to the non-template member unless an explicit template argument list is supplied. 
    
    
    template<typename T>
    struct A
    {
        void f(int); // non-template member
     
        template<typename T2>
        void f(T2); // member template
    };
     
    // template member definition
    template<typename T>
    template<typename T2>
    void A<T>::f(T2)
    {
        // some code
    }
     
    int main()
    {
        A<char> ac;
        ac.f('c'); // calls template function A<char>::f<char>(char)
        ac.f(1);   // calls non-template function A<char>::f(int)
        ac.f<>(1); // calls template function A<char>::f<int>(int)
    }

  
An out-of-class definition of a member function template must be _equivalent_ to the declaration inside the class (see [function template overloading](function_template.html#Function_template_overloading "cpp/language/function template") for the definition of equivalency), otherwise it is considered to be an overload. 
    
    
    struct X
    {
        template<class T> T good(T n);
        template<class T> T bad(T n);
    };
     
    template<class T> struct identity { using type = T; };
     
    // OK: equivalent declaration
    template<class V>
    V X::good(V n) { return n; }
     
    // Error: not equivalent to any of the declarations inside X
    template<class T>
    T X::bad(typename identity<T>::type n) { return n; }

### Conversion function templates

A user-defined [conversion function](cast_operator.html "cpp/language/cast operator") can be a template. 
    
    
    struct A
    {
        template<typename T>
        operator T*(); // conversion to pointer to any type
    };
     
    // out-of-class definition
    template<typename T>
    A::operator T*() { return nullptr; }
     
    // explicit specialization for char*
    template<>
    A::operator char*() { return nullptr; }
     
    // explicit instantiation
    template A::operator void*();
     
    int main()
    {
        A a;
        int* ip = a.operator int*(); // explicit call to A::operator int*()
    }

During [overload resolution](overload_resolution.html "cpp/language/overload resolution"), specializations of conversion function templates are not found by [name lookup](lookup.html "cpp/language/lookup"). Instead, all visible conversion function templates are considered, and every specialization produced by [template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction") (which has special rules for conversion function templates) is used as if found by name lookup. 

Using-declarations in derived classes cannot refer to specializations of template conversion functions from base classes. 

A user-defined conversion function template cannot have a deduced return type: 
    
    
    struct S
    {
        operator auto() const { return 10; } // OK
        template<class T> operator auto() const { return 42; } // error
    };

| (since C++14)  
---|---  
  
###  Member variable templates

A variable template declaration may appear at class scope, in which case it declares a static data member template. See [variable templates](variable_template.html "cpp/language/variable template") for details.  | (since C++14)  
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1878](https://cplusplus.github.io/CWG/issues/1878.html) | C++14  | operator auto was technically allowed  | operator auto forbidden 
