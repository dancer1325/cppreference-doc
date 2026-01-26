 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
**expected::operator=**  
[Observers](../expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](operator*.html "cpp/utility/expected/operator*")  
[expected::operator boolexpected::has_value](operator_bool.html "cpp/utility/expected/operator bool")  
[expected::value](value.html "cpp/utility/expected/value")  
[expected::error](error.html "cpp/utility/expected/error")  
[expected::value_or](value_or.html "cpp/utility/expected/value or")  
[expected::error_or](error_or.html "cpp/utility/expected/error or")  
[Monadic operations](../expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](and_then.html "cpp/utility/expected/and then")  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](emplace.html "cpp/utility/expected/emplace")  
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Primary template |  |   
---|---|---  
constexpr expected& operator=( const expected& other ); |  (1) | (since C++23)  
constexpr expected& operator=( expected&& other )  
noexcept(/* see below */); |  (2) | (since C++23)  
template< class U = [std::remove_cv_t](../../types/remove_cv.html)<T> >  
constexpr expected& operator=( U&& v ); |  (3) | (since C++23)  
template< class G >  
constexpr expected& operator=( const [std::unexpected](unexpected.html)<G>& e ); |  (4) | (since C++23)  
template< class G >  
constexpr expected& operator=( [std::unexpected](unexpected.html)<G>&& e ); |  (5) | (since C++23)  
void partial specialization |  |   
constexpr expected& operator=( const expected& other ); |  (6) | (since C++23)  
constexpr expected& operator=( expected&& other )  
noexcept(/* see below */); |  (7) | (since C++23)  
template< class G >  
constexpr expected& operator=( const [std::unexpected](unexpected.html)<G>& e ); |  (8) | (since C++23)  
template< class G >  
constexpr expected& operator=( [std::unexpected](unexpected.html)<G>&& e ); |  (9) | (since C++23)  
Helper function template |  |   
template< class T, class U, class... Args >  
constexpr void /*reinit-expected*/( T& newval, U& oldval, Args&&... args ) |  (10) | (since C++23)   
(exposition only*)  
| |   
  
