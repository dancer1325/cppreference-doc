# `std::basic_ostream<CharT,Traits>::operator<<`

## syntax
### first ways

```
basic_ostream& operator<<( bool value );
basic_ostream& operator<<( long value );
basic_ostream& operator<<( unsigned long value );
basic_ostream& operator<<( long long value );           // C++11
basic_ostream& operator<<( unsigned long long value );  // C++11
basic_ostream& operator<<( double value );
basic_ostream& operator<<( long double value );
basic_ostream& operator<<( const void* value );
```
* inserts value
* 's behaviour
  * == [FormattedOutputFunction](../../named_req/FormattedOutputFunction.md)'s behaviour
* AFTER constructing & checking the sentry object -> insert -- , by calling [`std::num_put::put()`](../../locale/num_put/put.md), -- a value 
* if the end of file condition was encountered | output (== `put().failed() == true`) -> sets `badbit`

### second way
```
basic_ostream& operator<<( const volatile void* value ); // C++23
```

* == `return operator<<(const_cast<const void*>(p));`

### third way
```
basic_ostream& operator<<( [std::nullptr_t](../../types/nullptr_t.html) ); // C++17
```

* == `return *this << s;`
  * `s`
    * == character type string
      * implementation-defined
      * null-terminated 

### fourth way
```
basic_ostream& operator<<( short value );
```

* inserts a short value
* 's behaviour
  * == [FormattedOutputFunction](../../named_req/FormattedOutputFunction.md)'s behaviour
* AFTER constructing & checking the sentry object -> insert a long value (`lval`) / 
  * `lval` ==
    * if `flags() & std::ios_base::basefield` == `std::ios_base::oct` OR `std::ios_base::hex` -> `static_cast<long>(static_cast<unsigned short>(value))`, OR
    * `static_cast<long>(value)`

### fifth way
```
basic_ostream& operator<<( int value );
```

* 12) Inserts a value from int value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts a long value lval as in (2), where lval is

* static_cast<long>(static_cast<unsigned int>(value)), if flags() & [std::ios_base::basefield](../ios_base/fmtflags.html) is [std::ios_base::oct](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags") or [std::ios_base::hex](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags"), or
* static_cast<long>(value) otherwise.

### sixth way
```
basic_ostream& operator<<( unsigned short value );
basic_ostream& operator<<( unsigned int value );
```

Inserts a value from unsigned short or unsigned int value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts static_cast<unsigned long>(value) as in (3).

### seventh way
```
basic_ostream& operator<<( float value );
```

Inserts a value from float value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts static_cast<double>(value) as in (6).

