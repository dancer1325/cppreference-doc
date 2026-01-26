 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
[variant::index](index.html "cpp/utility/variant/index")  
**variant::valueless_by_exception**  
[Modifiers](../variant.html#Modifiers "cpp/utility/variant")  
[variant::emplace](emplace.html "cpp/utility/variant/emplace")  
[variant::swap](swap.html "cpp/utility/variant/swap")  
[Visitation](../variant.html#Visitation "cpp/utility/variant")  
[variant::visit](visit.html "cpp/utility/variant/visit")(C++26)  
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
  


constexpr bool valueless_by_exception() const noexcept; |  |  (since C++17)  
---|---|---  
| |   
  
Returns false if and only if the variant holds a value. 

### Notes

A variant may become valueless when initializing the contained value in the following situations: 

  * (guaranteed) an exception is thrown during [move assignment](operator=.html "cpp/utility/variant/operator=")
  * (optional) an exception is thrown during [copy assignment](operator=.html "cpp/utility/variant/operator=")
  * (optional) an exception is thrown during a type-changing [assignment](operator=.html "cpp/utility/variant/operator=")
  * (optional) an exception is thrown during a type-changing [`emplace`](emplace.html "cpp/utility/variant/emplace")



Since variant is never permitted to allocate dynamic memory, the previous value cannot be retained and, therefore, restored in these situations. The "optional" cases can avoid throwing an exception if the type provides non-throwing moves and the implementation first constructs the new value on the stack and then moves it into the variant. 

This applies even to variants of non-class types: 
    
    
    struct S
    {
        operator int() { throw 42; }
    };
    [std::variant](../variant.html)<float, int> v{12.f}; // OK
    v.emplace<1>(S()); // v may be valueless

A variant that is _valueless by exception_ — that is, has no value due to a previous exception from one of the situations listed above — is treated as being in an invalid state: 

  * [`index`](index.html "cpp/utility/variant/index") returns [`variant_npos`](variant_npos.html "cpp/utility/variant/variant npos")
  * [`get`](get.html "cpp/utility/variant/get") throws [`bad_variant_access`](bad_variant_access.html "cpp/utility/variant/bad variant access")
  * [`visit`](visit2.html "cpp/utility/variant/visit2") and  member-[`visit`](visit.html "cpp/utility/variant/visit")(since C++26) throw [`bad_variant_access`](bad_variant_access.html "cpp/utility/variant/bad variant access")



### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <stdexcept>
    #include <string>
    #include <variant>
     
    struct Demo
    {
        Demo(int) {}
        Demo(const Demo&) { throw [std::domain_error](../../error/domain_error.html)("copy ctor"); }
        Demo& operator= (const Demo&) = default;
    };
     
    int main()
    {
        [std::variant](../variant.html)<[std::string](../../string/basic_string.html), Demo> var{"str"};
        [assert](../../error/assert.html)(var.index() == 0);
        [assert](../../error/assert.html)(std::get<0>(var) == "str");
        [assert](../../error/assert.html)(var.valueless_by_exception() == false);
     
        try
        {
            var = Demo{555};
        }
        catch (const [std::domain_error](../../error/domain_error.html)& ex)
        {
            [std::cout](../../io/cout.html) << "1) Exception: " << ex.what() << '\n';
        }
        [assert](../../error/assert.html)(var.index() == [std::variant_npos](variant_npos.html));
        [assert](../../error/assert.html)(var.valueless_by_exception() == true);
     
        // Now the var is "valueless" which is an invalid state caused
        // by an exception raised in the process of type-changing assignment.
     
        try
        {
            std::get<1>(var);
        }
        catch (const [std::bad_variant_access](bad_variant_access.html)& ex)
        {
            [std::cout](../../io/cout.html) << "2) Exception: " << ex.what() << '\n';
        }
     
        var = "str2";
        [assert](../../error/assert.html)(var.index() == 0);
        [assert](../../error/assert.html)(std::get<0>(var) == "str2");
        [assert](../../error/assert.html)(var.valueless_by_exception() == false);
    }

Possible output: 
    
    
    1) Exception: copy ctor
    2) Exception: std::get: variant is valueless

### See also

[ get(std::variant)](get.html "cpp/utility/variant/get")(C++17) |  reads the value of the variant given the index or the type (if the type is unique), throws on error   
(function template)   
---|---  
[ index](index.html "cpp/utility/variant/index") |  returns the zero-based index of the alternative held by the `variant`   
(public member function)   
[ bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")(C++17) |  exception thrown on invalid accesses to the value of a `variant`   
(class) 
