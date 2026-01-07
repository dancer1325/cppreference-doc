* convert between types / have DIFFERENT cv-qualification 
* adds OR removes [cv](cv.md)-qualifiers
## Contents

  * [1 Syntax](const_cast.html#Syntax)
  * [2 Explanation](const_cast.html#Explanation)
  * [3 Casting away constness](const_cast.html#Casting_away_constness)
  * [4 Notes](const_cast.html#Notes)
  * [5 Keywords](const_cast.html#Keywords)
  * [6 Example](const_cast.html#Example)
  * [7 Defect reports](const_cast.html#Defect_reports)
  * [8 References](const_cast.html#References)
  * [9 See also](const_cast.html#See_also)
  
### Syntax  

`const_cast<target-type>(expression)`
* 's return
  * value / type == `target-type` 

### Explanation

Only the following conversions can be done with const_cast: 

1) For two [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") object pointer or pointer to data member types `T1` and `T2`, a prvalue of type `T1` can be converted to `T2` if `T1` and `T2` differ only in cv-qualification (formally, if, considering the [qualification-decompositions](implicit_cast.html#Similar_types "cpp/language/implicit conversion") of both types, each `P1_i` is the same as `P2_i` for all i). 

  * If expression is a null pointer value, the result is also a null pointer value. 
  * If expression is a null member pointer value, the result is also a null member pointer value. 
  * If expression points to an object, the result points to the same object. 
  * If expression points past an object, the result points past the same object. 
  * If expression points to a data member, the result points to the same data member. 

Even if expression is a prvalue, [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") is not performed.  | (since C++17)  
---|---  
  
2) For two [object types](type-id.html#Object_type "cpp/language/type") `T1` and `T2`, if a pointer to `T1` can be explicitly converted to the type “pointer to `T2`” using const_cast<T2*>, then the following conversions can also be made: 

  * An lvalue of type `T1` can be explicitly converted to an lvalue of type `T2` using const_cast<T2&>. 



  * A glvalue of type `T1` can be explicitly converted to an xvalue of type `T2` using const_cast<T2&&>. 
  * If `T1` is a class or array type, a prvalue of type `T1` can be explicitly converted to an xvalue of type `T2` using const_cast<T2&&>. 

| (since C++11)  
---|---  
The result reference refers to the original object.  | (until C++17)  
---|---  
If expression is a glvalue, the result reference refers to the original object. Otherwise, the result reference refers to the [materialized temporary](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion").  | (since C++17)  
  
As with all cast expressions, the result is: 

  * an lvalue if target-type is an lvalue reference type or an rvalue reference to function type(since C++11); 



  * an xvalue if target-type is an rvalue reference to object type; 

| (since C++11)  
---|---  
  
  * a prvalue otherwise. 



### Casting away constness

For two different types `T1` and `T2`, a conversion from `T1` to `T2` _casts away constness_ if there exists a [qualification-decomposition](implicit_cast.html#Similar_types "cpp/language/implicit conversion") of `T2` of the form “cv2_0 P2_0 cv2_1 P2_1 ... cv2_n−1 P2_n−1 cv2_n U2”, and there is no [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion") that converts `T1` to “cv2_0 P1_0 cv2_1 P1_1 ... cv2_n−1 P1_n−1 cv2_n U1” (same cv-components, different P-components and U-components). 

If a cast from a prvalue of type `T1*` to the type `T2*` casts away constness, casting from an expression of type `T1` to a reference to `T2` will also cast away constness. 

Only const_cast may be used to cast away constness. 

“Casting away constness” implies “casting away volatility”, as qualification conversions cannot cast away volatility as well. 

### Notes

Pointers to functions and pointers to member functions are not subject to const_cast. 

const_cast makes it possible to form a reference or pointer to non-const type that is actually referring to a [const object](cv.html "cpp/language/cv") or a reference or pointer to non-volatile type that is actually referring to a [volatile object](cv.html "cpp/language/cv"). Modifying a const object through a non-const access path and referring to a volatile object through a non-volatile [glvalue](value_category.html#glvalue "cpp/language/value category") results in undefined behavior. 

### Keywords

[`const_cast`](../keyword/const_cast.html "cpp/keyword/const cast")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1965](https://cplusplus.github.io/CWG/issues/1965.html) | C++11  | const_cast could not bind rvalue references to array prvalues  | allowed to bind such references   
[CWG 2879](https://cplusplus.github.io/CWG/issues/2879.html) | C++17  | pointer pvalue operands were materialized  | they are not materialized   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.6.1.11 Const cast [expr.const.cast] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.6.1.10 Const cast [expr.const.cast] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.2.11 Const cast [expr.const.cast] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 5.2.11 Const cast [expr.const.cast] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 5.2.11 Const cast [expr.const.cast] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 5.2.11 Const cast [expr.const.cast] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 5.2.11 Const cast [expr.const.cast] 



### See also

  * [`static_cast`](static_cast.html "cpp/language/static cast")
  * [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")
  * [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")
  * [explicit cast](explicit_cast.html "cpp/language/explicit cast")
  * [implicit conversions](implicit_cast.html "cpp/language/implicit cast")


