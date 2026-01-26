 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
[variant::index](index.html "cpp/utility/variant/index")  
[variant::valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception")  
[Modifiers](../variant.html#Modifiers "cpp/utility/variant")  
[variant::emplace](emplace.html "cpp/utility/variant/emplace")  
[variant::swap](swap.html "cpp/utility/variant/swap")  
[Visitation](../variant.html#Visitation "cpp/utility/variant")  
**variant::visit**(C++26)  
[Non-member functions](../variant.html#Non-member_functions "cpp/utility/variant")  
[visit(std::variant)](visit2.html "cpp/utility/variant/visit2")  
[holds_alternative](holds_alternative.html "cpp/utility/variant/holds alternative")  
[get(std::variant)](get.html "cpp/utility/variant/get")  
[get_if](get_if.html "cpp/utility/variant/get if")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/variant/operator cmp")(C++20)  
[swap(std::variant)](swap2.html "cpp/utility/variant/swap2")  
[Helper classes](../variant.html#Helper_classes "cpp/utility/variant")  
[monostate](monostate.html "cpp/utility/variant/monostate")  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


template< class Self, class Visitor >  
constexpr decltype(auto) visit( this Self&& self, Visitor&& vis ); |  (1)  |  (since C++26)  
---|---|---  
template< class R, class Self, class Visitor >  
constexpr R visit( this Self&& self, Visitor&& vis ); |  (2)  |  (since C++26)  
| |   
  
Applies the visitor vis (a [Callable](../../named_req/Callable.html "cpp/named req/Callable") that can be called with any combination of types from the variant) to the variant held by self. 

Given type V as decltype([std::forward_like](../forward_like.html)<Self>([std::declval](../declval.html)<variant>())), the equivalent call is: 

1) return std::visit([std::forward](../forward.html)<Visitor>(vis), (V) self);.

2) return std::visit<R>([std::forward](../forward.html)<Visitor>(vis), (V) self);.

## Contents

  * [1 Parameters](visit.html#Parameters)
  * [2 Return value](visit.html#Return_value)
  * [3 Exceptions](visit.html#Exceptions)
  * [4 Notes](visit.html#Notes)
  * [5 Example](visit.html#Example)
  * [6 See also](visit.html#See_also)

  
---  
  
### Parameters

vis  |  \-  |  a [Callable](../../named_req/Callable.html "cpp/named req/Callable") that accepts every possible alternative from the variant   
---|---|---  
self  |  \-  |  variant to pass to the visitor   
  
### Return value

1) The result of the std::visit invocation.

2) Nothing if `R` is (possibly cv-qualified) void; otherwise the result of the std::visit<R> invocation.

### Exceptions

Only throws if the call to std::visit throws. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_variant`](../../experimental/feature_test.html#cpp_lib_variant "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_variant_202306L "cpp/compiler support/26") | (C++26) | member `visit`  
  
### Example

Run this code
    
    
    #include <print>
    #include <string>
    #include <string_view>
    #include <variant>
     
    struct Base {};
    struct Derived : Base {};
     
    // helper type for the visitor
    template<class... Ts>
    struct overloads : Ts... { using Ts::operator()...; };
     
    // the variant to visit
    using var_t = [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html), Derived>;
     
    int main()
    {
        const auto visitor = overloads
        {
            [](int i){ [std::print](../../io/print.html)("int = {}\n", i); },
            []([std::string_view](../../string/basic_string_view.html) s){ [std::println](../../io/println.html)("string = “{}”", s); },
            [](const Base&){ [std::println](../../io/println.html)("base"); }
        };
     
        const var_t var1 = 42, var2 = "abc", var3 = Derived();
     
    #if (__cpp_lib_variant >= 202306L)
        var1.visit(visitor);
        var2.visit(visitor);
        var3.visit(visitor);
    #else
        std::visit(visitor, var1);
        std::visit(visitor, var2);
        std::visit(visitor, var3);
    #endif
    }

Output: 
    
    
    int = 42
    string = “abc”
    base

### See also

[ visit](visit2.html "cpp/utility/variant/visit2")(C++17) |  calls the provided functor with the arguments held by one or more `variant`s   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
