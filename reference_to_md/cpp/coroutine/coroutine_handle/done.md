 
  


  
  
  
  
  
  
  
  
  
  
  


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
**coroutine_handle::done**  
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
[operator==operator<=>](operator_cmp.html "cpp/coroutine/coroutine handle/operator cmp")  
Helper classes  
[hash<std::coroutine_handle>](hash.html "cpp/coroutine/coroutine handle/hash")  
  


Member of other specializations |  |   
---|---|---  
bool done() const; |  (1)  |  (since C++20)  
Member of specialization `std::coroutine_handle<std::noop_coroutine_promise>` |  |   
constexpr bool done() const noexcept; |  (2)  |  (since C++20)  
| |   
  
Checks if a suspended coroutine is suspended at its final suspend point. 

1) Returns true if the coroutine to which *this refers is suspended at its final suspend point, or false if the coroutine is suspended at other suspend points. The behavior is undefined if *this does not refer to a suspended coroutine.

2) Always returns false.

## Contents

  * [1 Parameters](done.html#Parameters)
  * [2 Return value](done.html#Return_value)
  * [3 Notes](done.html#Notes)
  * [4 Example](done.html#Example)

  
---  
  
### Parameters

(none) 

### Return value

1) true if the coroutine is suspended at its final suspend point, false if the coroutine is suspended at other suspend points.

2) false

### Notes

A no-op coroutine is never considered to be suspended at its final suspend point. 

A coroutine with promise object p is considered to be suspended at its final suspend point only if, let e be the result of p.final_suspend(), e.await_ready() returns false. In particular, if p.final_suspend() returns [`std::suspend_never`](../suspend_never.html "cpp/coroutine/suspend never"), then done() never returns true. 

### Example

| This section is incomplete  
Reason: no example   
---|---
