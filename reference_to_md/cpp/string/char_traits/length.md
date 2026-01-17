 
  


[Strings library](../../string.html "cpp/string")

Classes  
---  
[basic_string](../basic_string.html "cpp/string/basic string")  
[basic_string_view](../basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](../char_traits.html "cpp/string/char traits")  
  


[`std::char_traits`](../char_traits.html "cpp/string/char traits")

Member functions  
---  
[char_traits::assign](assign.html "cpp/string/char traits/assign")  
[char_traits::eqchar_traits::lt](cmp.html "cpp/string/char traits/cmp")  
[char_traits::move](move.html "cpp/string/char traits/move")  
[char_traits::copy](copy.html "cpp/string/char traits/copy")  
[char_traits::compare](compare.html "cpp/string/char traits/compare")  
**char_traits::length**  
[char_traits::find](find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static [std::size_t](../../types/size_t.html) length( const char_type* s ); |  |  (constexpr since C++17)  
---|---|---  
| |   
  
Returns the length of the character sequence pointed to by s, that is, the position of the terminating null character (char_type()). 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::length`. 

## Contents

  * [1 Parameters](length.html#Parameters)
  * [2 Return value](length.html#Return_value)
  * [3 Complexity](length.html#Complexity)
  * [4 Example](length.html#Example)

  
---  
  
### Parameters

s  |  \-  |  pointer to a character sequence to return length of   
---|---|---  
  
### Return value

The length of character sequence pointed to by s. 

### Complexity

Linear. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
     
    void print(const char* str)
    {
        [std::cout](../../io/cout.html) << [std::quoted](../../io/manip/quoted.html)(str) << " has length = "
                  << [std::char_traits](../char_traits.html)<char>::length(str) << '\n';
    }
     
    int main()
    {
        print("foo");
     
        [std::string](../basic_string.html) s{"booo"};
        print(s.c_str());
    }

Output: 
    
    
    "foo" has length = 3
    "booo" has length = 4
