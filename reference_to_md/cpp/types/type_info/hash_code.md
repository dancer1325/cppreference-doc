 
  


[Utilities library](../../utility.html "cpp/utility")

| [Language support](../../utility.html#Language_support "cpp/utility")  
---  
[Type support](../../utility/rtti.html "cpp/types") (basic types, RTTI)  
[Library feature-test macros](../../utility/feature_test.html "cpp/utility/feature test") (C++20)  
[Program utilities](../../utility/program.html "cpp/utility/program")  
[Variadic functions](../../utility/variadic.html "cpp/utility/variadic")  
[initializer_list](../../utility/initializer_list.html "cpp/utility/initializer list")(C++11)  
[is_constant_evaluated](../is_constant_evaluated.html "cpp/types/is constant evaluated")(C++20)  
[is_within_lifetime](../is_within_lifetime.html "cpp/types/is within lifetime")(C++26)  
[source_location](../../utility/source_location.html "cpp/utility/source location")(C++20)  
[Coroutine support](../../coroutine.html "cpp/coroutine") (C++20)  
[Contract support](../../contract.html "cpp/contract") (C++26)  
[Three-way comparison](../../utility.html#Three-way_comparison "cpp/utility")  
[three_way_comparablethree_way_comparable_with](../../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20)(C++20)  
[strong_ordering](../../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering")(C++20)  
[weak_ordering](../../utility/compare/weak_ordering.html "cpp/utility/compare/weak ordering")(C++20)  
[partial_ordering](../../utility/compare/partial_ordering.html "cpp/utility/compare/partial ordering")(C++20)  
[common_comparison_category](../../utility/compare/common_comparison_category.html "cpp/utility/compare/common comparison category")(C++20)  
[compare_three_way_result](../../utility/compare/compare_three_way_result.html "cpp/utility/compare/compare three way result")(C++20)  
[compare_three_way](../../utility/compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
[strong_order](../../utility/compare/strong_order.html "cpp/utility/compare/strong order")(C++20)  
[weak_order](../../utility/compare/weak_order.html "cpp/utility/compare/weak order")(C++20)  
[partial_order](../../utility/compare/partial_order.html "cpp/utility/compare/partial order")(C++20)  
[compare_strong_order_fallback](../../utility/compare/compare_strong_order_fallback.html "cpp/utility/compare/compare strong order fallback")(C++20)  
[compare_weak_order_fallback](../../utility/compare/compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20)  
[compare_partial_order_fallback](../../utility/compare/compare_partial_order_fallback.html "cpp/utility/compare/compare partial order fallback")(C++20)` `  
|  | [is_eqis_ltis_lteq](../../utility/compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)` `  
---  
  
| [is_neqis_gtis_gteq](../../utility/compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)  
---  
  
  
  
  
  
  
  
  
  
  


[Type support](../../utility/rtti.html "cpp/types")

Basic types  
---  
[Fixed width integer types](../integer.html "cpp/types/integer") (C++11)  
[Fixed width floating-point types](../floating-point.html "cpp/types/floating-point") (C++23)  
| [ptrdiff_t](../ptrdiff_t.html "cpp/types/ptrdiff t")  
---  
[size_t](../size_t.html "cpp/types/size t")  
[max_align_t](../max_align_t.html "cpp/types/max align t")(C++11)  
[byte](../byte.html "cpp/types/byte")(C++17)  
  
| [nullptr_t](../nullptr_t.html "cpp/types/nullptr t")(C++11)  
---  
[offsetof](../offsetof.html "cpp/types/offsetof")  
[NULL](../NULL.html "cpp/types/NULL")  
  
  
  
Numeric limits  
[numeric_limits](../numeric_limits.html "cpp/types/numeric limits")  
[C numeric limits interface](../climits.html "cpp/types/climits")  
Runtime type information  
| [type_info](../type_info.html "cpp/types/type info")  
---  
[type_index](../type_index.html "cpp/types/type index")(C++11)  
  
| [bad_typeid](../bad_typeid.html "cpp/types/bad typeid")  
---  
[bad_cast](../bad_cast.html "cpp/types/bad cast")  
  


[`std::type_info`](../type_info.html "cpp/types/type info")

Member functions  
---  
[type_info::~type_info](~type_info.html "cpp/types/type info/~type info")  
[type_info::operator==type_info::operator!=](operator_cmp.html "cpp/types/type info/operator cmp")(until C++20)  
[type_info::before](before.html "cpp/types/type info/before")  
**type_info::hash_code**(C++11)  
[type_info::name](name.html "cpp/types/type info/name")  
  


[std::size_t](../size_t.html) hash_code() const noexcept; |  |  (since C++11)  
---|---|---  
| |   
  
Returns an unspecified value (here denoted by _hash code_) such that for all [std::type_info](../type_info.html "cpp/types/type info") objects referring to the same type, their _hash code_ is the same. 

No other guarantees are given: [std::type_info](../type_info.html "cpp/types/type info") objects referring to different types may have the same _hash code_ (although the standard recommends that implementations avoid this as much as possible), and _hash code_ for the same type can change between invocations of the same program. 

## Contents

  * [1 Parameters](hash_code.html#Parameters)
  * [2 Return value](hash_code.html#Return_value)
  * [3 Example](hash_code.html#Example)
  * [4 See also](hash_code.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

A value that is identical for all [std::type_info](../type_info.html "cpp/types/type info") objects referring to the same type. 

### Example

The following program is an example of an efficient type-value mapping without using [std::type_index](../type_index.html "cpp/types/type index").

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <memory>
    #include <string>
    #include <typeinfo>
    #include <unordered_map>
     
    struct A
    {
        virtual ~A() {}
    };
     
    struct B : A {};
    struct C : A {};
     
    using TypeInfoRef = [std::reference_wrapper](../../utility/functional/reference_wrapper.html)<const [std::type_info](../type_info.html)>;
     
    struct Hasher
    {
        [std::size_t](../size_t.html) operator()(TypeInfoRef code) const
        {
            return code.get().hash_code();
        }
    };
     
    struct EqualTo
    {
        bool operator()(TypeInfoRef lhs, TypeInfoRef rhs) const
        {
            return lhs.get() == rhs.get();
        }
    };
     
    int main()
    {
        [std::unordered_map](../../container/unordered_map.html)<TypeInfoRef, [std::string](../../string/basic_string.html), Hasher, EqualTo> type_names;
     
        type_names[typeid(int)] = "int";
        type_names[typeid(double)] = "double";
        type_names[typeid(A)] = "A";
        type_names[typeid(B)] = "B";
        type_names[typeid(C)] = "C";
     
        int i;
        double d;
        A a;
     
        // note that we're storing pointer to type A
        [std::unique_ptr](../../memory/unique_ptr.html)<A> b(new B);
        [std::unique_ptr](../../memory/unique_ptr.html)<A> c(new C);
     
        [std::cout](../../io/cout.html) << "i is " << type_names[typeid(i)] << '\n';
        [std::cout](../../io/cout.html) << "d is " << type_names[typeid(d)] << '\n';
        [std::cout](../../io/cout.html) << "a is " << type_names[typeid(a)] << '\n';
        [std::cout](../../io/cout.html) << "*b is " << type_names[typeid(*b)] << '\n';
        [std::cout](../../io/cout.html) << "*c is " << type_names[typeid(*c)] << '\n';
    }

Output: 
    
    
    i is int
    d is double
    a is A
    *b is B
    *c is C

### See also

[ operator==operator!=](operator_cmp.html "cpp/types/type info/operator cmp")(removed in C++20) |  checks whether the objects refer to the same type   
(public member function)   
---|---  
[ name](name.html "cpp/types/type info/name") |  implementation defined name of the type   
(public member function) 
