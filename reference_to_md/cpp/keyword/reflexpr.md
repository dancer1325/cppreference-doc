
  



  
|   
  
---  
  
| [register](register.html "cpp/keyword/register")  
---  
[reinterpret_cast](reinterpret_cast.html "cpp/keyword/reinterpret cast")  
[requires](requires.html "cpp/keyword/requires")(C++20)  
[return](return.html "cpp/keyword/return")  
[short](short.html "cpp/keyword/short")  
[signed](signed.html "cpp/keyword/signed")  
[sizeof](sizeof.html "cpp/keyword/sizeof")(*)  
[static](../keywords/static.html "cpp/keyword/static")  
[static_assert](static_assert.html "cpp/keyword/static assert")(C++11)  
[static_cast](static_cast.html "cpp/keyword/static cast")  
[struct](struct.html "cpp/keyword/struct")  
[switch](switch.html "cpp/keyword/switch")  
[template](template.html "cpp/keyword/template")  
[this](this.html "cpp/keyword/this")  
[thread_local](thread_local.html "cpp/keyword/thread local")(C++11)  
[throw](throw.html "cpp/keyword/throw")  
[true](true.html "cpp/keyword/true")  
[try](try.html "cpp/keyword/try")  
[typedef](typedef.html "cpp/keyword/typedef")  
[typeid](typeid.html "cpp/keyword/typeid")  
[typename](typename.html "cpp/keyword/typename")  
[union](union.html "cpp/keyword/union")  
[unsigned](unsigned.html "cpp/keyword/unsigned")  
[using](using.html "cpp/keyword/using")  
[virtual](virtual.html "cpp/keyword/virtual")  
[void](void.html "cpp/keyword/void")  
[volatile](volatile.html "cpp/keyword/volatile")  
[wchar_t](wchar_t.html "cpp/keyword/wchar t")  
[while](while.html "cpp/keyword/while")  
[xor](xor.html "cpp/keyword/xor")  
[xor_eq](xor_eq.html "cpp/keyword/xor eq")  
  
Identifiers with special meaning  
| [final](../identifier_with_special_meaning/final.html "cpp/identifier with special meaning/final")(C++11)  
---  
[import](../identifier_with_special_meaning/import.html "cpp/identifier with special meaning/import")(C++20)  
[module](../identifier_with_special_meaning/module.html "cpp/identifier with special meaning/module")(C++20)  
  
| [override](../identifier_with_special_meaning/override.html "cpp/identifier with special meaning/override")(C++11)  
---  
[post](../identifier_with_special_meaning/post.html "cpp/identifier with special meaning/post")(C++26)  
[pre](../identifier_with_special_meaning/pre.html "cpp/identifier with special meaning/pre")(C++26)  
  
| [replaceable_if_eligible](../identifier_with_special_meaning/replaceable_if_eligible.html "cpp/identifier with special meaning/replaceable if eligible")(C++26)  
---  
[trivially_relocatable_if_eligible](../identifier_with_special_meaning/trivially_relocatable_if_eligible.html "cpp/identifier with special meaning/trivially relocatable if eligible")(C++26)  
  
  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Experimental Feature** The functionality described on this page is part of the Reflection Technical Specification ISO/IEC TS 23619 (reflection TS).   
---|---  
  
### Usage

1) Gets the member list of a [class](class.html "cpp/keyword/class") type, or the enumerator list of an [enum](enum.html "cpp/keyword/enum") type.

2) Gets the name of type and member.

3) Detects whether a data member is [static](../keywords/static.html "cpp/keyword/static") or [constexpr](constexpr.html "cpp/keyword/constexpr").

4) Detects whether member function is [virtual](virtual.html "cpp/keyword/virtual"), [public](public.html "cpp/keyword/public"), [protected](protected.html "cpp/keyword/protected") or [private](private.html "cpp/keyword/private").

5) Get the _row_ and _column_ of the source code when the type defines.

### Example

`**reflexpr**` provides us the meta info of the object via _meta-object types_. Note that `std::reflect::get_data_members_t` make programmers able to visit any class just like [std::tuple](../utility/tuple.html "cpp/utility/tuple").

Run this code
    
    
    #include <string>
    #include <vector>
     
    struct S
    {
        int b;
        [std::string](../string/basic_string.html) s;
        [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> v;
    };
     
    // Reflection TS
    #include <experimental/reflect>
    using meta_S = reflexpr(S);
    using mem = std::reflect::get_data_members_t<meta_S>;
    using meta = std::reflect::get_data_members_t<mem>;
    static_assert(std::reflect::is_public_v<meta>); // successful
     
    int main() {}

We can also know the name info from `**reflexpr**`:

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <string_view>
    // Reflection TS
    #include <experimental/reflect>
     
    template<typename Tp>
    constexpr [std::string_view](../string/basic_string_view.html) nameof()
    {
        using TpInfo = reflexpr(Tp);
        using aliased_Info = std::experimental::reflect::get_aliased_t<TpInfo>;
        return std::experimental::reflect::get_name_v<aliased_Info>;
    }
     
    int main()
    {
        [std::cout](../io/cout.html) << nameof<[std::string](../string/basic_string.html)>() << '\n';
        static_assert(nameof<[std::string](../string/basic_string.html)>() == "basic_string"); // successful
    }

This is an example of getting the _scope_ of a type in the [Reflection TS](../experimental/reflect.html "cpp/experimental/reflect").

Run this code
    
    
    namespace Foo
    {
        struct FooFoo
        {
            int FooFooFoo;
        };
    }
    namespace Bar
    {
        using BarBar = ::Foo::FooFoo;
    }
    using BarBarInfo = reflexpr(::Bar::BarBar);
    using BarBarScope = ::std::experimental::reflect::get_scope_t<BarBarInfo>; // Bar, not Foo
     
    struct Spam
    {
        int SpamSpam;
    };
    struct Grok
    {
        using GrokGrok = Spam::SpamSpam;
    };
    using GrokGrokInfo = reflexpr(::Grok::GrokGrok);
    using GrokGrokScope = std::experimental::reflect::get_scope_t<GrokGrokInfo>; // Grok, not Spam