Assigns a new value to an existing `expected` object. 

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Effects](operator=.html#Effects)
    * [2.1 Primary template assignment operators](operator=.html#Primary_template_assignment_operators)
    * [2.2 void partial specialization assignment operators](operator=.html#void_partial_specialization_assignment_operators)
    * [2.3 Helper function template](operator=.html#Helper_function_template)
  * [3 Return value](operator=.html#Return_value)
  * [4 Constraints and supplement information](operator=.html#Constraints_and_supplement_information)
    * [4.1 Primary template assignment operators](operator=.html#Primary_template_assignment_operators_2)
    * [4.2 void partial specialization assignment operators](operator=.html#void_partial_specialization_assignment_operators_2)
  * [5 Exceptions](operator=.html#Exceptions)
  * [6 Example](operator=.html#Example)
  * [7 Defect reports](operator=.html#Defect_reports)
  * [8 See also](operator=.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  another `expected` object whose contained value to assign   
---|---|---  
v  |  \-  |  value to assign to the contained value   
e  |  \-  |  [`std::unexpected`](unexpected.html "cpp/utility/expected/unexpected") object whose contained value to assign   
newval  |  \-  |  the contained value to be constructed   
oldval  |  \-  |  the contained value to be destroyed   
args  |  \-  |  the arguments used as initializers of newval  
  
### Effects

#### Primary template assignment operators

1,2) Assigns the state of other to *this.

If [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") and rhs.has_value() have different values (i.e. one of *this and other contains an expected value [`_val_`](../expected.html#Data_members "cpp/utility/expected") and the other contains an unexpected value [`_unex_`](../expected.html#Data_members "cpp/utility/expected") ﻿), the exposition-only function template [`_reinit-expected_`](operator=.html#Helper_function_template) is called to safely update the state.

1) The contained value is assigned as follows:  Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Value of other.has_value()  
---|---  
true | false  
true | `_val_`` `= *other; | `_reinit-expected_`  
` `(`_unex_` ,` `` _val_` , other.error());  
false | `_reinit-expected_`  
` `(`_val_` ,` `` _unex_` , *other); | `_unex_`` `= other.error();  
  
2) The contained value is assigned as follows:  Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Value of other.has_value()  
---|---  
true | false  
true | `_val_`` `= std::move(*other); | `_reinit-expected_`  
` `(`_unex_` ,` `` _val_` , std::move(other.error()));  
false | `_reinit-expected_`  
` `(`_val_` ,` `` _unex_` ,  
` `std::move(*other)); | `_unex_`` `= std::move(other.error());  
  
Then, if no exception was thrown, executes [`_has_val_`](../expected.html#Data_members "cpp/utility/expected")` `= other.has_value();.

3) The expected value is assigned as follows:  Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Equivalent to   
---|---  
true | `_val_`` `= [std::forward](../forward.html)<U>(v);  
false | `_reinit-expected_`(`_val_` ,` `` _unex_` , [std::forward](../forward.html)<U>(v));  
`_has_val_`` `= false;  
  
4,5) The unexpected value is assigned as follows:  Overload  | Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Equivalent to   
---|---|---  
([4](operator=.html#Version_4)) | true | `_reinit-expected_`(`_val_` ,` `` _unex_` , [std::forward](../forward.html)<const G&>(e.error()));  
`_has_val_`` `= false;  
false | `_unex_`` `= [std::forward](../forward.html)<const G&>(e.error());  
([5](operator=.html#Version_5)) | true | `_reinit-expected_`(`_val_` ,` `` _unex_` , [std::forward](../forward.html)<G>(e.error()));  
`_has_val_`` `= false;  
false | `_unex_`` `= [std::forward](../forward.html)<G>(e.error());  
  
#### void partial specialization assignment operators

6) The unexpected value is assigned or destroyed as follows:  Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Value of other.has_value()  
---|---  
true | false  
true | (no effects)  | [std::construct_at](../../memory/construct_at.html)  
` `([std::addressof](../../memory/addressof.html)(`_unex_`), rhs.`_unex_`);  
`_has_val_`` `= false;  
false | [std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(`_unex_`));  
`_has_val_`` `= true; | `_unex_`` `= other.error();  
  
7) The unexpected value is assigned or destroyed as follows:  Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Value of other.has_value()  
---|---  
true | false  
true | (no effects)  | [std::construct_at](../../memory/construct_at.html)  
` `([std::addressof](../../memory/addressof.html)(`_unex_`),  
` `std::move(rhs.`_unex_`));  
`_has_val_`` `= false;  
false | [std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(`_unex_`));  
`_has_val_`` `= true; | `_unex_`` `= std::move(other.error());  
  
8,9) The unexpected value is assigned as follows:  Overload  | Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Equivalent to   
---|---|---  
([8](operator=.html#Version_8)) | true | [std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(`_unex_`),  
` `[std::forward](../forward.html)<const G&>(e.error()));  
`_has_val_`` `= false;  
false | `_unex_`` `= [std::forward](../forward.html)<const G&>(e.error());  
([9](operator=.html#Version_9)) | true | [std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(`_unex_`), [std::forward](../forward.html)<G>(e.error()));  
`_has_val_`` `= false;  
false | `_unex_`` `= [std::forward](../forward.html)<G>(e.error());  
  
#### Helper function template

The exposition-only function template `_reinit-expected_` is “defined” as follows: 
    
    
    template<class NewType, class OldType, class... Args>
    constexpr void reinit-expected(NewType& new_val, OldType& old_val, Args&&... args)
    {
        // Case 1: the construction of “new_val” is non-throwing:
        // “new_val” can be directly constructed after destroying “old_val”
        if constexpr ([std::is_nothrow_constructible_v](../../types/is_constructible.html)<NewType, Args...>)
        {
            [std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(old_val));
            [std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(new_val), [std::forward](../forward.html)<Args>(args)...);
        }
        // Case 2: the move construction of “new_val” is non-throwing:
        // constuct a temporary NewType object first
        // (“old_val” is left intact if an exception is thrown from this construction)
        else if constexpr ([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<NewType>)
        {
            NewType temp([std::forward](../forward.html)<Args>(args)...); // may throw
            [std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(old_val));
            [std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(new_val), std::move(temp));
        }
        // Case 3: the construction of “new_val” is potentially-throwing:
        // a backup of “old_val” is required in order to recover from an exception
        else
        {
            OldType temp(std::move(old_val)); // may throw
            [std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(old_val));
            try
            {
                [std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(new_val),
                                  [std::forward](../forward.html)<Args>(args)...); // may throw
            }
            catch (...)
            {
                [std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(old_val), std::move(temp));
                throw;
            }
        }
    }

This function template is called when the assignment is going to make *this hold the alternative value (i.e. from expected value to unexpected value, or from unexpected value to expected value). 

In this case, the old value oldval needs to be destroyed before constructing the new value newval. However, the construction of newval may throw an exception. In order to provide [strong exception safety guarantee](../../language/exceptions.html#Exception_safety "cpp/language/exceptions"), the old value needs to be restored before rethrowing the exception so that *this will have a valid state while the exception is being handled. 

### Return value

1-9) *this

### Constraints and supplement information

#### Primary template assignment operators

1) This overload is defined as deleted unless all following values are true: 

  * [std::is_copy_assignable_v](../../types/is_copy_assignable.html)<T>
  * [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T>
  * [std::is_copy_assignable_v](../../types/is_copy_assignable.html)<E>
  * [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<E>
  * [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> || [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E>



2) This overload participates in overload resolution only if all following values are true: 

  * [std::is_move_assignable_v](../../types/is_move_assignable.html)<T>
  * [std::is_move_constructible_v](../../types/is_move_constructible.html)<T>
  * [std::is_move_assignable_v](../../types/is_move_assignable.html)<E>
  * [std::is_move_constructible_v](../../types/is_move_constructible.html)<E>
  * [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> || [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E>



3) This overload participates in overload resolution only if all following conditions are satisfied: 

  * [std::is_same_v](../../types/is_same.html)<expected, [std::remove_cvref_t](../../types/remove_cvref.html)<U>> is false. 
  * [std::remove_cvref_t](../../types/remove_cvref.html)<U> is not a specialization of `std::unexpected`. 
  * All following values are true: 
    * [std::is_constructible_v](../../types/is_constructible.html)<T, U>
    * [std::is_assignable_v](../../types/is_assignable.html)<T&, U>
    * [std::is_nothrow_constructible_v](../../types/is_constructible.html)<T, U> || [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> ||  
[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E>



4) This overload participates in overload resolution only if all following values are true: 

  * [std::is_constructible_v](../../types/is_constructible.html)<E, const G&>
  * [std::is_assignable_v](../../types/is_assignable.html)<E&, const G&>
  * [std::is_nothrow_constructible_v](../../types/is_constructible.html)<E, const G&> || [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> ||  
[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E>



5) This overload participates in overload resolution only if all following values are true: 

  * [std::is_constructible_v](../../types/is_constructible.html)<E, G>
  * [std::is_assignable_v](../../types/is_assignable.html)<E&, G>
  * [std::is_nothrow_constructible_v](../../types/is_constructible.html)<E, G> || [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> ||  
[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E>



#### void partial specialization assignment operators

6) This overload is defined as deleted unless [std::is_copy_assignable_v](../../types/is_copy_assignable.html)<E> and [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<E> are both true.

7) This overload participates in overload resolution only if [std::is_move_constructible_v](../../types/is_move_constructible.html)<E> and [std::is_move_assignable_v](../../types/is_move_assignable.html)<E> are both true.

8) This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, const G&> and [std::is_assignable_v](../../types/is_assignable.html)<E&, const G&> are both true.

9) This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, G> and [std::is_assignable_v](../../types/is_assignable.html)<E&, G> are both true.

### Exceptions

2)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(  


[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> && [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<T> &&  


[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E> && [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<E>)

7)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E> && [std::is_nothrow_move_assignable_v](../../types/is_move_assignable.html)<E>)

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3886](https://cplusplus.github.io/LWG/issue3886) | C++23  | the default template argument of overload ([3](operator=.html#Version_3)) was `T` | changed to [std::remove_cv_t](../../types/remove_cv.html)<T>  
[LWG 4025](https://cplusplus.github.io/LWG/issue4025) | C++23  | overload ([7](operator=.html#Version_7)) was defined as deleted if `E` is not  
move constructible or not move assignable  | it does not participate in  
overload resolution in this case   
  
### See also

[ emplace](emplace.html "cpp/utility/expected/emplace") |  constructs the expected value in-place   
(public member function)   
---|---
