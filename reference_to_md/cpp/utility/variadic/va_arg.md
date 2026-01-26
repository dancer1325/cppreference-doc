 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Variadic functions](../variadic.html "cpp/utility/variadic")

[va_start](va_start.html "cpp/utility/variadic/va start")  
---  
**va_arg**  
[va_copy](va_copy.html "cpp/utility/variadic/va copy")(C++11)  
[va_end](va_end.html "cpp/utility/variadic/va end")  
[va_list](va_list.html "cpp/utility/variadic/va list")  
  


Defined in header `[<cstdarg>](../../header/cstdarg.html "cpp/header/cstdarg")` |  |   
---|---|---  
T va_arg( std::va_list ap, T ); |  |   
| |   
  
The `va_arg` macro expands to an expression of type T that corresponds to the next parameter from the [va_list](va_list.html "cpp/utility/variadic/va list") ap. 

Prior to calling `va_arg`, ap must be initialized by a call to either [va_start](va_start.html "cpp/utility/variadic/va start") or [va_copy](va_copy.html "cpp/utility/variadic/va copy"), with no intervening call to [va_end](va_end.html "cpp/utility/variadic/va end"). Each invocation of the `va_arg` macro modifies ap to point to the next variable argument. 

If the type of the next argument in ap (after promotions) is not [compatible](../../../c/language/compatible_type.html#Compatible_types "c/language/type") with T, the behavior is undefined, unless: 

  * one type is a signed integer type, the other type is the corresponding unsigned integer type, and the value is representable in both types; or 
  * one type is pointer to void and the other is a pointer to a character type (char, signed char, or unsigned char). 



If `va_arg` is called when there are no more arguments in ap, the behavior is undefined. 

## Contents

  * [1 Parameters](va_arg.html#Parameters)
  * [2 Expanded value](va_arg.html#Expanded_value)
  * [3 Example](va_arg.html#Example)
  * [4 See also](va_arg.html#See_also)

  
---  
  
### Parameters

ap  |  \-  |  an instance of the [va_list](va_list.html "cpp/utility/variadic/va list") type   
---|---|---  
T  |  \-  |  the type of the next parameter in ap  
  
### Expanded value

The next variable parameter in ap. 

### Example

Run this code
    
    
    #include <cstdarg>
    #include <cstdio>
    #include <iostream>
     
    void print_variance([std::size_t](../../types/size_t.html) count, const char* fmt, ...)
    {
        double sum = 0;
        double sum_sq = 0;
        std::va_list args;
        [va_start](va_start.html)(args, fmt);
        for ([std::size_t](../../types/size_t.html) i = count; i--;)
        {
            double num = va_arg(args, double);
            sum += num;
            sum_sq += num*num;
        }
        [va_end](va_end.html)(args);
        [std::printf](../../io/c/fprintf.html)(fmt, sum_sq / count - (sum / count) * (sum / count));
    }
     
    void nano_printf(const char* fmt, ...)
    {
        std::va_list args;
        [va_start](va_start.html)(args, fmt);
     
        for (const char* p = fmt; *p != '\0'; ++p)
        {
            switch (*p)
            {
            case '%':
                switch (*++p) // read format symbol
                {
                    case 'i':
                        [std::cout](../../io/cout.html) << va_arg(args, int);
                        continue;
                    case 'f':
                        [std::cout](../../io/cout.html) << va_arg(args, double);
                        continue;
                    case 's':
                        [std::cout](../../io/cout.html) << va_arg(args, const char*);
                        continue;
                    case 'c':
                        [std::cout](../../io/cout.html) << static_cast<char>(va_arg(args, int));
                        continue;
                    case '%':
                        [std::cout](../../io/cout.html) << '%';
                        continue;
                    /* ...more cases... */
                }
                break; // format error...
            case '\n':
                [std::cout](../../io/cout.html) << '\n';
                continue;
            case '\t':
                [std::cout](../../io/cout.html) << '\t';
                continue;
            /* ...more cases... */
            }
            [std::cout](../../io/cout.html) << *p;
        }
     
        [va_end](va_end.html)(args);
    }
     
    int main()
    {
        print_variance(4, "%f\n", 25.0, 27.3, 26.9, 25.7);
        nano_printf("Args: %i%% %c%f %s\n", 42, '#', 3.14, "C++");
    }

Output: 
    
    
    0.846875
    Args: 42% #3.14 C++

### See also

[ va_start](va_start.html "cpp/utility/variadic/va start") |  enables access to variadic function arguments   
(function macro)   
---|---  
[ va_copy](va_copy.html "cpp/utility/variadic/va copy")(C++11) |  makes a copy of the variadic function arguments   
(function macro)   
[ va_end](va_end.html "cpp/utility/variadic/va end") |  ends traversal of the variadic function arguments   
(function macro)   
[C documentation](../../../c/variadic/va_arg.html "c/variadic/va arg") for va_arg
