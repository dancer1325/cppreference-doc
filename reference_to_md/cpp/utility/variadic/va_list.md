 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Variadic functions](../variadic.html "cpp/utility/variadic")

[va_start](va_start.html "cpp/utility/variadic/va start")  
---  
[va_arg](va_arg.html "cpp/utility/variadic/va arg")  
[va_copy](va_copy.html "cpp/utility/variadic/va copy")(C++11)  
[va_end](va_end.html "cpp/utility/variadic/va end")  
**va_list**  
  


Defined in header `[<cstdarg>](../../header/cstdarg.html "cpp/header/cstdarg")` |  |   
---|---|---  
typedef /* unspecified */ va_list; |  |   
| |   
  
`va_list` is a complete object type (in practice, a unique built-in type or char*) suitable for holding the information needed by the macros [va_start](va_start.html "cpp/utility/variadic/va start"), [va_copy](va_copy.html "cpp/utility/variadic/va copy"), [va_arg](va_arg.html "cpp/utility/variadic/va arg"), and [va_end](va_end.html "cpp/utility/variadic/va end"). 

If a `va_list` instance is created, passed to another function, and used via [va_arg](va_arg.html "cpp/utility/variadic/va arg") in that function, then any subsequent use in the calling function should be preceded by a call to [va_end](va_end.html "cpp/utility/variadic/va end"). 

It is legal to pass a pointer to a `va_list` object to another function and then use that object after the function returns. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ va_start](va_start.html "cpp/utility/variadic/va start") |  enables access to variadic function arguments   
(function macro)   
---|---  
[ va_copy](va_copy.html "cpp/utility/variadic/va copy")(C++11) |  makes a copy of the variadic function arguments   
(function macro)   
[ va_arg](va_arg.html "cpp/utility/variadic/va arg") |  accesses the next variadic function argument   
(function macro)   
[ va_end](va_end.html "cpp/utility/variadic/va end") |  ends traversal of the variadic function arguments   
(function macro)   
[C documentation](../../../c/variadic/va_list.html "c/variadic/va list") for va_list
