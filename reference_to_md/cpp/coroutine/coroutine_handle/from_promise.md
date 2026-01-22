 
  


  
  
  
  
  
  
  
  
  
  
  


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
**coroutine_handle::from_promise**  
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
[operator==operator<=>](operator_cmp.html "cpp/coroutine/coroutine handle/operator cmp")  
Helper classes  
[hash<std::coroutine_handle>](hash.html "cpp/coroutine/coroutine handle/hash")  
  


static coroutine_handle from_promise( Promise& p ); |  |  (since C++20)  
---|---|---  
| |   
  
Creates a `coroutine_handle` from the promise object of a coroutine. The created `coroutine_handle` refers the coroutine, and [`promise()`](promise.html "cpp/coroutine/coroutine handle/promise") returns a reference to p. 

The behavior is undefined if p is not a reference to a promise object. This function is only provided for the primary template, i.e. specializations [std::coroutine_handle](../coroutine_handle.html)<> and [std::coroutine_handle](../coroutine_handle.html)<[std::noop_coroutine_promise](../noop_coroutine_promise.html)> do not have this function. 

## Contents

  * [1 Parameters](from_promise.html#Parameters)
  * [2 Return value](from_promise.html#Return_value)
  * [3 Example](from_promise.html#Example)
  * [4 See also](from_promise.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  promise object of a coroutine to refer   
---|---|---  
  
### Return value

A `coroutine_handle` referring the given coroutine. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ (constructor)](coroutine_handle.html "cpp/coroutine/coroutine handle/coroutine handle") |  constructs a `coroutine_handle` object   
(public member function)   
---|---  
[ from_address](from_address.html "cpp/coroutine/coroutine handle/from address")[static] |  imports a coroutine from a pointer   
(public static member function)   
[ noop_coroutine](../noop_coroutine.html "cpp/coroutine/noop coroutine")(C++20) |  creates a coroutine handle that has no observable effects when resumed or destroyed   
(function) 
