

  
  
  
  
  

  
  
  

---  
  

---  
  


The [Curiously Recurring Template Pattern](https://en.wikipedia.org/wiki/Curiously_Recurring_Template_Pattern "enwiki:Curiously Recurring Template Pattern") is an idiom in which a class `X` derives from a class template `Y`, taking a template parameter `Z`, where `Y` is instantiated with Z = X. For example, 
    
    
    template<class Z>
    class Y {};
     
    class X : public Y<X> {};

### Example

CRTP may be used to implement "compile-time polymorphism", when a base class exposes an interface, and derived classes implement such interface.

Run this code
    
    
    #include <cstdio>
     
    #ifndef __cpp_explicit_this_parameter // Traditional syntax
     
    template <class Derived>
    struct Base
    {
        void name() { static_cast<Derived*>(this)->impl(); }
    protected:
        Base() = default; // prohibits the creation of Base objects, which is UB
    };
    struct D1 : public Base<D1> { void impl() { [std::puts](../io/c/puts.html)("D1::impl()"); } };
    struct D2 : public Base<D2> { void impl() { [std::puts](../io/c/puts.html)("D2::impl()"); } };
     
    #else // C++23 deducing-this syntax
     
    struct Base { void name(this auto&& self) { self.impl(); } };
    struct D1 : public Base { void impl() { [std::puts](../io/c/puts.html)("D1::impl()"); } };
    struct D2 : public Base { void impl() { [std::puts](../io/c/puts.html)("D2::impl()"); } };
     
    #endif
     
    int main()
    {
        D1 d1; d1.name();
        D2 d2; d2.name();
    }

Output: 
    
    
    D1::impl()
    D2::impl()

### See also

[Explicit object member functions (deducing `this`)](member_functions.html#Explicit_object_member_functions "cpp/language/member functions") (C++23)  
---  
[ enable_shared_from_this](../memory/enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11) |  allows an object to create a `shared_ptr` referring to itself   
(class template)   
[ ranges::view_interface](../ranges/view_interface.html "cpp/ranges/view interface")(C++20) |  helper class template for defining a [`view`](../ranges/view.html "cpp/ranges/view"), using the **curiously recurring template pattern**   
(class template)   
  
### External links

1\.  | [Replace CRTP with concepts?](https://www.sandordargo.com/blog/2024/12/04/crtp-vs-concepts) — Sandor Drago's blog   
---|---  
2\.  | [The Curiously Recurring Template Pattern (CRTP)](https://www.sandordargo.com/blog/2019/03/13/the-curiously-recurring-templatep-pattern-CRTP) — Sandor Drago's blog   
3\.  | [The Curiously Recurring Template Pattern (CRTP) - 1](https://www.fluentcpp.com/2017/05/12/curiously-recurring-template-pattern/) — Fluent{C++}  
4\.  | [What the CRTP can bring to your code - 2](https://www.fluentcpp.com/2017/05/16/what-the-crtp-brings-to-code/) — Fluent{C++}  
5\.  | [An implementation helper for the CRTP - 3](https://www.fluentcpp.com/2017/05/19/crtp-helper/) — Fluent{C++}  
6\.  | [What is the Curiously Recurring Template Pattern (CRTP)](https://stackoverflow.com/questions/4173254/what-is-the-curiously-recurring-template-pattern-crtp) — SO 
