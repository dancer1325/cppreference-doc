 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
**function**(C++11)  
[move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23)  
[copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26)  
[function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26)  
[mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11)  
[bad_function_call](bad_function_call.html "cpp/utility/functional/bad function call")(C++11)  
  
| [Partial function application](../../functional.html#Partial_function_application "cpp/utility/functional")  
---  
[bind_frontbind_back](bind_front.html "cpp/utility/functional/bind front")(C++20)(C++23)  
[bind](bind.html "cpp/utility/functional/bind")(C++11)  
[is_bind_expression](is_bind_expression.html "cpp/utility/functional/is bind expression")(C++11)  
[is_placeholder](is_placeholder.html "cpp/utility/functional/is placeholder")(C++11)  
[_1, _2, _3, ...](placeholders.html "cpp/utility/functional/placeholders")(C++11)  
  
| [Function invocation](../../functional.html#Function_invocation "cpp/utility/functional")  
---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
[reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11)  
[refcref](ref.html "cpp/utility/functional/ref")(C++11)(C++11)  
[unwrap_referenceunwrap_ref_decay](unwrap_reference.html "cpp/utility/functional/unwrap reference")(C++20)(C++20)  
  
| [Operator wrappers](../../functional.html#Operator_function_objects "cpp/utility/functional")  
---  
| [plus](plus.html "cpp/utility/functional/plus")  
---  
[minus](minus.html "cpp/utility/functional/minus")  
[negate](negate.html "cpp/utility/functional/negate")  
[multiplies](multiplies.html "cpp/utility/functional/multiplies")  
[divides](divides.html "cpp/utility/functional/divides")  
[modulus](modulus.html "cpp/utility/functional/modulus")  
[bit_and](bit_and.html "cpp/utility/functional/bit and")  
[bit_or](bit_or.html "cpp/utility/functional/bit or")  
[bit_not](bit_not.html "cpp/utility/functional/bit not")(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  


**`std::function`**

[Member functions](function.html#Member_functions "cpp/utility/functional/function")  
---  
[function::function](function/function.html "cpp/utility/functional/function/function")  
[function::~function](function/~function.html "cpp/utility/functional/function/~function")  
[function::operator=](function/operator=.html "cpp/utility/functional/function/operator=")  
[function::swap](function/swap.html "cpp/utility/functional/function/swap")  
[function::assign](function/assign.html "cpp/utility/functional/function/assign")(until C++17)  
[function::operator bool](function/operator_bool.html "cpp/utility/functional/function/operator bool")  
[function::operator()](function/operator\(\).html "cpp/utility/functional/function/operator\(\)")  
[function::target_type](function/target_type.html "cpp/utility/functional/function/target type")  
[function::target](function/target.html "cpp/utility/functional/function/target")  
[Non-member functions](function.html#Non-member_functions "cpp/utility/functional/function")  
[operator==operator!=](function/operator_cmp.html "cpp/utility/functional/function/operator cmp")(until C++20)  
[swap(std::function)](function/swap2.html "cpp/utility/functional/function/swap2")  
[Helper classes](function.html#Helper_classes "cpp/utility/functional/function")  
[uses_allocator<std::function>](function/uses_allocator.html "cpp/utility/functional/function/uses allocator")(until C++17)  
[Deduction guides](function/deduction_guides.html "cpp/utility/functional/function/deduction guides")(C++17)  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class >  
class function; /* undefined */ |  |  (since C++11)  
template< class R, class... Args >  
class function<R(Args...)>; |  |  (since C++11)  
| |   
  
Class template `std::function` is a general-purpose polymorphic function wrapper. Instances of `std::function` can store, copy, and invoke any [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") [Callable](../../named_req/Callable.html "cpp/named req/Callable") _target_ \-- functions (via pointers thereto), [lambda expressions](../../language/lambda.html "cpp/language/lambda"), [bind expressions](bind.html "cpp/utility/functional/bind"), or other function objects, as well as pointers to member functions and pointers to data members. 

The stored callable object is called the _target_ of `std::function`. If a `std::function` contains no target, it is called _empty_. Invoking the _target_ of an _empty_ `std::function` results in [std::bad_function_call](bad_function_call.html "cpp/utility/functional/bad function call") exception being thrown. 

`std::function` satisfies the requirements of [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

## Contents

  * [1 Member types](function.html#Member_types)
  * [2 Member functions](function.html#Member_functions)
    * [2.1 Target access](function.html#Target_access)
  * [3 Non-member functions](function.html#Non-member_functions)
  * [4 Helper classes](function.html#Helper_classes)
  * [5 Deduction guides(since C++17)](function.html#Deduction_guides.28since_C.2B.2B17.29)
  * [6 Notes](function.html#Notes)
  * [7 Example](function.html#Example)
  * [8 See also](function.html#See_also)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`result_type` |  `R`  
`argument_type`  
(deprecated in C++17)(removed in C++20) |  `T` if sizeof...(Args)==1 and `T` is the first and only type in `Args...`  
`first_argument_type`  
(deprecated in C++17)(removed in C++20) |  `T1` if sizeof...(Args)==2 and `T1` is the first of the two types in `Args...`  
`second_argument_type`  
(deprecated in C++17)(removed in C++20) |  `T2` if sizeof...(Args)==2 and `T2` is the second of the two types in `Args...`  
  
### Member functions

[ (constructor)](function/function.html "cpp/utility/functional/function/function") |  constructs a new `std::function` instance   
(public member function)   
---|---  
[ (destructor)](function/~function.html "cpp/utility/functional/function/~function") |  destroys a `std::function` instance   
(public member function)   
[ operator=](function/operator=.html "cpp/utility/functional/function/operator=") |  assigns a new target   
(public member function)   
[ swap](function/swap.html "cpp/utility/functional/function/swap") |  swaps the contents   
(public member function)   
[ assign](function/assign.html "cpp/utility/functional/function/assign")(removed in C++17) |  assigns a new target   
(public member function)   
[ operator bool](function/operator_bool.html "cpp/utility/functional/function/operator bool") |  checks if a target is contained   
(public member function)   
[ operator()](function/operator\(\).html "cpp/utility/functional/function/operator\(\)") |  invokes the target   
(public member function) &action=edit)  
  
#####  Target access   
  
[ target_type](function/target_type.html "cpp/utility/functional/function/target type") |  obtains the typeid of the stored target   
(public member function)   
[ target](function/target.html "cpp/utility/functional/function/target") |  obtains a pointer to the stored target   
(public member function)   
  
### Non-member functions

[ std::swap(std::function)](function/swap2.html "cpp/utility/functional/function/swap2")(C++11) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---  
[ operator==operator!=](function/operator_cmp.html "cpp/utility/functional/function/operator cmp")(removed in C++20) |  compares a **std::function** with nullptr   
(function template)   
  
### Helper classes

[ std::uses_allocator<std::function>](function/uses_allocator.html "cpp/utility/functional/function/uses allocator")(C++11) (until C++17) |  specializes the [std::uses_allocator](../../memory/uses_allocator.html "cpp/memory/uses allocator") type trait   
(class template specialization)   
---|---  
  
### [Deduction guides](function/deduction_guides.html "cpp/utility/functional/function/deduction guides")(since C++17)

### Notes

Care should be taken when a `std::function`, whose result type is a reference, is initialized from a lambda expression without a trailing-return-type. Due to the way auto deduction works, such lambda expression will always return a prvalue. Hence, the resulting reference will usually bind to a temporary whose lifetime ends when [`std::function::operator()`](function/operator\(\).html "cpp/utility/functional/function/operator\(\)") returns.  | (until C++23)  
---|---  
If a `std::function` returning a reference is initialized from a function or function object returning a prvalue (including a lambda expression without a trailing-return-type), the program is ill-formed because binding the returned reference to a temporary object is forbidden.  | (since C++23)  
      
    
    std::function<const int&()> F([] { return 42; }); // Error since C++23: can't bind
                                                      // the returned reference to a temporary
    int x = F(); // Undefined behavior until C++23: the result of F() is a dangling reference
     
    std::function<int&()> G([]() -> int& { static int i{0x2A}; return i; }); // OK
     
    std::function<const int&()> H([i{052}] -> const int& { return i; }); // OK

### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
     
    struct Foo
    {
        Foo(int num) : num_(num) {}
        void print_add(int i) const { [std::cout](../../io/cout.html) << num_ + i << '\n'; }
        int num_;
    };
     
    void print_num(int i)
    {
        [std::cout](../../io/cout.html) << i << '\n';
    }
     
    struct PrintNum
    {
        void operator()(int i) const
        {
            [std::cout](../../io/cout.html) << i << '\n';
        }
    };
     
    int main()
    {
        // store a free function
        std::function<void(int)> f_display = print_num;
        f_display(-9);
     
        // store a lambda
        std::function<void()> f_display_42 = []() { print_num(42); };
        f_display_42();
     
        // store the result of a call to std::bind
        std::function<void()> f_display_31337 = [std::bind](bind.html)(print_num, 31337);
        f_display_31337();
     
        // store a call to a member function
        std::function<void(const Foo&, int)> f_add_display = &Foo::print_add;
        const Foo foo(314159);
        f_add_display(foo, 1);
        f_add_display(314159, 1);
     
        // store a call to a data member accessor
        std::function<int(Foo const&)> f_num = &Foo::num_;
        [std::cout](../../io/cout.html) << "num_: " << f_num(foo) << '\n';
     
        // store a call to a member function and object
        using std::placeholders::_1;
        std::function<void(int)> f_add_display2 = [std::bind](bind.html)(&Foo::print_add, foo, _1);
        f_add_display2(2);
     
        // store a call to a member function and object ptr
        std::function<void(int)> f_add_display3 = [std::bind](bind.html)(&Foo::print_add, &foo, _1);
        f_add_display3(3);
     
        // store a call to a function object
        std::function<void(int)> f_display_obj = PrintNum();
        f_display_obj(18);
     
        auto factorial = [](int n)
        {
            // store a lambda object to emulate "recursive lambda"; aware of extra overhead
            std::function<int(int)> fac = [&](int n) { return (n < 2) ? 1 : n * fac(n - 1); };
            // note that "auto fac = [&](int n) {...};" does not work in recursive calls
            return fac(n);
        };
        for (int i{5}; i != 8; ++i)
            [std::cout](../../io/cout.html) << i << "! = " << factorial(i) << ";  ";
        [std::cout](../../io/cout.html) << '\n';
    }

Possible output: 
    
    
    -9
    42
    31337
    314160
    314160
    num_: 314159
    314161
    314162
    18
    5! = 120;  6! = 720;  7! = 5040;

### See also

[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
---|---  
[ copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26) |  copyable wrapper of any copy constructible callable object that supports qualifiers in a given call signature   
(class template)   
[ function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26) |  non-owning wrapper of any callable object   
(class template)   
[ bad_function_call](bad_function_call.html "cpp/utility/functional/bad function call")(C++11) |  the exception thrown when invoking an empty **std::function**   
(class)   
[ mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11) |  creates a function object out of a pointer to a member   
(function template)   
[`**typeid**`](../../language/typeid.html "cpp/language/typeid") |  queries information of a type, returning a [std::type_info](../../types/type_info.html "cpp/types/type info") object representing the type 
