
  



  
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
[while](while.html "cpp/keyword/while")  
**xor**  
[xor_eq](xor_eq.html "cpp/keyword/xor eq")  
  
  
  
  


### Usage

  * [alternative operators](../language/operator_alternative.html "cpp/language/operator alternative"): as an alternative for `^`



### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    using bin = [std::bitset](../utility/bitset.html)<8>;
     
    void show(bin z, const char* s, int n)
    {
        if (n == 0) [std::cout](../io/cout.html) << "┌─────────┬──────────┐\n";
        if (n <= 2) [std::cout](../io/cout.html) << "│ "<<s<<" │ " <<z<<" │\n";
        if (n == 2) [std::cout](../io/cout.html) << "└─────────┴──────────┘\n";
    }
     
    int main()
    {
        bin x{"01011010"}; show(x, "x      ", 0);
        bin y{"00111100"}; show(y, "y      ", 1);
        bin z = x xor y;   show(z, "x xor y", 2);
    }

Output: 
    
    
    ┌─────────┬──────────┐
    │ x       │ 01011010 │
    │ y       │ 00111100 │
    │ x xor y │ 01100110 │
    └─────────┴──────────┘

### See also

  * [`and`](and.html "cpp/keyword/and"), [`and_eq`](and_eq.html "cpp/keyword/and eq")
  * [`bitand`](bitand.html "cpp/keyword/bitand"), [`bitor`](bitor.html "cpp/keyword/bitor")
  * [`not`](not.html "cpp/keyword/not"), [`not_eq`](not_eq.html "cpp/keyword/not eq")
  * [`or`](or.html "cpp/keyword/or"), [`or_eq`](or_eq.html "cpp/keyword/or eq")
  * [`xor_eq`](xor_eq.html "cpp/keyword/xor eq")


