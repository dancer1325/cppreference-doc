 
  


  
  
  
  
  
  
  
  
  
  
  


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
**coroutine_handle::coroutine_handle**  
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
[operator==operator<=>](operator_cmp.html "cpp/coroutine/coroutine handle/operator cmp")  
Helper classes  
[hash<std::coroutine_handle>](hash.html "cpp/coroutine/coroutine handle/hash")  
  


constexpr coroutine_handle() noexcept; |  (1)  |  (since C++20)  
---|---|---  
constexpr coroutine_handle( [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (2)  |  (since C++20)  
coroutine_handle( const coroutine_handle& other ) = default; |  (3)  |  (since C++20)  
coroutine_handle( coroutine_handle&& other ) = default; |  (4)  |  (since C++20)  
| |   
  
Creates a `coroutine_handle` that does not refer a coroutine, or copies a `coroutine_handle`. 

1,2) Initializes the underlying address [`_ptr_`](../coroutine_handle.html#Data_members "cpp/coroutine/coroutine handle") to nullptr. After construction, [`address()`](address.html "cpp/coroutine/coroutine handle/address") returns nullptr, and the `coroutine_handle` does not refer a coroutine. These constructors are not declared for the specialization [std::coroutine_handle](../coroutine_handle.html)<[std::noop_coroutine_promise](../noop_coroutine_promise.html)>.

3,4) Copies the underlying address. The copy constructor and move constructor are equivalent to implicitly declared ones.

### Parameters

other  |  \-  |  another `coroutine_handle` to copy   
---|---|---  
  
### Notes

[std::coroutine_handle](../coroutine_handle.html)<[std::noop_coroutine_promise](../noop_coroutine_promise.html)> is neither default constructible nor constructible from [std::nullptr_t](../../types/nullptr_t.html "cpp/types/nullptr t"). [std::noop_coroutine](../noop_coroutine.html "cpp/coroutine/noop coroutine") can be used to create a new [std::coroutine_handle](../coroutine_handle.html)<[std::noop_coroutine_promise](../noop_coroutine_promise.html)>. 

Static member functions from_promise and from_address can also create a `coroutine_handle`. 

### See also

[ from_promise](from_promise.html "cpp/coroutine/coroutine handle/from promise")[static] |  creates a `coroutine_handle` from the promise object of a coroutine   
(public static member function)   
---|---  
[ from_address](from_address.html "cpp/coroutine/coroutine handle/from address")[static] |  imports a coroutine from a pointer   
(public static member function)   
[ noop_coroutine](../noop_coroutine.html "cpp/coroutine/noop coroutine")(C++20) |  creates a coroutine handle that has no observable effects when resumed or destroyed   
(function) 
