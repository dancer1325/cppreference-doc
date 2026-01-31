* allows
  * query
    * object's size
    * type's size 
* uses
  * know the object's actual size  

## Contents

  * [1 Syntax](sizeof.html#Syntax)
  * [2 Notes](sizeof.html#Notes)
  * [3 Keywords](sizeof.html#Keywords)
  * [4 Example](sizeof.html#Example)
  * [5 Defect reports](sizeof.html#Defect_reports)
  * [6 See also](sizeof.html#See_also)

### Syntax  
  
#### (1)

* `sizeof( type )`
  * `type`  
    * == [`type-id`](incomplete_type.md#type-naming)
  * 's output
    * [type's object representation](objects.md)'s size / 
      * | bytes

#### (2)
   
* `sizeof expression`
  * `expression`
    * == expression whose [operator precedence](operator_precedence.html "cpp/language/operator precedence") is not lower than `sizeof`
      (e.g. sizeof a + b is parsed as (sizeof a) + b instead of sizeof (a + b))
  * 's output
    * == [constant expression](constant_expression.md) /
      * type [std::size_t](../types/size_t.md)
    * | evaluate the expression, expression's type's object representation/ 
      * | bytes

### Notes

Depending on the computer architecture, a [byte](https://en.wikipedia.org/wiki/byte "enwiki:byte") may consist of 8 or more bits, the exact number being recorded in [CHAR_BIT](../types/climits.html "cpp/types/climits"). 

The following `sizeof` expressions always evaluate to 1: 

  * sizeof(char)
  * sizeof(signed char)
  * sizeof(unsigned char)



  * sizeof([std::byte](../types/byte.html))

| (since C++17)  
---|---  
  
  * sizeof(char8_t)

| (since C++20)  
  
`sizeof` cannot be used with function types, incomplete types, or bit-field lvalues(until C++11)glvalues(since C++11). 

When applied to a reference type, the result is the size of the referenced type. 

When applied to a class type, the result is the number of bytes occupied by a complete object of that class, including any additional padding required to place such object in an array. The number of bytes occupied by a [potentially-overlapping subobject](objects.html#Subobjects "cpp/language/object") may be less than the size of that object. 

The result of `sizeof` is always nonzero, even if applied to an empty class type. 

When applied to an expression, `sizeof` does [not evaluate the expression](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") (i.e. the expression is an unevaluated operand)(since C++11), and even if the expression designates a polymorphic object, the result is the size of the static type of the expression. Lvalue-to-rvalue, array-to-pointer, or function-to-pointer conversions are not performed. [Temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion"), however, is (formally) performed for prvalue arguments: the program is ill-formed if the argument is not destructible.(since C++17)

### Keywords

* [`sizeof`](../keyword/sizeof.md)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1553](https://cplusplus.github.io/CWG/issues/1553.html) | C++11  | `sizeof` could be used with bit-field xvalues  | prohibited   
  
### See also

`**[alignof](alignof.html "cpp/language/alignof")**` (C++11) |  queries alignment requirements of a type  
(operator)  
---|---  
[`sizeof...` operator](sizeof....html "cpp/language/sizeof...") (C++11) |  queries the number of elements in a [pack](parameter_pack.html "cpp/language/pack")  
[ numeric_limits](../types/numeric_limits.html "cpp/types/numeric limits") |  provides an interface to query properties of all fundamental numeric types   
(class template)   
[C documentation](../../c/language/sizeof.html "c/language/sizeof") for sizeof
