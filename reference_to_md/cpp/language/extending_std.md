

  
  
  
  
  

  
  
  

---  
  

---  
  


## Contents

  * [1 Adding declarations to std](extending_std.html#Adding_declarations_to_std)
  * [2 Adding template specializations](extending_std.html#Adding_template_specializations)
    * [2.1 Class templates](extending_std.html#Class_templates)
    * [2.2 Function templates and member functions of templates](extending_std.html#Function_templates_and_member_functions_of_templates)
    * [2.3 Variable templates](extending_std.html#Variable_templates)
  * [3 Explicit instantiation of templates](extending_std.html#Explicit_instantiation_of_templates)
  * [4 Other restrictions](extending_std.html#Other_restrictions)
    * [4.1 Addressing restriction](extending_std.html#Addressing_restriction)
    * [4.2 Designated addressable functions](extending_std.html#Designated_addressable_functions)
  * [5 Defect reports](extending_std.html#Defect_reports)

  
---  
  
### Adding declarations to `std`

It is undefined behavior to add declarations or definitions to namespace `std` or to any namespace nested within `std`, with a few exceptions noted below. 
    
    
    #include <utility>
     
    namespace std
    {
        // a function definition added to namespace std: undefined behavior
        pair<int, int> operator+(pair<int, int> a, pair<int, int> b)
        {
            return {a.first + b.first, a.second + b.second};
        }
    }

### Adding template specializations

#### Class templates

It is allowed to add template specializations for any standard library class template to the namespace `std` only if the declaration depends on at least one [program-defined type](type-id.html#Program-defined_type "cpp/language/type") and the specialization satisfies all requirements for the original template, except where such specializations are prohibited. 
    
    
    // Get the declaration of the primary std::hash template.
    // We are not permitted to declare it ourselves.
    // <typeindex> is guaranteed to provide such a declaration, 
    // and is much cheaper to include than <functional>.
     
    #include <typeindex> 
     
    // Specialize std::hash so that MyType can be used as a key in 
    // std::unordered_set and std::unordered_map.  Opening namespace
    // std can accidentally introduce undefined behavior, and is not
    // necessary for specializing class templates.
    template<>
    struct [std::hash](../utility/hash.html)<MyType>
    {
        [std::size_t](../types/size_t.html) operator()(const MyType& t) const { return t.hash(); }
    };

  * Specializing the template [std::complex](../numeric/complex.html "cpp/numeric/complex") for any type other than float, double, and long double is unspecified. 


  * Specializations of [std::numeric_limits](../types/numeric_limits.html "cpp/types/numeric limits") must define all members declared static const(until C++11)static constexpr(since C++11) in the primary template, in such a way that they are usable as [integral constant expressions](constant_expression.html "cpp/language/constant expression"). 



  * None of the templates defined in [`<type_traits>`](../header/type_traits.html "cpp/header/type traits") may be specialized for a [program-defined type](type-id.html#Program-defined_type "cpp/language/type"), except for [std::common_type](../types/common_type.html "cpp/types/common type") and [`std::basic_common_reference`](../types/common_reference.html#Helper_types "cpp/types/common reference")(since C++20). This includes the [type traits](../utility/rtti.html "cpp/types") and the class template [std::integral_constant](../types/integral_constant.html "cpp/types/integral constant"). 


  * Specializations of [std::hash](../utility/hash.html "cpp/utility/hash") for program-defined types must satisfy [Hash](../named_req/Hash.html "cpp/named req/Hash") requirements. 


  * Specializations of [std::atomic](../atomic/atomic.html "cpp/atomic/atomic") must have a deleted copy constructor, a deleted copy assignment operator, and a constexpr value constructor. 


  * Specializations of [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") and [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr") must be [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). In addition, specializations of [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") must be [LessThanComparable](../named_req/LessThanComparable.html "cpp/named req/LessThanComparable"), and convertible to bool. 


  * Specializations of [std::istreambuf_iterator](../iterator/istreambuf_iterator.html "cpp/iterator/istreambuf iterator") must have a trivial copy constructor, a constexpr default constructor, and a trivial destructor. 

| (since C++11)  
---|---  
  
  * [std::unary_function](../utility/functional/unary_function.html "cpp/utility/functional/unary function") and [std::binary_function](../utility/functional/binary_function.html "cpp/utility/functional/binary function") may not be specialized. 

| (until C++17)  
---|---  
  
It is undefined behavior to declare a full or partial specialization of any member class template of a standard library class or class template. 

| This section is incomplete  
Reason: mini-example   
---|---  
  
#### Function templates and member functions of templates

It is allowed to add template specializations for any standard library function template to the namespace `std` only if the declaration depends on at least one [program-defined type](type-id.html#Program-defined_type "cpp/language/type") and the specialization satisfies all requirements for the original template, except where such specializations are prohibited.  | (until C++20)  
---|---  
It is undefined behavior to declare a full specialization of any standard library function template.  | (since C++20)  
| This section is incomplete  
Reason: mini-example   
---|---  
  
It is undefined behavior to declare a full specialization of any member function of a standard library class template: 

| This section is incomplete  
Reason: mini-example   
---|---  
  
It is undefined behavior to declare a full specialization of any member function template of a standard library class or class template: 

| This section is incomplete  
Reason: mini-example   
---|---  
  
#### Variable templates

It is undefined behavior to declare a full or partial specialization of any standard library variable template, except where explicitly allowed.  | | This section is incomplete  
Reason: mini-example   
---|---  
  
  * Specializations of [std::disable_sized_sentinel_for](../iterator/sized_sentinel_for.html "cpp/iterator/sized sentinel for"), [std::ranges::disable_sized_range](../ranges/sized_range.html "cpp/ranges/sized range"), [std::ranges::enable_view](../ranges/view.html "cpp/ranges/view") and [std::ranges::enable_borrowed_range](../ranges/borrowed_range.html "cpp/ranges/borrowed range") shall be usable in constant expressions and have type const bool. And 
    * `std::disable_sized_sentinel_for` may be specialized for cv-unqualified non-array object types `S` and `I` at least one of which is a [program-defined type](type-id.html#Program-defined_type "cpp/language/type"). 
    * `std::ranges::disable_sized_range`, `std::ranges::enable_view` and `std::ranges::enable_borrowed_range` may be specialized for cv-unqualified program-defined types. 
  * Every [mathematical constant variable template](../numeric/constants.html "cpp/numeric/constants") may be partially or explicitly specialized, provided that the specialization depends on a program-defined type. 

| (since C++20)  
---|---  
(since C++14)  
  
### Explicit instantiation of templates

It is allowed to explicitly instantiate a class (since C++20)template defined in the standard library only if the declaration depends on the name of at least one [program-defined type](type-id.html#Program-defined_type "cpp/language/type") and the instantiation meets the standard library requirements for the original template. 

| This section is incomplete  
Reason: mini-example   
---|---  
  
### Other restrictions

The namespace `std` may not be declared as an [inline namespace](namespace.html#Inline_namespaces "cpp/language/namespace"). 

####  Addressing restriction

The behavior of a C++ program is unspecified (possibly ill-formed) if it explicitly or implicitly attempts to form a pointer, reference (for free functions and static member functions) or pointer-to-member (for non-static member functions) to a standard library function or an instantiation of a standard library function template, unless it is designated an _addressable function_ (see below). Following code was well-defined in C++17, but leads to unspecified behaviors and possibly fails to compile since C++20: 
    
    
    #include <cmath>
    #include <memory>
     
    int main()
    {
        // by unary operator&
        auto fptr0 = &static_cast<float(&)(float, float)>([std::betaf](../numeric/special_functions/beta.html));
     
        // by std::addressof
        auto fptr1 = [std::addressof](../memory/addressof.html)(static_cast<float(&)(float, float)>([std::betaf](../numeric/special_functions/beta.html)));
     
        // by function-to-pointer implicit conversion
        auto fptr2 = static_cast<float(&)(float)>([std::riemann_zetaf](../numeric/special_functions/riemann_zeta.html));
     
        // forming a reference
        auto& fref = static_cast<float(&)(float)>([std::riemann_zetaf](../numeric/special_functions/riemann_zeta.html));
    }

####  Designated addressable functions

  * [I/O manipulators](../io/manip.html "cpp/io/manip"): 
    * `fmtflags` manipulators: 
      * [std::boolalpha](../io/manip/boolalpha.html "cpp/io/manip/boolalpha")
      * [std::noboolalpha](../io/manip/boolalpha.html "cpp/io/manip/boolalpha")
      * [std::showbase](../io/manip/showbase.html "cpp/io/manip/showbase")
      * [std::noshowbase](../io/manip/showbase.html "cpp/io/manip/showbase")
      * [std::showpoint](../io/manip/showpoint.html "cpp/io/manip/showpoint")
      * [std::noshowpoint](../io/manip/showpoint.html "cpp/io/manip/showpoint")
      * [std::showpos](../io/manip/showpos.html "cpp/io/manip/showpos")
      * [std::noshowpos](../io/manip/showpos.html "cpp/io/manip/showpos")
      * [std::skipws](../io/manip/skipws.html "cpp/io/manip/skipws")
      * [std::noskipws](../io/manip/skipws.html "cpp/io/manip/skipws")
      * [std::uppercase](../io/manip/uppercase.html "cpp/io/manip/uppercase")
      * [std::nouppercase](../io/manip/uppercase.html "cpp/io/manip/uppercase")
      * [std::unitbuf](../io/manip/unitbuf.html "cpp/io/manip/unitbuf")
      * [std::nounitbuf](../io/manip/unitbuf.html "cpp/io/manip/unitbuf")
    * `adjustfield` manipulators: 
      * [std::internal](../io/manip/left.html "cpp/io/manip/left")
      * [std::left](../io/manip/left.html "cpp/io/manip/left")
      * [std::right](../io/manip/left.html "cpp/io/manip/left")
    * `basefield` manipulators: 
      * [std::dec](../io/manip/hex.html "cpp/io/manip/hex")
      * [std::hex](../io/manip/hex.html "cpp/io/manip/hex")
      * [std::oct](../io/manip/hex.html "cpp/io/manip/hex")
    * `floatfield` manipulators: 
      * [std::fixed](../io/manip/fixed.html "cpp/io/manip/fixed")
      * [std::scientific](../io/manip/fixed.html "cpp/io/manip/fixed")
      * [std::hexfloat](../io/manip/fixed.html "cpp/io/manip/fixed")
      * [std::defaultfloat](../io/manip/fixed.html "cpp/io/manip/fixed")
    * `basic_istream` manipulators: 
      * [std::ws](../io/manip/ws.html "cpp/io/manip/ws")
    * `basic_ostream` manipulators: 
      * [std::endl](../io/manip/endl.html "cpp/io/manip/endl")
      * [std::ends](../io/manip/ends.html "cpp/io/manip/ends")
      * [std::flush](../io/manip/flush.html "cpp/io/manip/flush")
      * [`std::emit_on_flush`](../io/manip/emit_on_flush.html "cpp/io/manip/emit on flush")
      * [`std::noemit_on_flush`](../io/manip/emit_on_flush.html "cpp/io/manip/emit on flush")
      * [`std::flush_emit`](../io/manip/flush_emit.html "cpp/io/manip/flush emit")

| (since C++20)  
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 120](https://cplusplus.github.io/LWG/issue120) | C++98  | users could explicitly instantiate standard  
library templates for non-user defined types  | prohibited   
[LWG 232](https://cplusplus.github.io/LWG/issue232) | C++98  | users could explicitly specialize standard library templates  
if the declaration depends on a user-defined name of  
external linkage (which can refer to a non-user-defined type)  | only allowed for  
user-defined types   
[LWG 422](https://cplusplus.github.io/LWG/issue422) | C++98  | users could specialize individual members or member templates  
without specializing the whole standard library class or class template  | the behavior is  
undefined in this case 
