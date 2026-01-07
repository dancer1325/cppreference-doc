

  
  
  
  
  

  
  
  

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
**`sizeof...`** (C++11)  
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
  
  


[ Templates](templates.html "cpp/language/templates")

[Template parameters](template_parameters.html "cpp/language/template parameters")  
---  
[Template arguments](template_arguments.html "cpp/language/template arguments")  
[Class templates](class_template.html "cpp/language/class template")  
[Function templates](function_template.html "cpp/language/function template")  
[Class member templates](member_template.html "cpp/language/member template")  
[Variable templates](variable_template.html "cpp/language/variable template") (C++14)  
[Template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction")  
[Class template argument deduction](ctad.html "cpp/language/class template argument deduction") (C++17)  
[Explicit (full) specialization](template_specialization.html "cpp/language/template specialization")  
[Partial specialization](partial_specialization.html "cpp/language/partial specialization")  
[Dependent names](dependent_name.html "cpp/language/dependent name")  
[Packs](parameter_pack.html "cpp/language/pack") (C++11)  
**sizeof...** (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Pack indexing](pack_indexing.html "cpp/language/pack indexing") (C++26)  
[SFINAE](sfinae.html "cpp/language/sfinae")  
[Constraints and concepts](constraints.html "cpp/language/constraints") (C++20)  
[requires expression](requires.html "cpp/language/requires") (C++20)  
  


Queries the number of elements in a [pack](parameter_pack.html "cpp/language/pack"). 

## Contents

  * [1 Syntax](sizeof....html#Syntax)
  * [2 Explanation](sizeof....html#Explanation)
  * [3 Keywords](sizeof....html#Keywords)
  * [4 Example](sizeof....html#Example)
  * [5 See also](sizeof....html#See_also)

  
---  
  
### Syntax  
  
---  
`**sizeof...(**` pack `**)**` |  |   
  
Returns a constant of type [std::size_t](../types/size_t.html "cpp/types/size t"). 

### Explanation

Returns the number of elements in a [pack](parameter_pack.html "cpp/language/pack"). 

### Keywords

[`sizeof`](../keyword/sizeof.html "cpp/keyword/sizeof")

### Example

Run this code
    
    
    #include <array>
    #include <iostream>
    #include <type_traits>
     
    template<typename... Ts>
    constexpr auto make_array(Ts&&... ts)
    {
        using CT = [std::common_type_t](../types/common_type.html)<Ts...>;
        return [std::array](../container/array.html)<CT, sizeof...(Ts)>{[std::forward](../utility/forward.html)<CT>(ts)...};
    }
     
    int main()
    {
        [std::array](../container/array.html)<double, 4ul> arr = make_array(1, 2.71f, 3.14, '*');
        [std::cout](../io/cout.html) << "arr = { ";
        for (auto s{arr.size()}; double elem : arr)
            [std::cout](../io/cout.html) << elem << (--s ? ", " : " ");
        [std::cout](../io/cout.html) << "}\n";
    }

Output: 
    
    
    arr = { 1, 2.71, 3.14, 42 }

### See also

  * [`sizeof`](sizeof.html "cpp/language/sizeof")


