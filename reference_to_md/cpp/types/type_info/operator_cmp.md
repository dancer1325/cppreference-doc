 
  


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
**type_info::operator== type_info::operator!=**(until C++20)  
[type_info::before](before.html "cpp/types/type info/before")  
[type_info::hash_code](hash_code.html "cpp/types/type info/hash code")(C++11)  
[type_info::name](name.html "cpp/types/type info/name")  
  


bool operator==( const type_info& rhs ) const; |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
bool operator!=( const type_info& rhs ) const; |  (2) | (noexcept since C++11)   
(until C++20)  
| |   
  
Checks if the objects refer to the same types. 

The `!=` operator is [synthesized](../../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Notes](operator_cmp.html#Notes)
  * [4 Example](operator_cmp.html#Example)
  * [5 See also](operator_cmp.html#See_also)

  
---  
  
### Parameters

rhs  |  \-  |  another type information object to compare to   
---|---|---  
  
### Return value

true if the comparison operation holds true, false otherwise. 

### Notes

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_typeinfo`](../../experimental/feature_test.html#cpp_lib_constexpr_typeinfo "cpp/feature test") | [`202106L`](../../compiler_support/23.html#cpp_lib_constexpr_typeinfo_202106L "cpp/compiler support/23") | (C++23) | Constexpr for `std::type_info::operator==`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <typeinfo>
    #include <utility>
     
    class person
    {
    public:
        explicit person([std::string](../../string/basic_string.html) n) : name_(std::move(n)) {}
        virtual const [std::string](../../string/basic_string.html)& name() const { return name_; }
     
    private:
        [std::string](../../string/basic_string.html) name_;
    };
     
    class employee : public person
    {
    public:
        employee([std::string](../../string/basic_string.html) n, [std::string](../../string/basic_string.html) p)
            : person(std::move(n)), profession_(std::move(p)) {}
     
        const [std::string](../../string/basic_string.html)& profession() const { return profession_; }
     
    private:
        [std::string](../../string/basic_string.html) profession_;
    };
     
    void print_info(const person& p)
    {
        if (typeid(person) == typeid(p))
            [std::cout](../../io/cout.html) << p.name() << " is not an employee\n";
        else if (typeid(employee) == typeid(p))
        {
            [std::cout](../../io/cout.html) << p.name() << " is an employee ";
            auto& emp = dynamic_cast<const employee&>(p);
            [std::cout](../../io/cout.html) << "who works in " << emp.profession() << '\n';
        }
    }
     
    int main()
    {
        print_info(employee{"Paul","Economics"});
        print_info(person{"Kate"});
     
    #if __cpp_lib_constexpr_typeinfo
        if constexpr (typeid(employee) != typeid(person)) // C++23
            [std::cout](../../io/cout.html) << "class `employee` != class `person`\n";
    #endif
    }

Possible output: 
    
    
    Paul is an employee who works in Economics
    Kate is not an employee
    class `employee` != class `person`

### See also

[ before](before.html "cpp/types/type info/before") |  checks whether the referred type precedes referred type of another `type_info`  
object in the implementation defined order, i.e. orders the referred types   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
