

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Classes](classes.html "cpp/language/classes")

General  
---  
[Overview](classes.html "cpp/language/classes")  
[`class`/`struct` types](class.html "cpp/language/class")  
[`union` types](union.html "cpp/language/union")  
[Injected-class-name](injected-class-name.html "cpp/language/injected-class-name")  
[Class property specifiers](class_property_specifiers.html "cpp/language/class property specifiers") (C++26)  
Members  
[Data members](data_members.html "cpp/language/data members")  
[Static members](static.html "cpp/language/static")  
[The `this` pointer](this.html "cpp/language/this")  
[Nested classes](nested_classes.html "cpp/language/nested types")  
[Member templates](member_template.html "cpp/language/member template")  
[Bit-fields](bit_field.html "cpp/language/bit field")  
[`using`-declarations](using_declaration.html "cpp/language/using declaration")  
[Member functions](member_functions.html "cpp/language/member functions")  
[Member access specifiers](access.html "cpp/language/access")  
[Constructors and member initializer lists](initializer_list.html "cpp/language/constructor")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
[`friend` specifier](friend.html "cpp/language/friend")  
[`explicit` specifier](explicit.html "cpp/language/explicit")  
[Converting constructor](converting_constructor.html "cpp/language/converting constructor")  
Special member functions  
[Default constructor](default_constructor.html "cpp/language/default constructor")  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
[Copy assignment operator](as_operator.html "cpp/language/copy assignment")  
[Move assignment operator](move_operator.html "cpp/language/move assignment") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
Inheritance  
[Base and derived classes](derived_class.html "cpp/language/derived class")  
**Empty base optimization (EBO)**  
[Virtual member functions](virtual.html "cpp/language/virtual")  
[Pure virtual functions and abstract classes](abstract_class.html "cpp/language/abstract class")  
[`override` specifier](override.html "cpp/language/override") (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


Allows the size of an empty base subobject to be zero. 

## Contents

  * [1 Explanation](ebo.html#Explanation)
  * [2 Notes](ebo.html#Notes)
  * [3 References](ebo.html#References)
  * [4 External links](ebo.html#External_links)

  
---  
  
### Explanation

The size of any [object](objects.html "cpp/language/object") or member subobject is required to be at least 1 even if the type is an empty [class type](class.html "cpp/language/class") (that is, a class or struct that has no non-static data members), (unless with `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]`, see below)(since C++20) in order to be able to guarantee that the addresses of distinct objects of the same type are always distinct. 

However, base class subobjects are not so constrained, and can be completely optimized out from the object layout: 

Run this code
    
    
    struct Base {}; // empty class
     
    struct Derived1 : Base
    {
        int i;
    };
     
    int main()
    {
        // the size of any object of empty class type is at least 1
        static_assert(sizeof(Base) >= 1);
     
        // empty base optimization applies
        static_assert(sizeof(Derived1) == sizeof(int));
    }

Empty base optimization is prohibited if one of the empty base classes is also the type or the base of the type of the first non-static data member, since the two base subobjects of the same type are required to have different addresses within the object representation of the most derived type. 

A typical example of such situation is the naive implementation of [std::reverse_iterator](../iterator/reverse_iterator.html "cpp/iterator/reverse iterator") (derived from the empty base [std::iterator](../iterator/iterator.html "cpp/iterator/iterator")), which holds the underlying iterator (also derived from [std::iterator](../iterator/iterator.html "cpp/iterator/iterator")) as its first non-static data member. 

Run this code
    
    
    struct Base {}; // empty class
     
    struct Derived1 : Base
    {
        int i;
    };
     
    struct Derived2 : Base
    {
        Base c; // Base, occupies 1 byte, followed by padding for i
        int i;
    };
     
    struct Derived3 : Base
    {
        Derived1 c; // derived from Base, occupies sizeof(int) bytes
        int i;
    };
     
    int main()
    {
        // empty base optimization does not apply,
        // base occupies 1 byte, Base member occupies 1 byte
        // followed by 2 bytes of padding to satisfy int alignment requirements
        static_assert(sizeof(Derived2) == 2*sizeof(int));
     
        // empty base optimization does not apply,
        // base takes up at least 1 byte plus the padding
        // to satisfy alignment requirement of the first member (whose
        // alignment is the same as int)
        static_assert(sizeof(Derived3) == 3*sizeof(int));
    }

Empty base optimization is _required_ for [StandardLayoutTypes](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType") in order to maintain the requirement that the pointer to a standard-layout object, converted using [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast"), points to its initial member, which is why the requirements for a standard layout type include "has all non-static data members declared in the same class (either all in the derived or all in some base)" and "has no base classes of the same type as the first non-static data member".  | (since C++11)  
---|---  
The empty member subobjects are permitted to be optimized out just like the empty bases if they use the attribute `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]`. Taking the address of such member results in an address that may equal the address of some other member of the same object.  Run this code
    
    
    struct Empty {}; // empty class
     
    struct X
    {
        int i;
        [[no_unique_address]] Empty e;
    };
     
    int main()
    {
        // the size of any object of empty class type is at least 1
        static_assert(sizeof(Empty) >= 1);
     
        // empty member optimized out:
        static_assert(sizeof(X) == sizeof(int));
    }

| (since C++20)  
---|---  
  
### Notes

Empty base optimization is commonly used by allocator-aware standard library classes ([std::vector](../container/vector.html "cpp/container/vector"), [std::function](../utility/functional/function.html "cpp/utility/functional/function"), [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr"), etc) to avoid occupying any additional storage for its allocator member if the allocator is stateless. This is achieved by storing one of the required data members (e.g., `begin`, `end`, or `capacity` pointer for the `vector`) in an equivalent of [`boost::compressed_pair`](https://www.boost.org/doc/libs/release/libs/utility/doc/html/utility/utilities/compressed_pair.html) with the allocator. 

In MSVC, empty base optimization is not fully compliant with the standard requirements ([Why is the empty base class optimization (EBO) is not working in MSVC?](https://stackoverflow.com/questions/12701469/why-is-the-empty-base-class-optimization-ebo-is-not-working-in-msvc)). 

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.6.10 Equality operators [expr.eq] 



    

  * 7.6.2.5 Sizeof [expr.sizeof] 



    

  * 11 Classes [class] 



    

  * 11.4 Class members [class.mem] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.6.10 Equality operators [expr.eq] 



    

  * 7.6.2.4 Sizeof [expr.sizeof] 



    

  * 11 Classes [class] 



    

  * 11.4 Class members [class.mem] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.10 Equality operators [expr.eq] 



    

  * 8.3.3 Sizeof [expr.sizeof] 



    

  * 12 Classes [class] 



    

  * 12.2 Class members [class.mem] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 5.10 Equality operators [expr.eq] 



    

  * 5.3.3 Sizeof [expr.sizeof] 



    

  * 9 Classes [class] 



    

  * 9.2 Class members [class.mem] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 5.10 Equality operators [expr.eq] (p: 2) 



    

  * 5.3.3 Sizeof [expr.sizeof] (p: 2) 



    

  * 9 Classes [class] (p: 4,7) 



    

  * 9.2 Class members [class.mem] (p: 20) 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 5.10 Equality operators [expr.eq] (p: 2) 



    

  * 5.3.3 Sizeof [expr.sizeof] (p: 2) 



    

  * 9 Classes [class] (p: 3) 



### External links

[More C++ Idioms/Empty Base Optimization](https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Empty_Base_Optimization) — A wikibook   
---
