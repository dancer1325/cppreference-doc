

  
  
  
  
  

  
  
  

---  
  

---  
  


  
  
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
**`noexcept`** (C++11)  
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
  


[ Exceptions](exceptions.html "cpp/language/exceptions")

[try block](try.html "cpp/language/try")  
---  
[Throwing exceptions](throw.html "cpp/language/throw")  
[Handling exceptions](catch.html "cpp/language/catch")  
Exception specification  
[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
[dynamic specification](except_spec.html "cpp/language/except spec") (until C++17*)  
**noexcept operator** (C++11)  
  


The noexcept operator performs a compile-time check that returns true if an expression is declared to not throw any exceptions. 

It can be used within a function template's [noexcept specifier](noexcept_spec.html "cpp/language/noexcept spec") to declare that the function will throw exceptions for some types but not others. 

## Contents

  * [1 Syntax](noexcept.html#Syntax)
  * [2 Notes](noexcept.html#Notes)
  * [3 Keywords](noexcept.html#Keywords)
  * [4 Example](noexcept.html#Example)
  * [5 Defect reports](noexcept.html#Defect_reports)
  * [6 See also](noexcept.html#See_also)

  
---  
  
### Syntax  
  
---  
`**noexcept(**` expression `**)**` |  |   
  
Returns a [prvalue](value_category.html#prvalue "cpp/language/value category") of type bool. The result is true if the set of [potential exceptions](except_spec.html "cpp/language/except spec") of the expression is empty(until C++17)expression is specified to be [non-throwing](noexcept_spec.html "cpp/language/noexcept spec")(since C++17), and false otherwise. 

expression is an [unevaluated operand](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"). 

If expression is a prvalue, [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") is applied.  | (since C++17)  
---|---  
  
### Notes

Even if noexcept(expr) is true, an evaluation of expr may still throw as the result of encountering undefined behavior. 

If expression is of a class type or (possibly multidimensional) array thereof, temporary materialization requires the destructor be non-deleted and accessible.  | (since C++17)  
---|---  
  
### Keywords

[`noexcept`](../keyword/noexcept.html "cpp/keyword/noexcept")

### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
    #include <vector>
     
    void may_throw();
    void no_throw() noexcept;
    auto lmay_throw = []{};
    auto lno_throw = []() noexcept {};
     
    class T
    {
    public:
        ~T(){} // dtor prevents move ctor
               // copy ctor is noexcept
    };
     
    class U
    {
    public:
        ~U(){} // dtor prevents move ctor
               // copy ctor is noexcept(false)
        [std::vector](../container/vector.html)<int> v;
    };
     
    class V
    {
    public:
        [std::vector](../container/vector.html)<int> v;
    };
     
    int main()
    {
        T t;
        U u;
        V v;
     
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html) <<
            "may_throw() is noexcept(" << noexcept(may_throw()) << ")\n"
            "no_throw() is noexcept(" << noexcept(no_throw()) << ")\n"
            "lmay_throw() is noexcept(" << noexcept(lmay_throw()) << ")\n"
            "lno_throw() is noexcept(" << noexcept(lno_throw()) << ")\n"
            "~T() is noexcept(" << noexcept([std::declval](../utility/declval.html)<T>().~T()) << ")\n"
            // note: the following tests also require that ~T() is noexcept because
            // the expression within noexcept constructs and destroys a temporary
            "T(rvalue T) is noexcept(" << noexcept(T([std::declval](../utility/declval.html)<T>())) << ")\n"
            "T(lvalue T) is noexcept(" << noexcept(T(t)) << ")\n"
            "U(rvalue U) is noexcept(" << noexcept(U([std::declval](../utility/declval.html)<U>())) << ")\n"
            "U(lvalue U) is noexcept(" << noexcept(U(u)) << ")\n"
            "V(rvalue V) is noexcept(" << noexcept(V([std::declval](../utility/declval.html)<V>())) << ")\n"
            "V(lvalue V) is noexcept(" << noexcept(V(v)) << ")\n";
    }

Output: 
    
    
    may_throw() is noexcept(false)
    no_throw() is noexcept(true)
    lmay_throw() is noexcept(false)
    lno_throw() is noexcept(true)
    ~T() is noexcept(true)
    T(rvalue T) is noexcept(true)
    T(lvalue T) is noexcept(true)
    U(rvalue U) is noexcept(false)
    U(lvalue U) is noexcept(false)
    V(rvalue V) is noexcept(true)
    V(lvalue V) is noexcept(false)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2722](https://cplusplus.github.io/CWG/issues/2722.html) | C++17  | it was unclear whether temporary materialization  
is applied if expression is a prvalue  | it is applied  
in this case   
[CWG 2792](https://cplusplus.github.io/CWG/issues/2792.html) | C++11  | the noexcept operator was required to determine whether exceptions  
may be thrown in the case of encountering undefined behavior  | not required   
  
### See also

[ `noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec")(C++11) |  specifies whether a function could throw exceptions  
---|---  
[ Dynamic exception specification](except_spec.html "cpp/language/except spec")(until C++17) |  specifies what exceptions are thrown by a function (deprecated in C++11) 
