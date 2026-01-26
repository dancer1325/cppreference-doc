 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Variadic functions](../variadic.html "cpp/utility/variadic")

[va_start](va_start.html "cpp/utility/variadic/va start")  
---  
[va_arg](va_arg.html "cpp/utility/variadic/va arg")  
**va_copy**(C++11)  
[va_end](va_end.html "cpp/utility/variadic/va end")  
[va_list](va_list.html "cpp/utility/variadic/va list")  
  


Defined in header `[<cstdarg>](../../header/cstdarg.html "cpp/header/cstdarg")` |  |   
---|---|---  
void va_copy( std::va_list dest, std::va_list src ); |  |  (since C++11)  
| |   
  
The `va_copy` macro copies src to dest. 

[va_end](va_end.html "cpp/utility/variadic/va end") should be called on dest before the function returns or any subsequent re-initialization of dest (via calls to [va_start](va_start.html "cpp/utility/variadic/va start") or **va_copy**). 

## Contents

  * [1 Parameters](va_copy.html#Parameters)
  * [2 Expanded value](va_copy.html#Expanded_value)
  * [3 Example](va_copy.html#Example)
  * [4 See also](va_copy.html#See_also)

  
---  
  
### Parameters

dest  |  \-  |  an instance of the [va_list](va_list.html "cpp/utility/variadic/va list") type to initialize   
---|---|---  
src  |  \-  |  the source [va_list](va_list.html "cpp/utility/variadic/va list") that will be used to initialize dest  
  
### Expanded value

(none) 

### Example

Run this code
    
    
    #include <cmath>
    #include <cstdarg>
    #include <iostream>
     
    double sample_stddev(int count, ...) 
    {
        double sum = 0;
        std::va_list args1;
        [va_start](va_start.html)(args1, count);
        std::va_list args2;
        va_copy(args2, args1);
        for (int i = 0; i < count; ++i)
        {
            double num = [va_arg](va_arg.html)(args1, double);
            sum += num;
        }
        [va_end](va_end.html)(args1);
        double mean = sum / count;
     
        double sum_sq_diff = 0;
        for (int i = 0; i < count; ++i)
        {
            double num = [va_arg](va_arg.html)(args2, double);
            sum_sq_diff += (num - mean) * (num - mean);
        }
        [va_end](va_end.html)(args2);
        return [std::sqrt](../../numeric/math/sqrt.html)(sum_sq_diff / count);
    }
     
    int main() 
    {
        [std::cout](../../io/cout.html) << sample_stddev(4, 25.0, 27.3, 26.9, 25.7) << '\n';
    }

Output: 
    
    
    0.920258

### See also

[ va_start](va_start.html "cpp/utility/variadic/va start") |  enables access to variadic function arguments   
(function macro)   
---|---  
[ va_arg](va_arg.html "cpp/utility/variadic/va arg") |  accesses the next variadic function argument   
(function macro)   
[ va_end](va_end.html "cpp/utility/variadic/va end") |  ends traversal of the variadic function arguments   
(function macro)   
[C documentation](../../../c/variadic/va_copy.html "c/variadic/va copy") for va_copy
