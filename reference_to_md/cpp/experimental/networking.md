[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


**Networking**

[Template:cpp/experimental/networking/navbar content](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/navbar_content&action=edit&redlink=1 "Template:cpp/experimental/networking/navbar content \(page does not exist\)")



The C++ Extensions for Networking, ISO/IEC TS 19216:2018, defines new components for the C++ standard library listed on this page. 

The Networking TS is based on the C++14 standard as modified by [version 1 of the Library Fundamentals TS](memory.html "cpp/experimental/lib extensions"). Its design is based on the [Asio library](https://think-async.com/Asio). 

## Contents

  * [1 Library named requirements](networking.html#Library_named_requirements)
  * [2 Convenience headers](networking.html#Convenience_headers)
  * [3 Asynchronous model](networking.html#Asynchronous_model)
    * [3.1 Asynchronous result](networking.html#Asynchronous_result)
    * [3.2 Execution context and services](networking.html#Execution_context_and_services)
    * [3.3 Executors](networking.html#Executors)
    * [3.4 Dispatch/post/defer](networking.html#Dispatch.2Fpost.2Fdefer)
    * [3.5 Strand](networking.html#Strand)
    * [3.6 std::future interop](networking.html#std::future_interop)
  * [4 Basic I/O services](networking.html#Basic_I.2FO_services)
  * [5 Buffers and buffer-oriented streams](networking.html#Buffers_and_buffer-oriented_streams)
    * [5.1 Stream error codes](networking.html#Stream_error_codes)
    * [5.2 Buffers](networking.html#Buffers)
      * [5.2.1 Buffer type traits](networking.html#Buffer_type_traits)
      * [5.2.2 Buffer sequence access](networking.html#Buffer_sequence_access)
      * [5.2.3 Buffer operations](networking.html#Buffer_operations)
      * [5.2.4 Dynamic buffers](networking.html#Dynamic_buffers)
    * [5.3 Buffer I/O](networking.html#Buffer_I.2FO)
  * [6 Sockets and socket streams](networking.html#Sockets_and_socket_streams)
    * [6.1 Socket error codes](networking.html#Socket_error_codes)
    * [6.2 Sockets](networking.html#Sockets)
    * [6.3 Socket streams](networking.html#Socket_streams)
    * [6.4 Connect operations](networking.html#Connect_operations)
  * [7 Internet protocol](networking.html#Internet_protocol)
    * [7.1 Resolver error codes](networking.html#Resolver_error_codes)
    * [7.2 IP addresses](networking.html#IP_addresses)
      * [7.2.1 Address iteration](networking.html#Address_iteration)
    * [7.3 Networks](networking.html#Networks)
    * [7.4 Endpoints](networking.html#Endpoints)
    * [7.5 Name resolution](networking.html#Name_resolution)
    * [7.6 Host name](networking.html#Host_name)
    * [7.7 TCP and UDP sockets](networking.html#TCP_and_UDP_sockets)
      * [7.7.1 Socket options](networking.html#Socket_options)

  
---  
  
#### Library named requirements

The following named requirements are used in the normative text of the Networking TS to define the expectations of the library. The burden is on the programmer to ensure that library templates are instantiated with template arguments that satisfy these requirements. Failure to do so may result in very complex compiler diagnostics or in undefined behavior at runtime. 

[AcceptableProtocol](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/AcceptableProtocol&action=edit&redlink=1 "cpp/experimental/networking/named req/AcceptableProtocol \(page does not exist\)") |    
(named requirement)  
---|---  
[AsyncReadStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/AsyncReadStream&action=edit&redlink=1 "cpp/experimental/networking/named req/AsyncReadStream \(page does not exist\)") |    
(named requirement)  
[AsyncWriteStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/AsyncWriteStream&action=edit&redlink=1 "cpp/experimental/networking/named req/AsyncWriteStream \(page does not exist\)") |    
(named requirement)  
[CompletionCondition](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/CompletionCondition&action=edit&redlink=1 "cpp/experimental/networking/named req/CompletionCondition \(page does not exist\)") |    
(named requirement)  
[CompletionToken](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/CompletionToken&action=edit&redlink=1 "cpp/experimental/networking/named req/CompletionToken \(page does not exist\)") |    
(named requirement)  
[ConnectCondition](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ConnectCondition&action=edit&redlink=1 "cpp/experimental/networking/named req/ConnectCondition \(page does not exist\)") |    
(named requirement)  
[ConstBufferSequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ConstBufferSequence&action=edit&redlink=1 "cpp/experimental/networking/named req/ConstBufferSequence \(page does not exist\)") |  represents a set of memory regions that may be used as input to an operation  
(named requirement)  
[DynamicBuffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/DynamicBuffer&action=edit&redlink=1 "cpp/experimental/networking/named req/DynamicBuffer \(page does not exist\)") |    
(named requirement)  
[EndpointSequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/EndpointSequence&action=edit&redlink=1 "cpp/experimental/networking/named req/EndpointSequence \(page does not exist\)") |    
(named requirement)  
[ExecutionContext](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ExecutionContext&action=edit&redlink=1 "cpp/experimental/networking/named req/ExecutionContext \(page does not exist\)") |    
(named requirement)  
[Executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Executor&action=edit&redlink=1 "cpp/experimental/networking/named req/Executor \(page does not exist\)") |    
(named requirement)  
[GettableSocketOption](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/GettableSocketOption&action=edit&redlink=1 "cpp/experimental/networking/named req/GettableSocketOption \(page does not exist\)") |    
(named requirement)  
[InternetProtocol](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/InternetProtocol&action=edit&redlink=1 "cpp/experimental/networking/named req/InternetProtocol \(page does not exist\)") |    
(named requirement)  
[IoControlCommand](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/IoControlCommand&action=edit&redlink=1 "cpp/experimental/networking/named req/IoControlCommand \(page does not exist\)") |    
(named requirement)  
[MutableBufferSequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/MutableBufferSequence&action=edit&redlink=1 "cpp/experimental/networking/named req/MutableBufferSequence \(page does not exist\)") |    
(named requirement)  
[ProtoAllocator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ProtoAllocator&action=edit&redlink=1 "cpp/experimental/networking/named req/ProtoAllocator \(page does not exist\)") |    
(named requirement)  
[Protocol](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Protocol&action=edit&redlink=1 "cpp/experimental/networking/named req/Protocol \(page does not exist\)") |    
(named requirement)  
[Service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Service&action=edit&redlink=1 "cpp/experimental/networking/named req/Service \(page does not exist\)") |    
(named requirement)  
[SettableSocketOption](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/SettableSocketOption&action=edit&redlink=1 "cpp/experimental/networking/named req/SettableSocketOption \(page does not exist\)") |    
(named requirement)  
[Signature](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Signature&action=edit&redlink=1 "cpp/experimental/networking/named req/Signature \(page does not exist\)") |    
(named requirement)  
[SyncReadStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/SyncReadStream&action=edit&redlink=1 "cpp/experimental/networking/named req/SyncReadStream \(page does not exist\)") |    
(named requirement)  
[SyncWriteStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/SyncWriteStream&action=edit&redlink=1 "cpp/experimental/networking/named req/SyncWriteStream \(page does not exist\)") |    
(named requirement)  
[WaitTraits](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/WaitTraits&action=edit&redlink=1 "cpp/experimental/networking/named req/WaitTraits \(page does not exist\)") |    
(named requirement)  
  
#### Convenience headers

`**[`< experimental/net>`](../header/experimental/net.html "cpp/header/experimental/net")**` |  convenience header that includes every other Networking TS header   
---|---  
`**[`< experimental/netfwd>`](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/netfwd&action=edit&redlink=1 "cpp/header/experimental/netfwd \(page does not exist\)")**` |  contains forward declarations of major Networking TS components   
  
#### Asynchronous model

Defined in header `[<experimental/executor>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/executor&action=edit&redlink=1 "cpp/header/experimental/executor \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
  
#####  Asynchronous result   
  
[ async_result](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_result&action=edit&redlink=1 "cpp/experimental/networking/async result \(page does not exist\)") |    
(class template)   
[ async_completion](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_completion&action=edit&redlink=1 "cpp/experimental/networking/async completion \(page does not exist\)") |    
(class template)   
[ associated_allocator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/associated_allocator&action=edit&redlink=1 "cpp/experimental/networking/associated allocator \(page does not exist\)") |    
(class template)   
[ get_associated_allocator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/get_associated_allocator&action=edit&redlink=1 "cpp/experimental/networking/get associated allocator \(page does not exist\)") |    
(function template)   
  
#####  Execution context and services   
  
[ execution_context](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/execution_context&action=edit&redlink=1 "cpp/experimental/networking/execution context \(page does not exist\)") |    
(class)   
[ use_service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/use_service&action=edit&redlink=1 "cpp/experimental/networking/use service \(page does not exist\)") |    
(function template)   
[ make_service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_service&action=edit&redlink=1 "cpp/experimental/networking/make service \(page does not exist\)") |    
(function template)   
[ has_service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/has_service&action=edit&redlink=1 "cpp/experimental/networking/has service \(page does not exist\)") |    
(function template)   
[ service_already_exists](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/service_already_exists&action=edit&redlink=1 "cpp/experimental/networking/service already exists \(page does not exist\)") |    
(class)   
  
#####  Executors   
  
[ is_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_executor&action=edit&redlink=1 "cpp/experimental/networking/is executor \(page does not exist\)") |    
(class template)   
[ executor_arg_t](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor_arg_t&action=edit&redlink=1 "cpp/experimental/networking/executor arg t \(page does not exist\)") |    
(class)   
[ uses_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/uses_executor&action=edit&redlink=1 "cpp/experimental/networking/uses executor \(page does not exist\)") |    
(class template)   
[ associated_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/associated_executor&action=edit&redlink=1 "cpp/experimental/networking/associated executor \(page does not exist\)") |    
(class template)   
[ get_associated_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/get_associated_executor&action=edit&redlink=1 "cpp/experimental/networking/get associated executor \(page does not exist\)") |    
(function template)   
[ executor_binder](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor_binder&action=edit&redlink=1 "cpp/experimental/networking/executor binder \(page does not exist\)") |    
(class template)   
[ bind_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/bind_executor&action=edit&redlink=1 "cpp/experimental/networking/bind executor \(page does not exist\)") |    
(function template)   
[ executor_work_guard](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor_work_guard&action=edit&redlink=1 "cpp/experimental/networking/executor work guard \(page does not exist\)") |    
(class template)   
[ system_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/system_executor&action=edit&redlink=1 "cpp/experimental/networking/system executor \(page does not exist\)") |    
(class)   
[ system_context](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/system_context&action=edit&redlink=1 "cpp/experimental/networking/system context \(page does not exist\)") |    
(class)   
[ executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor&action=edit&redlink=1 "cpp/experimental/networking/executor \(page does not exist\)") |    
(class)   
[ bad_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/bad_executor&action=edit&redlink=1 "cpp/experimental/networking/bad executor \(page does not exist\)") |    
(class)   
  
#####  Dispatch/post/defer   
  
[ dispatch](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dispatch&action=edit&redlink=1 "cpp/experimental/networking/dispatch \(page does not exist\)") |    
(function template)   
[ post](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/post&action=edit&redlink=1 "cpp/experimental/networking/post \(page does not exist\)") |    
(function template)   
[ defer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/defer&action=edit&redlink=1 "cpp/experimental/networking/defer \(page does not exist\)") |    
(function template)   
  
#####  Strand   
  
[ strand](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/strand&action=edit&redlink=1 "cpp/experimental/networking/strand \(page does not exist\)") |    
(class template)   
  
#####  [std::future](../thread/future.html "cpp/thread/future") interop   
  
[ use_future_t](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/use_future_t&action=edit&redlink=1 "cpp/experimental/networking/use future t \(page does not exist\)") |    
(class template)   
  
#### Basic I/O services

Defined in header `[<experimental/io_context>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/io_context&action=edit&redlink=1 "cpp/header/experimental/io context \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
[ io_context](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/io_context&action=edit&redlink=1 "cpp/experimental/networking/io context \(page does not exist\)") |    
(class)   
  
#### Buffers and buffer-oriented streams

Defined in header `[<experimental/buffer>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/buffer&action=edit&redlink=1 "cpp/header/experimental/buffer \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
  
#####  Stream error codes   
  
[ stream_errc](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/stream_errc&action=edit&redlink=1 "cpp/experimental/networking/stream errc \(page does not exist\)") |    
(function)   
[ stream_category](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/stream_category&action=edit&redlink=1 "cpp/experimental/networking/stream category \(page does not exist\)") |    
(enum)   
  
#####  Buffers   
  
[ mutable_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/mutable_buffer&action=edit&redlink=1 "cpp/experimental/networking/mutable buffer \(page does not exist\)") |    
(class)   
[ const_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/const_buffer&action=edit&redlink=1 "cpp/experimental/networking/const buffer \(page does not exist\)") |    
(class)   
[ buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer&action=edit&redlink=1 "cpp/experimental/networking/buffer \(page does not exist\)") |    
(function template)   
  
######  Buffer type traits  
  
[ is_mutable_buffer_sequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_mutable_buffer_sequence&action=edit&redlink=1 "cpp/experimental/networking/is mutable buffer sequence \(page does not exist\)") |    
(class template)   
[ is_const_buffer_sequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_const_buffer_sequence&action=edit&redlink=1 "cpp/experimental/networking/is const buffer sequence \(page does not exist\)") |    
(class template)   
[ is_dynamic_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_dynamic_buffer&action=edit&redlink=1 "cpp/experimental/networking/is dynamic buffer \(page does not exist\)") |    
(class template)   
  
######  Buffer sequence access  
  
[ buffer_sequence_begin](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_sequence_begin&action=edit&redlink=1 "cpp/experimental/networking/buffer sequence begin \(page does not exist\)") |    
(function template)   
[ buffer_sequence_end](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_sequence_end&action=edit&redlink=1 "cpp/experimental/networking/buffer sequence end \(page does not exist\)") |    
(function template)   
  
######  Buffer operations  
  
[ buffer_size](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_size&action=edit&redlink=1 "cpp/experimental/networking/buffer size \(page does not exist\)") |    
(function template)   
[ buffer_copy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_copy&action=edit&redlink=1 "cpp/experimental/networking/buffer copy \(page does not exist\)") |    
(function template)   
  
######  Dynamic buffers  
  
[ dynamic_vector_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dynamic_vector_buffer&action=edit&redlink=1 "cpp/experimental/networking/dynamic vector buffer \(page does not exist\)") |    
(class template)   
[ dynamic_string_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dynamic_string_buffer&action=edit&redlink=1 "cpp/experimental/networking/dynamic string buffer \(page does not exist\)") |    
(class template)   
[ dynamic_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dynamic_buffer&action=edit&redlink=1 "cpp/experimental/networking/dynamic buffer \(page does not exist\)") |    
(function template)   
  
#####  Buffer I/O   
  
[ transfer_all](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/transfer_all&action=edit&redlink=1 "cpp/experimental/networking/transfer all \(page does not exist\)") |    
(class)   
[ transfer_at_least](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/transfer_at_least&action=edit&redlink=1 "cpp/experimental/networking/transfer at least \(page does not exist\)") |    
(class)   
[ transfer_exactly](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/transfer_exactly&action=edit&redlink=1 "cpp/experimental/networking/transfer exactly \(page does not exist\)") |    
(class)   
[ read](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/read&action=edit&redlink=1 "cpp/experimental/networking/read \(page does not exist\)") |    
(function template)   
[ read_until](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/read_until&action=edit&redlink=1 "cpp/experimental/networking/read until \(page does not exist\)") |    
(function template)   
[ async_read](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_read&action=edit&redlink=1 "cpp/experimental/networking/async read \(page does not exist\)") |    
(function template)   
[ async_read_until](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_read_until&action=edit&redlink=1 "cpp/experimental/networking/async read until \(page does not exist\)") |    
(function template)   
[ write](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/write&action=edit&redlink=1 "cpp/experimental/networking/write \(page does not exist\)") |    
(function template)   
[ async_write](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_write&action=edit&redlink=1 "cpp/experimental/networking/async write \(page does not exist\)") |    
(function template)   
  
#### Sockets and socket streams

Defined in header `[<experimental/socket>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/socket&action=edit&redlink=1 "cpp/header/experimental/socket \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
  
#####  Socket error codes   
  
[ socket_errc](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/socket_errc&action=edit&redlink=1 "cpp/experimental/networking/socket errc \(page does not exist\)") |    
(enum)   
[ socket_category](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/socket_category&action=edit&redlink=1 "cpp/experimental/networking/socket category \(page does not exist\)") |    
(function)   
  
#####  Sockets   
  
[ socket_base](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/socket_base&action=edit&redlink=1 "cpp/experimental/networking/socket base \(page does not exist\)") |    
(class)   
[ basic_socket](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket&action=edit&redlink=1 "cpp/experimental/networking/basic socket \(page does not exist\)") |    
(class template)   
[ basic_datagram_socket](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_datagram_socket&action=edit&redlink=1 "cpp/experimental/networking/basic datagram socket \(page does not exist\)") |    
(class template)   
[ basic_stream_socket](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_stream_socket&action=edit&redlink=1 "cpp/experimental/networking/basic stream socket \(page does not exist\)") |    
(class template)   
[ basic_socket_acceptor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket_acceptor&action=edit&redlink=1 "cpp/experimental/networking/basic socket acceptor \(page does not exist\)") |    
(class template)   
  
#####  Socket streams   
  
[ basic_socket_streambuf](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket_streambuf&action=edit&redlink=1 "cpp/experimental/networking/basic socket streambuf \(page does not exist\)") |    
(class template)   
[ basic_socket_iostream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket_iostream&action=edit&redlink=1 "cpp/experimental/networking/basic socket iostream \(page does not exist\)") |    
(class template)   
  
#####  Connect operations   
  
[ connect](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/connect&action=edit&redlink=1 "cpp/experimental/networking/connect \(page does not exist\)") |    
(function template)   
[ async_connect](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_connect&action=edit&redlink=1 "cpp/experimental/networking/async connect \(page does not exist\)") |    
(function template)   
  
#### Internet protocol

Defined in header `[<experimental/internet>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/internet&action=edit&redlink=1 "cpp/header/experimental/internet \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net::ip`  
  
#####  Resolver error codes   
  
[ resolver_errc](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/resolver_errc&action=edit&redlink=1 "cpp/experimental/networking/resolver errc \(page does not exist\)") |    
(enum)   
[ resolver_category](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/resolver_category&action=edit&redlink=1 "cpp/experimental/networking/resolver category \(page does not exist\)") |    
(function)   
  
#####  IP addresses   
  
[ address_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/address_v4&action=edit&redlink=1 "cpp/experimental/networking/address v4 \(page does not exist\)") |    
(class)   
[ make_address_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_address_v4&action=edit&redlink=1 "cpp/experimental/networking/make address v4 \(page does not exist\)") |    
(function template)   
[ address_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/address_v6&action=edit&redlink=1 "cpp/experimental/networking/address v6 \(page does not exist\)") |    
(class)   
[ make_address_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_address_v6&action=edit&redlink=1 "cpp/experimental/networking/make address v6 \(page does not exist\)") |    
(function template)   
[ address](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/address&action=edit&redlink=1 "cpp/experimental/networking/address \(page does not exist\)") |    
(class)   
[ bad_address_cast](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/bad_address_cast&action=edit&redlink=1 "cpp/experimental/networking/bad address cast \(page does not exist\)") |    
(class)   
[ make_address](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_address&action=edit&redlink=1 "cpp/experimental/networking/make address \(page does not exist\)") |    
(function template)   
  
######  Address iteration  
  
[ basic_address_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_address_iterator&action=edit&redlink=1 "cpp/experimental/networking/basic address iterator \(page does not exist\)") |    
(class template)   
[ basic_address_range](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_address_range&action=edit&redlink=1 "cpp/experimental/networking/basic address range \(page does not exist\)") |    
(class template)   
  
#####  Networks   
  
[ network_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/network_v4&action=edit&redlink=1 "cpp/experimental/networking/network v4 \(page does not exist\)") |    
(class)   
[ make_network_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_network_v4&action=edit&redlink=1 "cpp/experimental/networking/make network v4 \(page does not exist\)") |    
(function template)   
[ network_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/network_v6&action=edit&redlink=1 "cpp/experimental/networking/network v6 \(page does not exist\)") |    
(class)   
[ make_network_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_network_v6&action=edit&redlink=1 "cpp/experimental/networking/make network v6 \(page does not exist\)") |    
(function template)   
  
#####  Endpoints   
  
[ basic_endpoint](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_endpoint&action=edit&redlink=1 "cpp/experimental/networking/basic endpoint \(page does not exist\)") |    
(class template)   
  
#####  Name resolution   
  
[ basic_resolver_entry](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_resolver_entry&action=edit&redlink=1 "cpp/experimental/networking/basic resolver entry \(page does not exist\)") |    
(class template)   
[ basic_resolver_results](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_resolver_results&action=edit&redlink=1 "cpp/experimental/networking/basic resolver results \(page does not exist\)") |    
(class template)   
[ resolver_base](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/resolver_base&action=edit&redlink=1 "cpp/experimental/networking/resolver base \(page does not exist\)") |    
(class)   
[ basic_resolver](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_resolver&action=edit&redlink=1 "cpp/experimental/networking/basic resolver \(page does not exist\)") |    
(class template)   
  
#####  Host name   
  
[ host_name](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/host_name&action=edit&redlink=1 "cpp/experimental/networking/host name \(page does not exist\)") |    
(function template)   
  
#####  TCP and UDP sockets   
  
[ tcp](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/tcp&action=edit&redlink=1 "cpp/experimental/networking/tcp \(page does not exist\)") |    
(class)   
[ udp](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/udp&action=edit&redlink=1 "cpp/experimental/networking/udp \(page does not exist\)") |    
(class)   
  
######  Socket options  
  
Defined in namespace `std::experimental::net::ip`  
[ v6_only](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/v6_only&action=edit&redlink=1 "cpp/experimental/networking/v6 only \(page does not exist\)") |    
(class)   
Defined in namespace `std::experimental::net::ip::unicast`  
[ hops](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/unicast/hops&action=edit&redlink=1 "cpp/experimental/networking/unicast/hops \(page does not exist\)") |    
(class)   
Defined in namespace `std::experimental::net::ip::multicast`  
[ join_group](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/join_group&action=edit&redlink=1 "cpp/experimental/networking/multicast/join group \(page does not exist\)") |    
(class)   
[ leave_group](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/leave_group&action=edit&redlink=1 "cpp/experimental/networking/multicast/leave group \(page does not exist\)") |    
(class)   
[ outbound_interface](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/outbound_interface&action=edit&redlink=1 "cpp/experimental/networking/multicast/outbound interface \(page does not exist\)") |    
(class)   
[ hops](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/hops&action=edit&redlink=1 "cpp/experimental/networking/multicast/hops \(page does not exist\)") |    
(class)   
[ enable_loopback](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/enable_loopback&action=edit&redlink=1 "cpp/experimental/networking/multicast/enable loopback \(page does not exist\)") |    
(class) 
