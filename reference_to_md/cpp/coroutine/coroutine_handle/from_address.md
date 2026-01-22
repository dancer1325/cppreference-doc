 
  


  
  
  
  
  
  
  
  
  
  
  


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
**coroutine_handle::from_address**  
Non-member functions  
[operator==operator<=>](operator_cmp.html "cpp/coroutine/coroutine handle/operator cmp")  
Helper classes  
[hash<std::coroutine_handle>](hash.html "cpp/coroutine/coroutine handle/hash")  
  


static constexpr coroutine_handle from_address( void *addr ); |  |  (since C++20)  
---|---|---  
| |   
  
Creates a `coroutine_handle` from a null pointer value or an underlying address of another `coroutine_handle`. The underlying address of return value is addr. 

The behavior is undefined if addr is neither a null pointer value nor an underlying address of a `coroutine_handle`. The behavior is also undefined if the addr is an underlying address of a [std::coroutine_handle](../coroutine_handle.html)<P1>, where both `Promise` and `P1` are not void, and `P1` is different from `Promise`. 

This function is not declared for specialization [std::coroutine_handle](../coroutine_handle.html)<[std::noop_coroutine_promise](../noop_coroutine_promise.html)>. 

## Contents

  * [1 Parameters](from_address.html#Parameters)
  * [2 Return value](from_address.html#Return_value)
  * [3 Notes](from_address.html#Notes)
  * [4 Example](from_address.html#Example)
  * [5 See also](from_address.html#See_also)

  
---  
  
### Parameters

addr  |  \-  |  underlying address to import   
---|---|---  
  
### Return value

A [std::coroutine_handle](../coroutine_handle.html)<Promise> whose underlying address is addr. 

### Notes

If addr is not a null pointer value, it must be obtained from a prior call to address() on a `coroutine_handle` referring to some coroutine. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ (constructor)](coroutine_handle.html "cpp/coroutine/coroutine handle/coroutine handle") |  constructs a `coroutine_handle` object   
(public member function)   
---|---  
[ from_promise](from_promise.html "cpp/coroutine/coroutine handle/from promise")[static] |  creates a `coroutine_handle` from the promise object of a coroutine   
(public static member function)   
[ noop_coroutine](../noop_coroutine.html "cpp/coroutine/noop coroutine")(C++20) |  creates a coroutine handle that has no observable effects when resumed or destroyed   
(function) 
