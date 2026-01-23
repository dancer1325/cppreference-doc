
  



  
|   
  
---  
  
| [register](register.html "cpp/keyword/register")  
---  
[reinterpret_cast](reinterpret_cast.html "cpp/keyword/reinterpret cast")  
[requires](requires.html "cpp/keyword/requires")(C++20)  
[return](return.html "cpp/keyword/return")  
[short](short.html "cpp/keyword/short")  
[signed](signed.html "cpp/keyword/signed")  
[sizeof](sizeof.html "cpp/keyword/sizeof")(*)  
[static](../keywords/static.html "cpp/keyword/static")  
[static_assert](static_assert.html "cpp/keyword/static assert")(C++11)  
[static_cast](static_cast.html "cpp/keyword/static cast")  
[struct](struct.html "cpp/keyword/struct")  
[switch](switch.html "cpp/keyword/switch")  
[template](template.html "cpp/keyword/template")  
[this](this.html "cpp/keyword/this")  
[thread_local](thread_local.html "cpp/keyword/thread local")(C++11)  
[throw](throw.html "cpp/keyword/throw")  
[true](true.html "cpp/keyword/true")  
[try](try.html "cpp/keyword/try")  
[typedef](typedef.html "cpp/keyword/typedef")  
[typeid](typeid.html "cpp/keyword/typeid")  
[typename](typename.html "cpp/keyword/typename")  
[union](union.html "cpp/keyword/union")  
[unsigned](unsigned.html "cpp/keyword/unsigned")  
[using](using.html "cpp/keyword/using")  
[virtual](virtual.html "cpp/keyword/virtual")  
[void](void.html "cpp/keyword/void")  
[volatile](volatile.html "cpp/keyword/volatile")  
[wchar_t](wchar_t.html "cpp/keyword/wchar t")  
**while**  
[xor](xor.html "cpp/keyword/xor")  
[xor_eq](xor_eq.html "cpp/keyword/xor eq")  
  
Identifiers with special meaning  
| [final](../identifier_with_special_meaning/final.html "cpp/identifier with special meaning/final")(C++11)  
---  
[import](../identifier_with_special_meaning/import.html "cpp/identifier with special meaning/import")(C++20)  
[module](../identifier_with_special_meaning/module.html "cpp/identifier with special meaning/module")(C++20)  
  
| [override](../identifier_with_special_meaning/override.html "cpp/identifier with special meaning/override")(C++11)  
---  
[post](../identifier_with_special_meaning/post.html "cpp/identifier with special meaning/post")(C++26)  
[pre](../identifier_with_special_meaning/pre.html "cpp/identifier with special meaning/pre")(C++26)  
  
| [replaceable_if_eligible](../identifier_with_special_meaning/replaceable_if_eligible.html "cpp/identifier with special meaning/replaceable if eligible")(C++26)  
---  
[trivially_relocatable_if_eligible](../identifier_with_special_meaning/trivially_relocatable_if_eligible.html "cpp/identifier with special meaning/trivially relocatable if eligible")(C++26)  
  
  
  


### Usage

  * [`while`](../language/while.html "cpp/language/while") loop: as the declaration of the loop 
  * [`do-while`](../language/do.html "cpp/language/do") loop: as the declaration of the terminating condition of the loop 



### Example

Run this code
    
    
    #include <iostream>
     
    int main() noexcept
    {
        int i{3};
     
        // The following 'while' loop statement:
        // 1. (condition) Checks if value of the variable 'i' is greater than zero
        //                and if not, ends the loop execution with end of this point.
        //                Post-decrements the variable 'i' (decreases its value by 1).
        // 2. (statement) Writes out a current value of the variable 'i' to the stdout.
        // 3.             Returns to the point 1 (condition).
     
        while (i --> 0)     // condition: i-- > 0
            [std::cout](../io/cout.html) << i; // statement: std::cout << i;
    }

Output: 
    
    
    210

### See also

  * [`if`](../language/if.html "cpp/language/if") statement: [`if`](../keywords/if.html "cpp/keyword/if"), [`else`](else.html "cpp/keyword/else")



  * [`constexpr` `if` statement](../language/if.html#Constexpr_if "cpp/language/if"): [`constexpr`](constexpr.html "cpp/keyword/constexpr") (`constexpr` `if` statement)

| (since C++17)  
---|---  
  
  * [`consteval` `if` statement](../language/if.html#Consteval_if "cpp/language/if"): [`consteval`](consteval.html "cpp/keyword/consteval") (`consteval` `if` statement)

| (since C++23)  
  
  * [`switch`](../language/switch.html "cpp/language/switch") statement: [`switch`](switch.html "cpp/keyword/switch"), [`case`](case.html "cpp/keyword/case")
  * [`default`](../language/switch.html "cpp/language/switch") (as case label declaration) etc: [`default`](default.html "cpp/keyword/default")
  * [`goto`](../language/goto.html "cpp/language/goto") statement: [`goto`](goto.html "cpp/keyword/goto")
  * [`continue`](../language/continue.html "cpp/language/continue") statement: [`continue`](continue.html "cpp/keyword/continue")
  * [`break`](../language/break.html "cpp/language/break") statement: [`break`](break.html "cpp/keyword/break")
  * [`return`](../language/return.html "cpp/language/return") statement: [`return`](return.html "cpp/keyword/return")



  * [`co_return`](../language/return.html "cpp/language/return") statement (return from a coroutine): [`co_return`](co_return.html "cpp/keyword/co return")

| (since C++20)  
---|---  
  
  * [`do-while`](../language/do.html "cpp/language/do") loop and [`while` loop](../language/while.html "cpp/language/while"): [`do`](do.html "cpp/keyword/do")
  * [`for`](../language/for.html "cpp/language/for") loop and [range-based `for` loop](../language/range-for.html "cpp/language/range-for"): [`for`](for.html "cpp/keyword/for")


