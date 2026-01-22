 
  


  
  
  
  
  
  
  
  
  
  
  


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
**coroutine_handle::operator() coroutine_handle::resume**  
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
void operator()() const;  
void resume() const; |  (1)  |  (since C++20)  
Member of specialization `std::coroutine_handle<std::noop_coroutine_promise>` |  |   
constexpr void operator()() const noexcept;  
constexpr void resume() const noexcept; |  (2)  |  (since C++20)  
| |   
  
1) Resumes the execution of the coroutine to which *this refers, or does nothing if the coroutine is a no-op coroutine.

2) Does nothing.

The behavior is undefined if *this does not refer to suspended coroutine, or the coroutine is not a no-op coroutine and suspended at its final suspend point. A concurrent resumption of the coroutine may result in a data race. 

Resumption of a coroutine on an execution agent other than the one on which it was suspended has implementation-defined behavior unless each execution agent either is a thread represented by [std::thread](../../thread/thread.html "cpp/thread/thread") or [std::jthread](../../thread/jthread.html "cpp/thread/jthread"), or is the thread executing `main`. 

## Contents

  * [1 Parameters](resume.html#Parameters)
  * [2 Return value](resume.html#Return_value)
  * [3 Exceptions](resume.html#Exceptions)
  * [4 Notes](resume.html#Notes)
  * [5 Example](resume.html#Example)
  * [6 See also](resume.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

(none) 

### Exceptions

If an exception is thrown from the execution of the coroutine, the exception is caught and `unhandled_exception` is called on the coroutine's promise object. If the call to `unhandled_exception` throws or rethrows an exception, that exception is propagated. 

### Notes

A coroutine that is resumed on a different execution agent should avoid relying on consistent thread identity throughout, such as holding a mutex object across a suspend point. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ destroy](destroy.html "cpp/coroutine/coroutine handle/destroy") |  destroys a coroutine   
(public member function)   
---|---
