
  



  
|   
  
---  
[`catch` handler](../language/catch.html "cpp/language/catch")  
  

  
  
  
  
  
  

  


[Preprocessor](../preprocessor.html "cpp/preprocessor")

[#if#ifdef#ifndef#else#elif#elifdef#elifndef#endif](conditional.html "cpp/preprocessor/conditional")(C++23)(C++23)  
---  
[#define#undef#,## operators](replace.html "cpp/preprocessor/replace")  
[#include__has_include](include.html "cpp/preprocessor/include")(C++17)  
**#error #warning**(C++23)  
[#pragma_Pragma](impl.html "cpp/preprocessor/impl")(C++11)  
[#line](line.html "cpp/preprocessor/line")  
[#embed](embed.html "cpp/preprocessor/embed")(C++26)  
  


Shows the given error message and renders the program ill-formed, or shows the given warning message without affecting the validity of the program(since C++23). 

## Contents

  * [1 Syntax](warning.html#Syntax)
  * [2 Explanation](warning.html#Explanation)
  * [3 Notes](warning.html#Notes)
  * [4 Example](warning.html#Example)
  * [5 References](warning.html#References)
  * [6 See also](warning.html#See_also)

  
---  
  
### Syntax  
  
---  
`**#error**` diagnostic-message |  (1)  |   
`**#warning**` diagnostic-message |  (2)  |  (since C++23)  
  
### Explanation

1) After encountering the #error directive, an implementation displays the message diagnostic-message and renders the program ill-formed (the compilation stops).

2) Same as (1), except the validity of the program is not affected and the compilation continues.

diagnostic-message can consist of several words not necessarily in quotes. 

### Notes

Before its standardization in C++23, #warning has been provided by many compilers in all modes as a conforming extension. 

### Example

Run this code
    
    
    #if __STDC_HOSTED__ != 1
    #   error "Not a hosted implementation"
    #endif
     
    #if __cplusplus >= 202302L
    #   warning "Using #warning as a standard feature"
    #endif
     
    #include <iostream>
     
    int main()
    {
        [std::cout](../io/cout.html) << "The implementation used is hosted\n";
    }

Possible output: 
    
    
    The implementation used is hosted

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 15.8 Error directive [cpp.error] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 15.8 Error directive [cpp.error] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 19.5 Error directive [cpp.error] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 16.5 Error directive [cpp.error] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 16.5 Error directive [cpp.error] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 16.5 Error directive [cpp.error] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 16.5 Error directive [cpp.error] 



### See also

[C documentation](../../c/preprocessor/warning.html "c/preprocessor/error") for Diagnostic directives  
---
