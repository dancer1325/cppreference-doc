* defined | header [`<concepts>`](../header/concepts.md)   

* requirements
  * C++20

```c++
template< class T >  
concept unsigned_integral = std::integral<T> && !std::signed_integral<T>;
```
  
* [std::is_signed_v](../types/is_signed.md) 

## Contents

  * [1 Notes](unsigned_integral.html#Notes)
  * [2 Example](unsigned_integral.html#Example)
  * [3 References](unsigned_integral.html#References)
  * [4 See also](unsigned_integral.html#See_also)
  
### Notes

`unsigned_integral<T>` may be satisfied by a type that is not an [unsigned integer type](../language/type-id.html#Type_classification "cpp/language/type"), for example, bool. 


### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.7 Arithmetic concepts [concepts.arithmetic] 



### See also

[ is_integral](../types/is_integral.html "cpp/types/is integral")(C++11) |  checks if a type is an integral type   
(class template)   
---|---  
[ is_signed](../types/is_signed.html "cpp/types/is signed")(C++11) |  checks if a type is a signed arithmetic type   
(class template) 
