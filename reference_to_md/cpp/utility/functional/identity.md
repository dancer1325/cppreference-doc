* defined | header [`<functional>`](../../header/functional.md)   

* `struct identity`
  * | C++20
  
* `std::identity`
  * == function object type /
    * `operator()` returns its argument unchanged 

## Contents

  * [1 Member types](identity.html#Member_types)
  * [2 Member functions](identity.html#Member_functions)
  * [3 std::identity::operator()](identity.html#std::identity::operator.28.29)
    * [3.1 Parameters](identity.html#Parameters)
    * [3.2 Return value](identity.html#Return_value)
    * [3.3 Notes](identity.html#Notes)
    * [3.4 Example](identity.html#Example)
    * [3.5 See also](identity.html#See_also)
  
### Member types

Type  |  Definition   
---|---  
`is_transparent` |  [unspecified](../../functional.html#Transparent_function_objects "cpp/utility/functional")  
  
### Member functions

** operator()** |  returns the argument unchanged   
(public member function)  
---|---  
  
##  std::identity::operator()

template< class T >  
constexpr T&& operator()( T&& t ) const noexcept; |  |   
---|---|---  
| |   
  
Returns [std::forward](../forward.html)<T>(t). 

###  Parameters

t  |  \-  |  argument to return   
---|---|---  
  
###  Return value

[std::forward](../forward.html)<T>(t). 

### Notes

`std::identity` serves as the default projection in [constrained algorithms](../../algorithm/ranges.html "cpp/algorithm/ranges"). Its direct usage is usually not needed.

### See also

[ type_identity](../../types/type_identity.html "cpp/types/type identity")(C++20) |  returns the type argument unchanged   
(class template)   
---|---
