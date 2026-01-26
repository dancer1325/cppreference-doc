 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
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
**_1, _2, _3, ...**(C++11)  
  
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
/*see below*/ _1;  
/*see below*/ _2;  
.  
.  
/*see below*/ _N; |  |   
| |   
  
The **std::placeholders** namespace contains the placeholder objects `[_1, ..., _N]` where `N` is an implementation defined maximum number. 

When used as an argument in a [std::bind](bind.html "cpp/utility/functional/bind") expression, the placeholder objects are stored in the generated function object, and when that function object is invoked with unbound arguments, each placeholder `_N` is replaced by the corresponding Nth unbound argument. 

Each placeholder is declared as if by extern /*unspecified*/ _1;.  | (until C++17)  
---|---  
Implementations are encouraged to declare the placeholders as if by inline constexpr /*unspecified*/ _1;, although declaring them by extern /*unspecified*/ _1; is still allowed by the standard.  | (since C++17)  
  
The types of the placeholder objects are [DefaultConstructible](../../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible") and [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"), their default copy/move constructors do not throw exceptions, and for any placeholder `_N`, the type [std::is_placeholder](is_placeholder.html)<decltype(_N)> is defined, where [std::is_placeholder](is_placeholder.html)<decltype(_N)> is derived from [std::integral_constant](../../types/integral_constant.html)<int, N>. 

### Example

The following code shows the creation of function objects with placeholder arguments.

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <string>
     
    void goodbye(const [std::string](../../string/basic_string.html)& s)
    {
        [std::cout](../../io/cout.html) << "Goodbye " << s << '\n';
    }
     
    class Object
    {
    public:
        void hello(const [std::string](../../string/basic_string.html)& s)
        {
            [std::cout](../../io/cout.html) << "Hello " << s << '\n';
        }
    };
     
    int main()
    {
        using namespace std::placeholders;
     
        using ExampleFunction = [std::function](function.html)<void(const [std::string](../../string/basic_string.html)&)>;
        Object instance;
        [std::string](../../string/basic_string.html) str("World");
     
        ExampleFunction f = [std::bind](bind.html)(&Object::hello, &instance, _1);
        f(str); // equivalent to instance.hello(str)
     
        f = [std::bind](bind.html)(&goodbye, std::placeholders::_1);
        f(str); // equivalent to goodbye(str)
     
        auto lambda = []([std::string](../../string/basic_string.html) pre, char o, int rep, [std::string](../../string/basic_string.html) post)
        {
            [std::cout](../../io/cout.html) << pre;
            while (rep-- > 0)
                [std::cout](../../io/cout.html) << o;
            [std::cout](../../io/cout.html) << post << '\n';
        };
     
        // binding the lambda:
        [std::function](function.html)<void([std::string](../../string/basic_string.html), char, int, [std::string](../../string/basic_string.html))> g =
            [std::bind](bind.html)(&decltype(lambda)::operator(), &lambda, _1, _2, _3, _4);
        g("G", 'o', 'o'-'g', "gol");
    }

Output: 
    
    
    Hello World
    Goodbye World
    Goooooooogol

### See also

[ bind](bind.html "cpp/utility/functional/bind")(C++11) |  binds one or more arguments to a function object   
(function template)   
---|---  
[ is_placeholder](is_placeholder.html "cpp/utility/functional/is placeholder")(C++11) |  indicates that an object is a standard placeholder or can be used as one   
(class template)   
[ ignore](../tuple/ignore.html "cpp/utility/tuple/ignore")(C++11) |  placeholder to skip an element when unpacking a `tuple` using [`tie`](../tuple/tie.html "cpp/utility/tuple/tie")   
(constant) 
