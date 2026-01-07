* allows
  * safely converts pointers & references -- to -- inheritance hierarchy classes up OR down OR sideways

## Contents

  * [1 Syntax](dynamic_cast.html#Syntax)
  * [2 Explanation](dynamic_cast.html#Explanation)
  * [3 Notes](dynamic_cast.html#Notes)
  * [4 Keywords](dynamic_cast.html#Keywords)
  * [5 Example](dynamic_cast.html#Example)
  * [6 Defect reports](dynamic_cast.html#Defect_reports)
  * [7 References](dynamic_cast.html#References)
  * [8 See also](dynamic_cast.html#See_also)

### Syntax  

* `dynamic_cast <target-type>(expression)`
  * `target-type`
    * ALLOWED ones
      * pointer -- to -- complete class type,
      * reference -- to -- complete class type
      * pointer -- to -- (OPTIONAL cv-qualified) `void` 
  * `expression`
    * if `target-type`  
      * == reference -> complete class type's 
        * | C++11-,
          * `lvalue`
        * | C++11,
          * `glvalue`   
      * == pointer -> pointer to complete class type's `prvalue`    
  
### Explanation

For the convenience of description, “expression or the result is a reference to `T`” means that “it is a glvalue of type `T`”, which follows the convention of [`decltype`](decltype.html "cpp/language/decltype")(since C++11). 

Only the following conversions can be done with dynamic_cast, except when such conversions would [cast away constness](const_cast.html#Casting_away_constness "cpp/language/const cast") (or volatility). 

1) If the type of expression is exactly target-type or a less cv-qualified version of target-type, the result is the value of expression with type target-type. In other words, dynamic_cast can be used to **add constness**. An implicit conversion and static_cast can perform this conversion as well.

2) If target-type is “pointer to (possibly cv-qualified) `Base`” and the type of expression is “pointer to (possibly cv-qualified) `Derived`” such that `Base` is a base class of `Derived`, the result is 

  * a null pointer value if expression is a null pointer value, or 
  * a pointer to the unique `Base` [subobject](objects.html#Subobjects "cpp/language/object") of the `Derived` object pointed to by expression otherwise. In other words, dynamic_cast can be used to **upcast** pointers, from derived to base. An implicit conversion and static_cast can perform this conversion as well.



3) If target-type is “reference to (possibly cv-qualified) `Base`” and the type of expression is “(possibly cv-qualified) `Derived`” such that `Base` is a base class of `Derived`, the result is the unique `Base` subobject of the `Derived` object referred to by expression. In other words, dynamic_cast can be used to **upcast** references, from derived to base. An implicit conversion and static_cast can perform this conversion as well.

4) If expression is a null pointer value of a [polymorphic type](objects.html#Polymorphic_objects "cpp/language/object"), the result is the null pointer value of target-type.

5) Otherwise, expression must be a pointer or reference to an object of [polymorphic type](objects.html#Polymorphic_objects "cpp/language/object") within its [lifetime](lifetime.html "cpp/language/lifetime") or within its period of construction or destruction whose type is [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") to the type of expression (otherwise the behavior is undefined) 

a) If expression is a pointer to (possibly cv-qualified) void, the result is a pointer to the [most derived object](objects.html#Subobject "cpp/language/object") pointed to by expression.

b) Otherwise a runtime check is applied to see if the object pointed/referred to by expression can be converted to the type `Target`, pointed or referred to by target-type:

i) If, in the most derived object pointed/referred to by expression, expression points/refers to a public base class subobject of a `Target` object, and if only one object of type `Target` is derived from the subobject pointed/referred to by expression, the result points/refers to that `Target` object. In other words, dynamic_cast can be used to **downcast** pointers/references, from base to derived.

ii) Otherwise, if expression points/refers to a public base class subobject of the most derived object, and the type of the most derived object has an unambiguous and public base class of type `Target`, the result points/refers to the `Target` subobject of the most derived object. In other words, dynamic_cast can be used to **crosscast** (or side-cast) pointers/references, between two types derived from the same base.

iii) Otherwise, the runtime check fails. 

  * If target-type is a pointer type, the result is the null pointer value of target-type. 
  * If target-type is a reference type, an exception of a type that would match a [handler](catch.html "cpp/language/catch") of type [std::bad_cast](../types/bad_cast.html "cpp/types/bad cast") is thrown.



When dynamic_cast is used in a constructor or a destructor (directly or indirectly), and expression refers to the object that's currently under construction/destruction, the object is considered to be the most derived object. If target-type is not a pointer or reference to the constructor's/destructor's own class or one of its bases, the behavior is undefined. 

Similar to other cast expressions, the result is: 

  * an lvalue if target-type is a reference type 
  * an rvalue if target-type is a pointer type 

| (until C++11)  
---|---  
  
  * an lvalue if target-type is an lvalue reference type (expression must be an lvalue) 
  * an xvalue if target-type is an rvalue reference type (expression may be lvalue or rvalue(until C++17)must be a glvalue (prvalues are [materialized](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion"))(since C++17) of a complete class type) 
  * a prvalue if target-type is a pointer type 

| (since C++11)  
  
### Notes

A downcast can also be performed with static_cast, which avoids the cost of the runtime check, but it is only safe if the program can guarantee (through some other logic) that the object pointed to by expression is definitely `Derived`. 

Some forms of dynamic_cast rely on [run-time type identification](https://en.wikipedia.org/wiki/Run-time_type_information "enwiki:Run-time type information") (RTTI), that is, information about each polymorphic class in the compiled program. Compilers typically have options to disable the inclusion of this information. 

### Keywords

* [`dynamic_cast`](../keyword/dynamic_cast.md)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1269](https://cplusplus.github.io/CWG/issues/1269.html) | C++11  | the runtime check was not performed for xvalue  
expression ﻿s if target-type is an rvalue reference type  | performed   
[CWG 2861](https://cplusplus.github.io/CWG/issues/2861.html) | C++98  | expression could point/refer to a type-inaccessible object  | the behavior is undefined in this case   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.6.1.7 Dynamic cast [expr.dynamic.cast] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.6.1.6 Dynamic cast [expr.dynamic.cast] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.2.7 Dynamic cast [expr.dynamic.cast] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 5.2.7 Dynamic cast [expr.dynamic.cast] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 5.2.7 Dynamic cast [expr.dynamic.cast] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 5.2.7 Dynamic cast [expr.dynamic.cast] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 5.2.7 Dynamic cast [expr.dynamic.cast] 



### See also

  * [`const_cast`](const_cast.html "cpp/language/const cast")
  * [`static_cast`](static_cast.html "cpp/language/static cast")
  * [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")
  * [explicit cast](explicit_cast.html "cpp/language/explicit cast")
  * [implicit conversions](implicit_cast.html "cpp/language/implicit conversion")


