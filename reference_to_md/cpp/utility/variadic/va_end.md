 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Variadic functions](../variadic.html "cpp/utility/variadic")

[va_start](va_start.html "cpp/utility/variadic/va start")  
---  
[va_arg](va_arg.html "cpp/utility/variadic/va arg")  
[va_copy](va_copy.html "cpp/utility/variadic/va copy")(C++11)  
**va_end**  
[va_list](va_list.html "cpp/utility/variadic/va list")  
  


Defined in header `[<cstdarg>](../../header/cstdarg.html "cpp/header/cstdarg")` |  |   
---|---|---  
void va_end( std::va_list ap ); |  |   
| |   
  
The `va_end` macro performs cleanup for an ap object initialized by a call to [va_start](va_start.html "cpp/utility/variadic/va start") or [va_copy](va_copy.html "cpp/utility/variadic/va copy"). `va_end` may modify ap so that it is no longer usable. 

If there is no corresponding call to [va_start](va_start.html "cpp/utility/variadic/va start") or [va_copy](va_copy.html "cpp/utility/variadic/va copy"), or if `va_end` is not called before a function that calls [va_start](va_start.html "cpp/utility/variadic/va start") or [va_copy](va_copy.html "cpp/utility/variadic/va copy") returns, the behavior is undefined. 

### Parameters

ap  |  \-  |  an instance of the [va_list](va_list.html "cpp/utility/variadic/va list") type to clean up   
---|---|---  
  
### Expanded value

(none) 

### See also

[ va_start](va_start.html "cpp/utility/variadic/va start") |  enables access to variadic function arguments   
(function macro)   
---|---  
[ va_copy](va_copy.html "cpp/utility/variadic/va copy")(C++11) |  makes a copy of the variadic function arguments   
(function macro)   
[ va_arg](va_arg.html "cpp/utility/variadic/va arg") |  accesses the next variadic function argument   
(function macro)   
[C documentation](../../../c/variadic/va_end.html "c/variadic/va end") for va_end