### eight way
```
basic_ostream& operator<<( /* extended-floating-point-type */ value ); // C++23
```
Inserts a value from value. The library provides overloads for all cv-unqualified [extended floating-point types](../../language/types.html#Extended_floating-point_types "cpp/language/types") as the type of the parameter value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, checks the [floating-point conversion rank](../../language/usual_arithmetic_conversions.html#Floating-point_conversion_rank "cpp/language/usual arithmetic conversions") of /* extended-floating-point-type */:

* If the rank is less than or equal to that of double, inserts static_cast<double>(value) as in (6).
* Otherwise, if the rank is less than or equal to that of long double, inserts static_cast<long double>(value) as in (7).
* Otherwise, an invocation of this overload is conditionally supported with implementation-defined semantics.

### nineth way
```
basic_ostream& operator<<( [std::basic_streambuf](../basic_streambuf.html)<CharT, Traits>* sb );
```
This function behaves as an [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction"). After constructing and checking the sentry object, checks if sb is a null pointer. If it is, executes setstate(badbit) and exits. Otherwise, extracts characters from the input sequence controlled by sb and inserts them into *this until one of the following conditions are met:



* end-of-file occurs on the input sequence;
* inserting in the output sequence fails (in which case the character to be inserted is not extracted);
* an exception occurs (in which case the exception is caught).


If no characters were inserted, executes setstate(failbit). If an exception was thrown while extracting, sets `failbit` and, if `failbit` is set in [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions"), rethrows the exception.

### tenth way
```
basic_ostream& operator<<(
    std::ios_base& (*func)(std::ios_base&) );
basic_ostream& operator<<(
    std::basic_ios<CharT, Traits>& (*func)(std::basic_ios<CharT, Traits>&) );
basic_ostream& operator<<(
    std::basic_ostream<CharT, Traits>& (*func)
        (std::basic_ostream<CharT, Traits>&) );
```

* calls `func(*this)`
* uses
  * implement output I/O manipulators
    * _Example:_ `std::endl`

## Contents

  * [1 Parameters](operator_ltlt.html#Parameters)
  * [2 Return value](operator_ltlt.html#Return_value)
  * [3 Notes](operator_ltlt.html#Notes)
  * [4 Example](operator_ltlt.html#Example)
  * [5 Defect reports](operator_ltlt.html#Defect_reports)
  * [6 See also](operator_ltlt.html#See_also)

  
---  
  
### Parameters

value  |  \-  |  integer, floating-point, boolean, or pointer value to insert   
---|---|---  
func  |  \-  |  function to call   
sb  |  \-  |  pointer to the stream buffer to read the data from   
  
### Return value

1-19) *this

20) func(*this)

### Notes

There are no overloads for pointers to non-static members, pointers to volatiles,(until C++23) or function pointers (other than the ones with signatures accepted by the ([18-20](operator_ltlt.html#Version_18)) overloads). 

  * Attempting to output such objects invokes implicit conversion to bool, and, for any non-null pointer value, the value 1 is printed (unless `boolalpha` was set, in which case true is printed). 



Character and character string arguments (e.g., of type char or const char*) are handled by the [non-member overloads](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2") of operator<<. 

  * Attempting to output a character using the member function call syntax (e.g., [std::cout](../cout.html).operator<<('c');) will call one of the overloads in ([2-5](operator_ltlt.html#Version_2)) or ([11-14](operator_ltlt.html#Version_11)) and output the numerical value. 
  * Attempting to output a character string using the member function call syntax will call overload (8) and print the pointer value instead. 



Overload (10) was added by the resolution of [LWG issue 2221](https://cplusplus.github.io/LWG/issue2221), but it is never implemented in any standard library implementation under C++11/14 modes.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 117](https://cplusplus.github.io/LWG/issue117) | C++98  | overloads (1-8,11-15) delegated the insertion to  
[`num_put::put`](../../locale/num_put/put.html "cpp/locale/num put/put"), but it does not have overloads for short,  
unsigned short, int, unsigned int, and float | they are converted  
before being passed  
to `num_put::put`  
[LWG 567](https://cplusplus.github.io/LWG/issue567) | C++98  | overload (17) behaved as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction")  
because of the resolution of [LWG issue 60](https://cplusplus.github.io/LWG/issue60) | it behaves as an  
[UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction")  
  
### See also

[ operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2") |  inserts character data or insert into rvalue stream   
(function template)   
---|---  
[ operator<<operator>>](../../string/basic_string/operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt") |  performs stream input and output on strings   
(function template)   
[ operator<<](../../string/basic_string_view/operator_ltlt.html "cpp/string/basic string view/operator ltlt")(C++17) |  performs stream output on string views   
(function template)   
[ operator<<operator>>](../../utility/bitset/operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2") |  performs stream input and output of bitsets   
(function template)   
[ operator<<operator>>](../../numeric/complex/operator_ltltgtgt.html "cpp/numeric/complex/operator ltltgtgt") |  serializes and deserializes a complex number   
(function template)   
[ operator<<operator>>](../../numeric/random/linear_congruential_engine/operator_ltltgtgt.html "cpp/numeric/random/linear congruential engine/operator ltltgtgt")(C++11) |  performs stream input and output on pseudo-random number engine   
(function template)   
[ operator<<operator>>](../../numeric/random/uniform_int_distribution/operator_ltltgtgt.html "cpp/numeric/random/uniform int distribution/operator ltltgtgt")(C++11) |  performs stream input and output on pseudo-random number distribution   
(function template)   
[ put](put.html "cpp/io/basic ostream/put") |  inserts a character   
(public member function)   
[ write](write.html "cpp/io/basic ostream/write") |  inserts blocks of characters   
(public member function)   
[ to_chars](../../utility/to_chars.html "cpp/utility/to chars")(C++17) |  converts an integer or floating-point value to a character sequence   
(function) 
