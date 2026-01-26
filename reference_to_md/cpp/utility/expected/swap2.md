 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
**swap(std::expected)**  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


friend constexpr void swap( expected& lhs, expected& rhs ) noexcept(/*see below*/); |  |  (since C++23)  
---|---|---  
| |   
  
Overloads the [std::swap](../swap.html "cpp/algorithm/swap") algorithm for std::expected. Exchanges the state of lhs with that of rhs. Effectively calls lhs.swap(rhs). 

This overload participates in overload resolution only if lhs.swap(rhs) is valid. 

This function is not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when [std::expected](../expected.html)<T, E> is an associated class of the arguments. 

## Contents

  * [1 Parameters](swap2.html#Parameters)
  * [2 Return value](swap2.html#Return_value)
  * [3 Exceptions](swap2.html#Exceptions)
  * [4 Example](swap2.html#Example)
  * [5 See also](swap2.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  `expected` objects whose states to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(noexcept(lhs.swap(rhs)))

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
        Ex ex1("\N{SMILING FACE WITH SUNGLASSES}");
        Ex ex2{"\N{SLIGHTLY SMILING FACE}"};
        show(ex1, ex2, "after swap(ex1, ex2):\n");
        [std::swap](../../algorithm/swap.html)(ex1, ex2);
        show(ex1, ex2, "\n\n");
     
        ex2 = [std::unexpected](unexpected.html)(13);
        show(ex1, ex2, "after swap(ex1, ex2):\n");
        [std::swap](../../algorithm/swap.html)(ex1, ex2);
        show(ex1, ex2, "\n\n");
     
        ex2 = [std::unexpected](unexpected.html)(37);
        show(ex1, ex2, "after swap(ex1, ex2):\n");
        [std::swap](../../algorithm/swap.html)(ex1, ex2);
        show(ex1, ex2);
    }

Output: 
    
    
    ex1.value() = 😎  ex2.value() = 🙂  after swap(ex1, ex2):
    ex1.value() = 🙂  ex2.value() = 😎  
     
    ex1.value() = 🙂  ex2.error() = 13  after swap(ex1, ex2):
    ex1.error() = 13  ex2.value() = 🙂  
     
    ex1.error() = 13  ex2.error() = 37  after swap(ex1, ex2):
    ex1.error() = 37  ex2.error() = 13

### See also

[ swap](swap.html "cpp/utility/expected/swap") |  exchanges the contents   
(public member function)   
---|---
