 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
[move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23)  
[copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26)  
[function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26)  
**mem_fn**(C++11)  
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
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class M, class T >  
/* unspecified */ mem_fn( M T::* pm ) noexcept; |  |  (since C++11)   
(constexpr since C++20)  
| |   
  
Function template `std::mem_fn` generates wrapper objects for pointers to members, which can store, copy, and invoke a [pointer to member](../../language/pointer.html#Pointers_to_members "cpp/language/pointer"). Both references and pointers (including smart pointers) to an object can be used when invoking a `std::mem_fn`. 

## Contents

  * [1 Parameters](mem_fn.html#Parameters)
  * [2 Return value](mem_fn.html#Return_value)
  * [3 std::mem_fn _return type_](mem_fn.html#std::mem_fn_return_type)
    * [3.1 Member types](mem_fn.html#Member_types)
    * [3.2 Member function](mem_fn.html#Member_function)
    * [3.3 Example](mem_fn.html#Example)
    * [3.4 Defect reports](mem_fn.html#Defect_reports)
    * [3.5 See also](mem_fn.html#See_also)

  
---  
  
### Parameters

pm  |  \-  |  pointer to member that will be wrapped   
---|---|---  
  
### Return value

`std::mem_fn` returns a call wrapper fn of unspecified type that has the following members: 

##  std::mem_fn _return type_

###  Member types

|  type  |  definition   
---|---  
`result_type`(deprecated in C++17) |  the return type of pm if pm is a pointer to member function, not defined for pointer to member object   
`argument_type`(deprecated in C++17) |  `T*`, possibly cv-qualified, if pm is a pointer to member function taking no arguments   
`first_argument_type`(deprecated in C++17) |  `T*` if pm is a pointer to member function taking one argument   
`second_argument_type`(deprecated in C++17) |  `T1` if pm is a pointer to member function taking one argument of type `T1`  
(until C++20)  
  
###  Member function

template< class... Args >  
/* see below */ operator()(Args&&... args) /* cvref-qualifiers */  
noexcept(/* see below */); |  | (constexpr since C++20)  
---|---|---  
| |   
  
The expression fn(args) is equivalent to [`_INVOKE_`](../../functional.html "cpp/utility/functional")(pmd, args), where pmd is the [Callable](../../named_req/Callable.html "cpp/named req/Callable") object held by fn, it is of type `M T::*` and is direct-non-list-initialized with pm. 

Thus, the return type of operator() is [std::result_of](../../types/result_of.html)<decltype(pm)(Args&&...)>::type or equivalently [std::invoke_result_t](../../types/result_of.html)<decltype(pm), Args&&...>, and the value in noexcept specifier is equal to [std::is_nothrow_invocable_v](../../types/is_invocable.html)<decltype(pm), Args&&...>)(since C++17). 

Each argument in args is perfectly forwarded, as if by [std::forward](../forward.html)<Args>(args).... 

### Example

Use `std::mem_fn` to store and execute a member function and a member object:

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <memory>
     
    struct Foo
    {
        void display_greeting()
        {
            [std::cout](../../io/cout.html) << "Hello, world.\n";
        }
     
        void display_number(int i)
        {
            [std::cout](../../io/cout.html) << "number: " << i << '\n';
        }
     
        int add_xy(int x, int y)
        {
            return data + x + y;
        }
     
        template<typename... Args> int add_many(Args... args)
        {
            return data + (args + ...);
        }
     
        auto add_them(auto... args) // C++20 required
        {
            return data + (args + ...);
        }
     
        int data = 7;
    };
     
    int main()
    {
        auto f = Foo{};
     
        auto greet = std::mem_fn(&Foo::display_greeting);
        greet(f);
     
        auto print_num = std::mem_fn(&Foo::display_number);
        print_num(f, 42);
     
        auto access_data = std::mem_fn(&Foo::data);
        [std::cout](../../io/cout.html) << "data: " << access_data(f) << '\n';
     
        auto add_xy = std::mem_fn(&Foo::add_xy);
        [std::cout](../../io/cout.html) << "add_xy: " << add_xy(f, 1, 2) << '\n';
     
        auto u = [std::make_unique](../../memory/unique_ptr/make_unique.html)<Foo>();
        [std::cout](../../io/cout.html) << "access_data(u): " << access_data(u) << '\n';
        [std::cout](../../io/cout.html) << "add_xy(u, 1, 2): " << add_xy(u, 1, 2) << '\n';
     
        auto add_many = std::mem_fn(&Foo::add_many<short, int, long>);
        [std::cout](../../io/cout.html) << "add_many(u, ...): " << add_many(u, 1, 2, 3) << '\n';
     
        auto add_them = std::mem_fn(&Foo::add_them<short, int, float, double>);
        [std::cout](../../io/cout.html) << "add_them(u, ...): " << add_them(u, 5, 7, 10.0f, 13.0) << '\n';
    }

Output: 
    
    
    Hello, world.
    number: 42
    data: 7
    add_xy: 10
    access_data(u): 7
    add_xy(u, 1, 2): 10
    add_many(u, ...): 13
    add_them(u, ...): 42

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2048](https://cplusplus.github.io/LWG/issue2048) | C++11  | unnecessary overloads provided  | removed   
[LWG 2489](https://cplusplus.github.io/LWG/issue2489) | C++11  | noexcept not required  | required   
  
### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ bind](bind.html "cpp/utility/functional/bind")(C++11) |  binds one or more arguments to a function object   
(function template) 
