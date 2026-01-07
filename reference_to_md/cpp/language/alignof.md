

  
  
  
  
  

  
  
  

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
  
| **`alignof`**  
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
  
  


Queries alignment requirements of a type. 

## Contents

  * [1 Syntax](alignof.html#Syntax)
  * [2 Explanation](alignof.html#Explanation)
  * [3 Notes](alignof.html#Notes)
  * [4 Keywords](alignof.html#Keywords)
  * [5 Example](alignof.html#Example)
  * [6 Defect reports](alignof.html#Defect_reports)
  * [7 References](alignof.html#References)
  * [8 See also](alignof.html#See_also)

  
---  
  
### Syntax  
  
---  
`**alignof(**` type-id `**)**` |  |   
  
Returns a value of type [std::size_t](../types/size_t.html "cpp/types/size t"). 

### Explanation

Returns [the alignment](objects.html#Alignment "cpp/language/object"), in bytes, required for any instance of the type indicated by [type-id](type-id.html#Type_naming "cpp/language/type"), which is either [complete](type-id.html#Incomplete_type "cpp/language/type") object type, an array type whose element type is complete, or a reference type to one of those types. 

If the type is reference type, the operator returns the alignment of referenced type; if the type is array type, alignment requirement of the element type is returned. 

### Notes

See [alignment](objects.html#Alignment "cpp/language/object") for the meaning and properties of the value returned by `alignof`. 

### Keywords

[`alignof`](../keyword/alignof.html "cpp/keyword/alignof")

### Example

Run this code
    
    
    #include <iostream>
     
    struct Foo
    {
        int   i;
        float f;
        char  c;
    };
     
    // Note: alignas(alignof(long double)) below can be
    // simplified to alignas(long double) if desired.
    struct alignas(alignof(long double)) Foo2
    {
        // put your definition here
    }; 
     
    struct Empty {};
     
    struct alignas(64) Empty64 {};
     
    #define SHOW(expr) std::cout << #expr << " = " << (expr) << '\n'
     
    int main()
    {
        SHOW(alignof(char));
        SHOW(alignof(int*));
        SHOW(alignof(Foo));
        SHOW(alignof(Foo2));
        SHOW(alignof(Empty));
        SHOW(alignof(Empty64));
    }

Possible output: 
    
    
    alignof(char) = 1
    alignof(int*) = 8
    alignof(Foo) = 4
    alignof(Foo2) = 16
    alignof(Empty) = 1
    alignof(Empty64) = 64

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1305](https://cplusplus.github.io/CWG/issues/1305.html) | C++11  | type-id could not represent a reference to an array  
with an unknown bound but a complete element type  | allowed   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.6.2.6 Alignof [expr.alignof] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.6.2.5 Alignof [expr.alignof] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.3.6 Alignof [expr.alignof] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 5.3.6 Alignof [expr.alignof] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 5.3.6 Alignof [expr.alignof] 



### See also

[Alignment requirement](objects.html#Alignment "cpp/language/object") |  restricts the addresses at which an object may be allocated   
---|---  
`**[alignas](alignas.html "cpp/language/alignas")**` (C++11) |  specifies that the storage for the variable should be aligned by specific amount  
(specifier)  
[ alignment_of](../types/alignment_of.html "cpp/types/alignment of")(C++11) |  obtains the type's alignment requirements   
(class template)   
[C documentation](../../c/language/alignof.html "c/language/ Alignof") for `_Alignof`, `alignof` operator
