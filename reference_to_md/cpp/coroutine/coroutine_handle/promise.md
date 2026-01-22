 
  


  
  
  
  
  
  
  
  
  
  
  


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
**coroutine_handle::promise**  
Export/import  
[coroutine_handle::address](address.html "cpp/coroutine/coroutine handle/address")  
[coroutine_handle::from_address](from_address.html "cpp/coroutine/coroutine handle/from address")  
Non-member functions  
[operator==operator<=>](operator_cmp.html "cpp/coroutine/coroutine handle/operator cmp")  
Helper classes  
[hash<std::coroutine_handle>](hash.html "cpp/coroutine/coroutine handle/hash")  
  


Member of the primary template |  |   
---|---|---  
Promise& promise() const; |  |  (since C++20)  
Member of specialization `std::coroutine_handle<std::noop_coroutine_promise>` |  |   
[std::noop_coroutine_promise](../noop_coroutine_promise.html)& promise() const noexcept; |  |  (since C++20)  
| |   
  
Obtains a reference to the promise object. 

The behavior is undefined if *this does not refer to a coroutine whose promise object has not been destroyed. 

This function is not provided for the specialization [std::coroutine_handle](../coroutine_handle.html)<>. 

## Contents

  * [1 Parameters](promise.html#Parameters)
  * [2 Return value](promise.html#Return_value)
  * [3 Notes](promise.html#Notes)
  * [4 See also](promise.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

A reference to the promise object. 

### Notes

The promise object of a no-op coroutine is not destroyed as long as there is some [std::noop_coroutine_handle](../coroutine_handle.html "cpp/coroutine/coroutine handle") referring to the coroutine. 

### See also

[ from_promise](from_promise.html "cpp/coroutine/coroutine handle/from promise")[static] |  creates a `coroutine_handle` from the promise object of a coroutine   
(public static member function)   
---|---
