 
  


  
  
  
  
  
  
  
  
  
  
  


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
**coroutine_handle::address**  
[coroutine_handle::from_address](from_address.html "cpp/coroutine/coroutine handle/from address")  
Non-member functions  
[operator==operator<=>](operator_cmp.html "cpp/coroutine/coroutine handle/operator cmp")  
Helper classes  
[hash<std::coroutine_handle>](hash.html "cpp/coroutine/coroutine handle/hash")  
  


constexpr void* address() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns the underlying address of the `coroutine_handle`. The return value is non-null if and only if the current value of the `coroutine_handle` is obtained from a promise object of a coroutine. 

## Contents

  * [1 Parameters](address.html#Parameters)
  * [2 Return value](address.html#Return_value)
  * [3 Notes](address.html#Notes)
  * [4 See also](address.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The underlying address. 

### Notes

The return value is non-null for specialization [std::noop_coroutine_handle](../coroutine_handle.html "cpp/coroutine/coroutine handle"), because a `std::noop_coroutine_handle` cannot be created without referring to a no-op coroutine. 

### See also

[ from_address](from_address.html "cpp/coroutine/coroutine handle/from address")[static] |  imports a coroutine from a pointer   
(public static member function)   
---|---
