# Global objects

* `cout` & `wcout`
  * allows
    * controlling the output -- to -- stream buffer /
      * implementation dependant
      * derived -- from -- [std::streambuf](basic_streambuf.md)
      * related -- to -- [C's stdout](../../cpp/io/c/std_streams.md) 
  * initialized |
    * DURING constructing FIRST [std::ios_base::Init](ios_base/Init.md), OR
    * BEFORE constructing FIRST [std::ios_base::Init](ios_base/Init.md)
  * AVAILABLE to use them
    * static objects' constructors & destructors
      * requirements
        * objects [ordered initialized](../language/initialization.html#Non-local_variables "cpp/language/initialization")
        * [`<iostream>`](../header/iostream.md) is included BEFORE defining the object

* defined | [<iostream>'s header](../header/iostream.md)   

```
extern std::ostream cout;   
extern std::wostream wcout;
```
 

Unless std::ios_base::sync_with_stdio(false) has been issued, it is safe to concurrently access these objects from multiple threads for
both formatted and unformatted output. 

By specification of [std::cin](cin.html "cpp/io/cin"), [std::cin](cin.html).tie() returns &std::cout
This means that any input operation on `std::cin` executes std::cout.flush() (via [std::basic_istream::sentry](basic_istream/sentry.html "cpp/io/basic istream/sentry")'s constructor). Similarly, [std::wcin](cin.html).tie() returns &std::wcout. 

* `std::cerr.tie()`
  * returns
    * `&std::cout`
  * see [std::cerr](cerr.md) 

* any output operation | `std::cerr`
  * executes -- , via [std::basic_ostream::sentry](basic_ostream/sentry.md)'s constructor, -- `std::cout.flush()` 

* `std::wcerr.tie()`  
  * returns
    * | C++11,
      * `&std::wcout`
  * see [std::wcerr](cerr.md)

###  Notes

* 'c'
  * == "character"

* `cout`
  * == "character output"
* `wcout`
  * == "wide character output" 

Because [dynamic initialization](../language/initialization.html#Dynamic_initialization "cpp/language/initialization") of [templated](../language/templates.html#Templated_entity "cpp/language/templates") variables are unordered
it is not guaranteed that `std::cout` has been initialized to a usable state before the initialization of such variables begins, unless an object of type [std::ios_base::Init](ios_base/Init.html "cpp/io/ios base/Init") has been constructed.

###  See also

[ Init](ios_base/Init.html "cpp/io/ios base/Init") |  initializes standard stream objects   
(public member class of `std::ios_base`)   
---|---  
[ cerrwcerr](cerr.html "cpp/io/cerr") |  writes to the standard C error stream [stderr](c/std_streams.html "cpp/io/c/std streams"), unbuffered  
(global object)  
[ clogwclog](clog.html "cpp/io/clog") |  writes to the standard C error stream [stderr](c/std_streams.html "cpp/io/c/std streams")  
(global object)  
[ stdinstdoutstderr](c/std_streams.html "cpp/io/c/std streams") |  expression of type FILE* associated with the input stream  
expression of type FILE* associated with the output stream  
expression of type FILE* associated with the error output stream   
(macro constant) 
