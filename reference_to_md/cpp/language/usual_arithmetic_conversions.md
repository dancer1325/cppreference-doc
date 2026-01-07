

  
  
  
  
  

  
  
  

---  
  

---  
  


  
  

  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
**Usual arithmetic conversions**  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
  


Many binary operators that expect operands of [arithmetic](type-id.html "cpp/language/type") or [enumeration](enum.html "cpp/language/enum") type cause conversions and yield result types in a similar way. The purpose is to yield a common type, which is also the type of the result. This pattern is called the _usual arithmetic conversions_. 

## Contents

  * [1 Definition](usual_arithmetic_conversions.html#Definition)
    * [1.1 Stage 1](usual_arithmetic_conversions.html#Stage_1)
    * [1.2 Stage 2](usual_arithmetic_conversions.html#Stage_2)
    * [1.3 Stage 3](usual_arithmetic_conversions.html#Stage_3)
    * [1.4 Stage 4](usual_arithmetic_conversions.html#Stage_4)
    * [1.5 Stage 5](usual_arithmetic_conversions.html#Stage_5)
  * [2 Integer conversion rank](usual_arithmetic_conversions.html#Integer_conversion_rank)
  * [3 Floating-point conversion rank and subrank](usual_arithmetic_conversions.html#Floating-point_conversion_rank_and_subrank)
    * [3.1 Floating-point conversion rank](usual_arithmetic_conversions.html#Floating-point_conversion_rank)
    * [3.2 Floating-point conversion subrank](usual_arithmetic_conversions.html#Floating-point_conversion_subrank)
    * [3.3 Usage](usual_arithmetic_conversions.html#Usage)
  * [4 Defect reports](usual_arithmetic_conversions.html#Defect_reports)

  
---  
  
### Definition

Usual arithmetic conversions are defined as follows: 

#### Stage 1

Applies [lvalue-to-rvalue conversion](implicit_cast.html#Lvalue-to-rvalue_conversion "cpp/language/implicit conversion") to both operands, the resulting prvalues are used in place of the original operands for the remaining process. 

#### Stage 2

  * If either operand is of [scoped enumeration type](enum.html#Scoped_enumerations "cpp/language/enum"), no conversions are performed; if the other operand does not have the same type, the expression is ill-formed. 
  * Otherwise, proceed to the next stage. 

| (since C++11)  
---|---  
  
#### Stage 3

  * If either operand is of [enumeration type](enum.html "cpp/language/enum"), and the other operand is of a different enumeration type or a floating-point type, the expression is ill-formed. 
  * Otherwise, proceed to the next stage. 

| (since C++26)  
---|---  
  
#### Stage 4

  * If either operand is of [floating-point type](types.html#Floating-point_types "cpp/language/types"), the following rules are applied: 



    

  * If both operands have the same type, no further conversion will be performed. 
  * Otherwise, if one of the operands is of a non-floating-point type, that operand is converted to the type of the other operand. 
  * Otherwise, if the [floating-point conversion ranks](usual_arithmetic_conversions.html#Floating-point_conversion_rank) of the types of the operands are ordered but(since C++23) not equal, then the operand of the type with the lesser floating-point conversion rank is converted to the type of the other operand. 



    

  * Otherwise, if the floating-point conversion ranks of the types of the operands are equal, then the operand with the lesser [floating-point conversion subrank](usual_arithmetic_conversions.html#Floating-point_conversion_subrank) is converted to the type of the other operand. 
  * Otherwise, the expression is ill-formed. 


| (since C++23)  
---|---  
  
  * Otherwise, both operands are of integer types, proceed to the next stage. 



#### Stage 5

Both operands are converted to a common type `C`. Given the types `T1` and `T2` as the promoted type ([under the rules of integral promotions](implicit_cast.html#Integral_promotion "cpp/language/implicit conversion")) of the operands, the following rules are applied to determine `C`: 

  * If `T1` and `T2` are the same type, `C` is that type. 
  * Otherwise, if `T1` and `T2` are both signed integer types or both unsigned integer types, `C` is the type of greater [integer conversion rank](usual_arithmetic_conversions.html#Integer_conversion_rank). 
  * Otherwise, one type between `T1` and `T2` is an signed integer type `S`, the other type is an unsigned integer type `U`. Apply the following rules: 



    

  * If the integer conversion rank of `U` is greater than or equal to the integer conversion rank of `S`, `C` is `U`. 
  * Otherwise, if `S` can represent all of the values of `U`, `C` is `S`. 
  * Otherwise, `C` is the unsigned integer type corresponding to `S`. 


If one operand is of enumeration type and the other operand is of a different enumeration type or a floating-point type, this behavior is deprecated.  | (since C++20)  
(until C++26)  
---|---  
  
### Integer conversion rank

Every [integer type](types.html#Integer_types "cpp/language/types") has an _integer conversion rank_ defined as follows: 

  * No two signed integer types other than char and signed char (if char is signed) have the same rank, even if they have the same representation. 
  * The rank of a signed integer type is greater than the rank of any signed integer type with a smaller width. 
  * The ranks of the following integer types decrease in order: 



    

  * long long


| (since C++11)  
---|---  
  
    

  * long
  * int
  * short
  * signed char



  * The rank of any unsigned integer type equals the rank of the corresponding signed integer type. 



  * The rank of any standard integer type is greater than the rank of any extended integer type with the same width. 

| (since C++11)  
---|---  
  
  * The rank of bool is less than the rank of all standard integer types. 
  * The ranks of encoding character types (char , char8_t(since C++20), char16_t, char32_t,(since C++11) and wchar_t) equal the ranks of their [underlying types](types.html#Character_types "cpp/language/types"), which means: 



    

  * The rank of char equals the rank of signed char and unsigned char. 



    

  * The rank of char8_t equals the rank of unsigned char. 


| (since C++20)  
---|---  
  
    

  * The rank of char16_t equals the rank of [std::uint_least16_t](../types/integer.html "cpp/types/integer"). 
  * The rank of char32_t equals the rank of [std::uint_least32_t](../types/integer.html "cpp/types/integer"). 


| (since C++11)  
  
    

  * The rank of wchar_t equals the rank of its implementation-defined underlying type. 



  * The rank of any extended signed integer type relative to another extended signed integer type with the same width is implementation-defined, but still subject to the other rules for determining the integer conversion rank. 

| (since C++11)  
---|---  
  
  * For all integer types `T1`, `T2`, and `T3`, if `T1` has greater rank than `T2` and `T2` has greater rank than `T3`, then `T1` has greater rank than `T3`. 



The integer conversion rank is also used in the definition of [integral promotion](implicit_cast.html#Integral_promotion "cpp/language/implicit conversion"). 

### Floating-point conversion rank and subrank

#### Floating-point conversion rank

Every [floating-point type](types.html#Floating-point_types "cpp/language/types") has a _floating-point conversion rank_ defined as follows: 

  * The ranks of the standard floating-point types decrease in order: 
    * long double
    * double
    * float



  * The rank of a floating-point type `T` is greater than the rank of any floating-point type whose set of values is a proper subset of the set of values of `T`. 
  * Two extended floating-point types with the same set of values have equal ranks. 
  * An extended floating-point type with the same set of values as exactly one cv-unqualified standard floating-point type has a rank equal to the rank of that standard floating-point type. 
  * An extended floating-point type with the same set of values as more than one cv-unqualified standard floating-point type has a rank equal to the rank of double. 

| (since C++23)  
---|---  
  
  


####  Floating-point conversion subrank

Floating-point types that have equal floating-point conversion ranks are ordered by _floating-point conversion subrank_. The subrank forms a total order among types with equal ranks. The types `std::float16_t`, `std::float32_t`, `std::float64_t`, and `std::float128_t` ([fixed width floating-point types](../types/floating-point.html "cpp/types/floating-point")) have a greater conversion subrank than any standard floating-point type with equal conversion rank. Otherwise, the conversion subrank order is implementation-defined.  | (since C++23)  
---|---  
  
#### Usage

The floating-point conversion rank and subrank are also used to 

  * determine whether a conversion between different floating-point types [can be implicit](implicit_cast.html#Floating-point_conversions "cpp/language/implicit conversion") or is a [narrowing conversion](list_initialization.html#Narrowing_conversions "cpp/language/list initialization"), 
  * [distinguish the conversion sequences](overload_resolution.html#Ranking_of_implicit_conversion_sequences "cpp/language/overload resolution") in overload resolution, 



  * determine the actual type extracted by [`std::num_get::get()`](../locale/num_get/get.html "cpp/locale/num get/get") for the extraction of an extended floating-point type using [`std::basic_istream::operator>>`](../io/basic_istream/operator_gtgt.html "cpp/io/basic istream/operator gtgt"), 
  * determinte the actual type inserted by [`std::num_put::put()`](../locale/num_put/put.html "cpp/locale/num put/put") for the insertion of an extended floating-point type using [`std::basic_ostream::operator<<`](../io/basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt"), 

| (since C++23)  
---|---  
  
  * determine whether [std::complex](../numeric/complex.html "cpp/numeric/complex")'s [converting constructor](../numeric/complex/complex.html "cpp/numeric/complex/complex") is explicit, or 
  * determine the common floating-point type if the arguments of different floating-point types are passed to [common](../numeric/math.html "cpp/numeric/math") or [special](../numeric/special_math.html "cpp/numeric/special functions") math functions. 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1642](https://cplusplus.github.io/CWG/issues/1642.html) | C++98  | usual arithmetic conversions might involve lvalues  | applies lvalue-to-rvalue conversions first   
[CWG 2528](https://cplusplus.github.io/CWG/issues/2528.html) | C++20  | the three-way comparison between unsigned char  
and unsigned int is ill-formed because  
of the intermediate integral promotion[[1]](usual_arithmetic_conversions.html#cite_note-1) | determines the common type based  
on the promoted types, without  
actually promoting the operands[[2]](usual_arithmetic_conversions.html#cite_note-2)  
[CWG 2892](https://cplusplus.github.io/CWG/issues/2892.html) | C++98  | when both operands are of the same  
floating-point type, the meaning of “no  
further conversion is needed” was unclear  | changed to “no further  
conversion will be performed”   
  
  1. [↑](usual_arithmetic_conversions.html#cite_ref-1) Before the resolution, unsigned char is promoted to int at the beginning of stage 5, then it is converted to unsigned int. However, the latter conversion is narrowing, which makes the three-way comparison ill-formed.
  2. [↑](usual_arithmetic_conversions.html#cite_ref-2) After the resolution, the common type is still unsigned int. The difference is that unsigned char is directly converted to unsigned int without the intermediate integral promotion. The conversion is not narrowing and hence the three-way comparison is well-formed.


