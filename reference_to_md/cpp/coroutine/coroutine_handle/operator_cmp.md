 
  


  
  
  
  
  
  
  
  
  
  
  


[Coroutine support](../../coroutine.html "cpp/coroutine")

Coroutine traits  
---  
[coroutine_traits](../coroutine_traits.html "cpp/coroutine/coroutine traits")(C++20)  
Coroutine handle  
[coroutine_handle](../coroutine_handle.html "cpp/coroutine/coroutine handle")(C++20)  
No-op coroutines  
[noop_coroutine_promise](../noop_coroutine_promise.html "cpp/coroutine/noop coroutine promise")(C++20)  
[noop_coroutine](../noop_coroutine.html "cpp/coroutine/noop coroutine")(C++20)  
Trivial awaitables  
[suspend_never](../suspend_never.html "cpp/coroutine/suspend never")(C++20)  
[suspend_always](../suspend_always.html "cpp/coroutine/suspend always")(C++20)  
Range generators  
[generator](../generator.html "cpp/coroutine/generator")(C++23)  
  


[`std::coroutine_handle`](../coroutine_handle.html "cpp/coroutine/coroutine handle")

Member functions  
---  
[coroutine_handle::coroutine_handle](coroutine_handle.html "cpp/coroutine/coroutine handle/coroutine handle")  
[coroutine_handle::operator=](operator=.html "cpp/coroutine/coroutine handle/operator=")  
[coroutine_handle::from_promise](from_promise.html "cpp/coroutine/coroutine handle/from promise")  
Conversion  
[coroutine_handle::operator coroutine_handle<>](operator_coroutine_handle_void.html "cpp/coroutine/coroutine handle/operator coroutine handle void")  
Observers  
[coroutine_handle::done](done.html "cpp/coroutine/coroutine handle/done")  
[coroutine_handle::operator bool](operator_bool.html "cpp/coroutine/coroutine handle/operator bool")  
Control  
[coroutine_handle::operator()coroutine_handle::resume](resume.html "cpp/coroutine/coroutine handle/resume")  
[coroutine_handle::destroy](destroy.html "cpp/coroutine/coroutine handle/destroy")  
Promise access  
[coroutine_handle::promise](promise.html "cpp/coroutine/coroutine handle/promise")  
Export/import  
[coroutine_handle::address](address.html "cpp/coroutine/coroutine handle/address")  
[coroutine_handle::from_address](from_address.html "cpp/coroutine/coroutine handle/from address")  
Non-member functions  
**operator== operator<=>**  
Helper classes  
[hash<std::coroutine_handle>](hash.html "cpp/coroutine/coroutine handle/hash")  
  


Defined in header `[<coroutine>](../../header/coroutine.html "cpp/header/coroutine")` |  |   
---|---|---  
constexpr bool  
operator==( [std::coroutine_handle](../coroutine_handle.html)<> x, [std::coroutine_handle](../coroutine_handle.html)<> y ) noexcept; |  (1)  |  (since C++20)  
constexpr [std::strong_ordering](../../utility/compare/strong_ordering.html)  
operator<=>( [std::coroutine_handle](../coroutine_handle.html)<> x, [std::coroutine_handle](../coroutine_handle.html)<> y ) noexcept; |  (2)  |  (since C++20)  
| |   
  
Compares two [std::coroutine_handle](../coroutine_handle.html)<> values x and y according to their underlying addresses. 

The `<`, `<=`, `>`, `>=`, and `!=` operators are [synthesized](../../language/operators.html#Comparison_operators "cpp/language/operators") from operator<=> and operator== respectively. 

## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Notes](operator_cmp.html#Notes)
  * [4 Example](operator_cmp.html#Example)

  
---  
  
### Parameters

x, y  |  \-  |  [std::coroutine_handle](../coroutine_handle.html)<> values to compare   
---|---|---  
  
### Return value

1) x.address() == y.address()

2) [std::compare_three_way](../../utility/compare/compare_three_way.html){}(x.address(), y.address())

### Notes

Although these operators are only overloaded for [std::coroutine_handle](../coroutine_handle.html)<>, other specializations of [std::coroutine_handle](../coroutine_handle.html "cpp/coroutine/coroutine handle") are also equality comparable and three-way comparable, because they are implicitly convertible to [std::coroutine_handle](../coroutine_handle.html)<>. 

### Example

| This section is incomplete  
Reason: no example   
---|---
