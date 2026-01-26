 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
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
**expected::swap**  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Primary template |  |   
---|---|---  
constexpr void swap( expected& other ) noexcept(/* see below */); |  (1)  |  (since C++23)  
void partial specialization |  |   
constexpr void swap( expected& other ) noexcept(/* see below */); |  (2)  |  (since C++23)  
| |   
  
Swaps the contents with those of other. 

1) The contained values are swapped as follows:  Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Value of other.has_value()  
---|---  
true | false  
true | using [std::swap](../../algorithm/swap.html);  
swap([`_val_`](../expected.html#Data_members "cpp/utility/expected") , rhs.`_val_`); | see below   
false | other.swap(*this); | using [std::swap](../../algorithm/swap.html);  
swap([`_unex_`](../expected.html#Data_members "cpp/utility/expected") , rhs.`_unex_`);  
  
If [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") is true and other.has_value() is false, equivalent to: 

// Case 1: the move constructions of unexpected values are non-throwing:  
// “other.unex” will be restored if the construction of “other.val” fails  
if constexpr ([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E>)  
{  
` `E temp(std::move(other.`_unex_`));  
` `[std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(other.`_unex_`));  
` `try  
` `{  
` `[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(other.`_val_`), std::move(`_val_`)); // may throw  
` `[std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(`_val_`));  
` `[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(`_unex_`), std::move(temp));  
` `}  
` `catch(...)  
` `{  
` `[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(other.`_unex_`), std::move(temp));  
` `throw;  
` `}  
}  
// Case 2: the move constructions of expected values are non-throwing:  
// “this->val” will be restored if the construction of “this->unex” fails  
else  
{  
` `T temp(std::move(`_val_`));  
` `[std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(`_val_`));  
` `try  
` `{  
` `[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(`_unex_`), std::move(other.`_unex_`)); // may throw` `  
` `[std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(other.`_unex_`));  
` `[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(other.`_val_`), std::move(temp));  
` `}  
` `catch(...)  
` `{  
` `[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(`_val_`), std::move(temp));  
` `throw;  
` `}  
}  
[`_has_val_`](../expected.html#Data_members "cpp/utility/expected")` `= false;  
rhs.`_has_val_`` `= true;

This overload participates in overload resolution only if all following values are true: 

  * [std::is_swappable_v](../../types/is_swappable.html)<T>
  * [std::is_swappable_v](../../types/is_swappable.html)<E>
  * [std::is_move_constructible_v](../../types/is_move_constructible.html)<T> && [std::is_move_constructible_v](../../types/is_move_constructible.html)<E>
  * [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> || [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E>



2) The unexpected values are swapped as follows:  Value of  
[`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") | Value of other.has_value()  
---|---  
true | false  
true | using [std::swap](../../algorithm/swap.html);  
swap([`_val_`](../expected.html#Data_members "cpp/utility/expected") , rhs.`_val_`); | [std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)(`_unex_`),  
` `std::move(rhs.`_unex_`));  
[std::destroy_at](../../memory/destroy_at.html)([std::addressof](../../memory/addressof.html)(rhs.`_unex_`));  
`_has_val_`` `= false;  
rhs.`_has_val_`` `= true;  
false | other.swap(*this); | using [std::swap](../../algorithm/swap.html);  
swap([`_unex_`](../expected.html#Data_members "cpp/utility/expected") , rhs.`_unex_`);  
  
This overload participates in overload resolution only if [std::is_swappable_v](../../types/is_swappable.html)<E> and [std::is_move_constructible_v](../../types/is_move_constructible.html)<E> are both true.

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Exceptions](swap.html#Exceptions)
  * [3 Example](swap.html#Example)
  * [4 See also](swap.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  the `expected` object to exchange the contents with   
---|---|---  
  
### Exceptions

1)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(  


[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> && [std::is_nothrow_swappable_v](../../types/is_swappable.html)<T> &&  
[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E> && [std::is_nothrow_swappable_v](../../types/is_swappable.html)<E>  


)

2)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(  


[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<E> && [std::is_nothrow_swappable_v](../../types/is_swappable.html)<E>  


)

### Example

Run this code
    
    
    #include <expected>
    #include <iostream>
    #include <string_view>
     
    using Ex = [std::expected](../expected.html)<[std::string](../../string/basic_string.html), int>;
     
    void show(const Ex& ex1, const Ex& ex2, [std::string_view](../../string/basic_string_view.html) term = "\n")
    {
        for (int i{}; i != 2; ++i)
        {
            [std::cout](../../io/cout.html) << (i ? "ex2" : "ex1");
            if (const Ex& ex = (i ? ex2 : ex1); ex.has_value())
                [std::cout](../../io/cout.html) << ".value() = " << *ex << "  ";
            else
                [std::cout](../../io/cout.html) << ".error() = " << ex.error() << "  ";
        }
        [std::cout](../../io/cout.html) << term;
    }
     
    int main()
    {
        Ex ex1("\N{CAT FACE}");
        Ex ex2{"\N{GREEN HEART}"};
        show(ex1, ex2, "after ex1.swap(ex2):\n");
        ex1.swap(ex2);
        show(ex1, ex2, "\n\n");
     
        ex2 = [std::unexpected](unexpected.html)(13);
        show(ex1, ex2, "after ex1.swap(ex2):\n");
        ex1.swap(ex2);
        show(ex1, ex2, "\n\n");
     
        ex2 = [std::unexpected](unexpected.html)(37);
        show(ex1, ex2, "after ex1.swap(ex2):\n");
        ex1.swap(ex2);
        show(ex1, ex2);
    }

Output: 
    
    
    ex1.value() = 🐱  ex2.value() = 💚  after ex1.swap(ex2):
    ex1.value() = 💚  ex2.value() = 🐱 
     
    ex1.value() = 💚  ex2.error() = 13  after ex1.swap(ex2):
    ex1.error() = 13  ex2.value() = 💚 
     
    ex1.error() = 13  ex2.error() = 37  after ex1.swap(ex2):
    ex1.error() = 37  ex2.error() = 13

### See also

[ swap(std::expected)](swap2.html "cpp/utility/expected/swap2")(C++23) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function)   
---|---
