 
  


  
  
  
  
  
  
  
  
  
  
  


  
  
  
  
[operator newoperator new[]](operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete")  
[nothrow_t](nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](nothrow.html "cpp/memory/new/nothrow")  
[new_handler](new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")  
**bad_array_new_length**(C++11)  
[align_val_t](align_val_t.html "cpp/memory/new/align val t")(C++17)  
[destroying_delete_t](destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
[launder](../../utility/launder.html "cpp/utility/launder")(C++17)  
[Smart pointers](../../memory.html#Smart_pointers "cpp/memory")  
[unique_ptr](../unique_ptr.html "cpp/memory/unique ptr")(C++11)  
[shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")(C++11)  
[weak_ptr](../weak_ptr.html "cpp/memory/weak ptr")(C++11)  
[auto_ptr](../auto_ptr.html "cpp/memory/auto ptr")(until C++17*)  
[owner_less](../owner_less.html "cpp/memory/owner less")(C++11)  
[owner_less<void>](../owner_less_void.html "cpp/memory/owner less void")(C++17)  
[owner_hash](../owner_hash.html "cpp/memory/owner hash")(C++26)  
[owner_equal](../owner_equal.html "cpp/memory/owner equal")(C++26)  
[enable_shared_from_this](../enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11)  
[bad_weak_ptr](../bad_weak_ptr.html "cpp/memory/bad weak ptr")(C++11)  
[default_delete](../default_delete.html "cpp/memory/default delete")(C++11)  
[out_ptr_t](../out_ptr_t.html "cpp/memory/out ptr t")(C++23)  
[inout_ptr_t](../inout_ptr_t.html "cpp/memory/inout ptr t")(C++23)  
[Miscellaneous](../../memory.html#Miscellaneous "cpp/memory")  
[pointer_traits](../pointer_traits.html "cpp/memory/pointer traits")(C++11)  
[to_address](../to_address.html "cpp/memory/to address")(C++20)  
[addressof](../addressof.html "cpp/memory/addressof")(C++11)  
[align](../align.html "cpp/memory/align")(C++11)  
[assume_aligned](../assume_aligned.html "cpp/memory/assume aligned")(C++20)  
[is_sufficiently_aligned](../is_sufficiently_aligned.html "cpp/memory/is sufficiently aligned")(C++26)  
[C Library](../c.html "cpp/memory/c")  
| [malloc](../c/malloc.html "cpp/memory/c/malloc")  
---  
[calloc](../c/calloc.html "cpp/memory/c/calloc")  
[realloc](../c/realloc.html "cpp/memory/c/realloc")  
  
| [free](../c/free.html "cpp/memory/c/free")  
---  
[aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


[Low level memory management](../new.html "cpp/memory/new")

[Functions](../new.html#Functions "cpp/memory/new")  
---  
[operator newoperator new[]](operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete")  
[get_new_handler](get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[set_new_handler](set_new_handler.html "cpp/memory/new/set new handler")  
[Classes](../new.html#Classes "cpp/memory/new")  
[bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")  
**bad_array_new_length**(C++11)  
[align_val_t](align_val_t.html "cpp/memory/new/align val t")(C++17)  
[Types](../new.html#Types "cpp/memory/new")  
[new_handler](new_handler.html "cpp/memory/new/new handler")  
[Objects](../new.html#Objects "cpp/memory/new")  
[nothrow](nothrow.html "cpp/memory/new/nothrow")  
[destroying_delete](destroying_delete_t.html "cpp/memory/new/destroying delete")(C++20)  
[Object access](../new.html#Object_access "cpp/memory/new")  
[launder](../../utility/launder.html "cpp/utility/launder")(C++17)  
  


Defined in header `[<new>](../../header/new.html "cpp/header/new")` |  |   
---|---|---  
class bad_array_new_length : [std::bad_alloc](bad_alloc.html) |  |  (since C++11)  
| |   
  
`std::bad_array_new_length` is the type of the object thrown as exceptions by the [new-expressions](../../language/new.html "cpp/language/new") to report invalid array lengths if 

  1. Array length is negative, 
  2. Total size of the new array would exceed implementation-defined maximum value, 
  3. The number of initializer-clauses exceeds the number of elements to initialize. 



Only the first array dimension may generate this exception; dimensions other than the first are constant expressions and are checked at compile time. 

![std-bad array new length-inheritance.svg](https://upload.cppreference.com/mwiki/images/9/98/std-bad_array_new_length-inheritance.svg)

Inheritance diagram

## Contents

  * [1 Member functions](bad_array_new_length.html#Member_functions)
  * [2 std::bad_array_new_length::bad_array_new_length](bad_array_new_length.html#std::bad_array_new_length::bad_array_new_length)
    * [2.1 Parameters](bad_array_new_length.html#Parameters)
  * [3 std::bad_array_new_length::operator=](bad_array_new_length.html#std::bad_array_new_length::operator.3D)
    * [3.1 Parameters](bad_array_new_length.html#Parameters_2)
    * [3.2 Return value](bad_array_new_length.html#Return_value)
  * [4 std::bad_array_new_length::what](bad_array_new_length.html#std::bad_array_new_length::what)
    * [4.1 Return value](bad_array_new_length.html#Return_value_2)
    * [4.2 Notes](bad_array_new_length.html#Notes)
  * [5 Inherited from std::bad_alloc](bad_array_new_length.html#Inherited_from_std::bad_alloc)
  * [6 Inherited from std::exception](bad_array_new_length.html#Inherited_from_std::exception)
    * [6.1 Member functions](bad_array_new_length.html#Member_functions_2)
    * [6.2 Notes](bad_array_new_length.html#Notes_2)
    * [6.3 Example](bad_array_new_length.html#Example)
    * [6.4 See also](bad_array_new_length.html#See_also)

  
---  
  
### Member functions

(constructor) |  constructs a new `bad_array_new_length` object   
(public member function)  
---|---  
operator= |  replaces the `bad_array_new_length` object   
(public member function)  
what |  returns the explanatory string   
(public member function)  
  
##  std::bad_array_new_length::bad_array_new_length

bad_array_new_length() noexcept; |  (1) | (since C++11)   
(constexpr since C++26)  
---|---|---  
bad_array_new_length( const bad_array_new_length& other ) noexcept; |  (2) | (since C++11)   
(constexpr since C++26)  
| |   
  
Constructs a new `bad_array_new_length` object with an implementation-defined null-terminated byte string which is accessible through [`what()`](../../error/exception/what.html "cpp/error/exception/what"). 

1) Default constructor.

2) Copy constructor. If *this and other both have dynamic type `std::bad_array_new_length` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0.

###  Parameters

other  |  \-  |  another exception object to copy   
---|---|---  
  
##  std::bad_array_new_length::operator=

bad_array_new_length& operator=( const bad_array_new_length& other ) noexcept; |  | (since C++11)   
(constexpr since C++26)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::bad_array_new_length` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

##  std::bad_array_new_length::what

virtual const char* what() const noexcept; |  | (since C++11)   
(constexpr since C++26)  
---|---|---  
| |   
  
Returns the explanatory string. 

###  Return value

Pointer to an implementation-defined null-terminated string with explanatory information. The string is suitable for conversion and display as a [std::wstring](../../string/basic_string.html "cpp/string/basic string"). The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g. copy assignment operator) on the exception object is called. 

The returned string is encoded with the ordinary literal encoding during constant evaluation.  | (since C++26)  
---|---  
  
###  Notes

Implementations are allowed but not required to override `what()`. 

##  Inherited from [ std::bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")

##  Inherited from [std::exception](../../error/exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](../../error/exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](../../error/exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Notes

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_exceptions`](../../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202411L`](../../compiler_support/26.html#cpp_lib_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | constexpr for exception types   
  
### Example

Three conditions where `std::bad_array_new_length` should be thrown:

Run this code
    
    
    #include <climits>
    #include <iostream>
    #include <new>
     
    int main()
    {
        try
        {
            int negative = -1;
            new int[negative];
        }
        catch (const std::bad_array_new_length& e)
        {
            [std::cout](../../io/cout.html) << "1) " << e.what() << ": negative size\n";
        }
     
        try
        {
            int small = 1;
            new int[small]{1,2,3};
        }
        catch (const std::bad_array_new_length& e)
        {
            [std::cout](../../io/cout.html) << "2) " << e.what() << ": too many initializers\n";
        }
     
        try
        {
            long large = [LONG_MAX](../../types/climits.html);
            new int[large][1000];
        } 
        catch (const std::bad_array_new_length& e)
        {
            [std::cout](../../io/cout.html) << "3) " << e.what() << ": too large\n";
        }
     
        [std::cout](../../io/cout.html) << "End\n";
    }

Possible output: 
    
    
    1) std::bad_array_new_length: negative size
    2) std::bad_array_new_length: too many initializers
    3) std::bad_array_new_length: too large
    End

### See also

[ operator newoperator new[]](operator_new.html "cpp/memory/new/operator new") |  allocation functions   
(function)   
---|---  
[ bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc") |  exception thrown when memory allocation fails   
(class) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
