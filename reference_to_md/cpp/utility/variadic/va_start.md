 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Variadic functions](../variadic.html "cpp/utility/variadic")

**va_start**  
---  
[va_arg](va_arg.html "cpp/utility/variadic/va arg")  
[va_copy](va_copy.html "cpp/utility/variadic/va copy")(C++11)  
[va_end](va_end.html "cpp/utility/variadic/va end")  
[va_list](va_list.html "cpp/utility/variadic/va list")  
  


Defined in header `[<cstdarg>](../../header/cstdarg.html "cpp/header/cstdarg")` |  |   
---|---|---  
void va_start( std::va_list ap, parm_n ); |  |   
| |   
  
The `va_start` macro enables access to the variable arguments following the named argument parm_n. 

`va_start` should be invoked with an instance to a valid [va_list](va_list.html "cpp/utility/variadic/va list") object ap before any calls to [va_arg](va_arg.html "cpp/utility/variadic/va arg"). 

If the parm_n is a [pack expansion](../../language/parameter_pack.html#Pack_expansion "cpp/language/parameter pack") or an entity resulting from a [lambda capture](../../language/lambda.html#Lambda_capture "cpp/language/lambda"), the program is ill-formed, no diagnostic required.  | (since C++11)  
---|---  
  
If parm_n is of reference type, or of a type not compatible with the type that results from [default argument promotions](../../language/variadic_arguments.html#Default_conversions "cpp/language/variadic arguments"), the behavior is undefined. 

## Contents

  * [1 Parameters](va_start.html#Parameters)
  * [2 Expanded value](va_start.html#Expanded_value)
  * [3 Notes](va_start.html#Notes)
  * [4 Example](va_start.html#Example)
  * [5 Defect reports](va_start.html#Defect_reports)
  * [6 See also](va_start.html#See_also)

  
---  
  
### Parameters

ap  |  \-  |  an object of the [va_list](va_list.html "cpp/utility/variadic/va list") type   
---|---|---  
parm_n  |  \-  |  the named parameter preceding the first variable parameter   
  
### Expanded value

(none) 

### Notes

`va_start` is required to support parm_n with overloaded `operator&`. 

### Example

Run this code
    
    
    #include <cstdarg>
    #include <iostream>
     
    int add_nums(int count...)
    {
        int result = 0;
        std::va_list args;
        va_start(args, count);
        for (int i = 0; i < count; ++i)
            result += [va_arg](va_arg.html)(args, int);
        [va_end](va_end.html)(args);
        return result;
    }
     
    int main()
    {
        [std::cout](../../io/cout.html) << add_nums(4, 25, 25, 50, 50) << '\n';
    }

Output: 
    
    
    150

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 273](https://cplusplus.github.io/CWG/issues/273.html) | C++98  | it was unclear whether `va_start` is required to  
support parm_ns with overloaded `operator&` | required   
[LWG 2099](https://cplusplus.github.io/LWG/issue2099) | C++98  | the behavior was undefined if parm_n is  
declared with a function, array, or reference type  | the behavior is undefined if  
parm_n is of reference type   
  
### See also

[ va_arg](va_arg.html "cpp/utility/variadic/va arg") |  accesses the next variadic function argument   
(function macro)   
---|---  
[ va_end](va_end.html "cpp/utility/variadic/va end") |  ends traversal of the variadic function arguments   
(function macro)   
[C documentation](../../../c/variadic/va_start.html "c/variadic/va start") for va_start
