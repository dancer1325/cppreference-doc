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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

**Networking**

[Template:cpp/experimental/networking/navbar content](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/navbar_content&action=edit&redlink=1 "Template:cpp/experimental/networking/navbar content \(page does not exist\)")

[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/navbar_content&action=edit)

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
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&action=edit&section=1 "Edit section: Library named requirements")] Library named requirements

The following named requirements are used in the normative text of the Networking TS to define the expectations of the library. The burden is on the programmer to ensure that library templates are instantiated with template arguments that satisfy these requirements. Failure to do so may result in very complex compiler diagnostics or in undefined behavior at runtime. 

[AcceptableProtocol](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/AcceptableProtocol&action=edit&redlink=1 "cpp/experimental/networking/named req/AcceptableProtocol \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_AcceptableProtocol&action=edit)  
---|---  
[AsyncReadStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/AsyncReadStream&action=edit&redlink=1 "cpp/experimental/networking/named req/AsyncReadStream \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_AsyncReadStream&action=edit)  
[AsyncWriteStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/AsyncWriteStream&action=edit&redlink=1 "cpp/experimental/networking/named req/AsyncWriteStream \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_AsyncWriteStream&action=edit)  
[CompletionCondition](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/CompletionCondition&action=edit&redlink=1 "cpp/experimental/networking/named req/CompletionCondition \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_CompletionCondition&action=edit)  
[CompletionToken](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/CompletionToken&action=edit&redlink=1 "cpp/experimental/networking/named req/CompletionToken \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_CompletionToken&action=edit)  
[ConnectCondition](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ConnectCondition&action=edit&redlink=1 "cpp/experimental/networking/named req/ConnectCondition \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_ConnectCondition&action=edit)  
[ConstBufferSequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ConstBufferSequence&action=edit&redlink=1 "cpp/experimental/networking/named req/ConstBufferSequence \(page does not exist\)") |  represents a set of memory regions that may be used as input to an operation  
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_ConstBufferSequence&action=edit)  
[DynamicBuffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/DynamicBuffer&action=edit&redlink=1 "cpp/experimental/networking/named req/DynamicBuffer \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_DynamicBuffer&action=edit)  
[EndpointSequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/EndpointSequence&action=edit&redlink=1 "cpp/experimental/networking/named req/EndpointSequence \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_EndpointSequence&action=edit)  
[ExecutionContext](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ExecutionContext&action=edit&redlink=1 "cpp/experimental/networking/named req/ExecutionContext \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_ExecutionContext&action=edit)  
[Executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Executor&action=edit&redlink=1 "cpp/experimental/networking/named req/Executor \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_Executor&action=edit)  
[GettableSocketOption](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/GettableSocketOption&action=edit&redlink=1 "cpp/experimental/networking/named req/GettableSocketOption \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_GettableSocketOption&action=edit)  
[InternetProtocol](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/InternetProtocol&action=edit&redlink=1 "cpp/experimental/networking/named req/InternetProtocol \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_InternetProtocol&action=edit)  
[IoControlCommand](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/IoControlCommand&action=edit&redlink=1 "cpp/experimental/networking/named req/IoControlCommand \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_IoControlCommand&action=edit)  
[MutableBufferSequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/MutableBufferSequence&action=edit&redlink=1 "cpp/experimental/networking/named req/MutableBufferSequence \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_MutableBufferSequence&action=edit)  
[ProtoAllocator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/ProtoAllocator&action=edit&redlink=1 "cpp/experimental/networking/named req/ProtoAllocator \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_ProtoAllocator&action=edit)  
[Protocol](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Protocol&action=edit&redlink=1 "cpp/experimental/networking/named req/Protocol \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_Protocol&action=edit)  
[Service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Service&action=edit&redlink=1 "cpp/experimental/networking/named req/Service \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_Service&action=edit)  
[SettableSocketOption](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/SettableSocketOption&action=edit&redlink=1 "cpp/experimental/networking/named req/SettableSocketOption \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_SettableSocketOption&action=edit)  
[Signature](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/Signature&action=edit&redlink=1 "cpp/experimental/networking/named req/Signature \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_Signature&action=edit)  
[SyncReadStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/SyncReadStream&action=edit&redlink=1 "cpp/experimental/networking/named req/SyncReadStream \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_SyncReadStream&action=edit)  
[SyncWriteStream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/SyncWriteStream&action=edit&redlink=1 "cpp/experimental/networking/named req/SyncWriteStream \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_SyncWriteStream&action=edit)  
[WaitTraits](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/named_req/WaitTraits&action=edit&redlink=1 "cpp/experimental/networking/named req/WaitTraits \(page does not exist\)") |    
(named requirement)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/named_req/dsc_WaitTraits&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&action=edit&section=2 "Edit section: Convenience headers")] Convenience headers

`**[`< experimental/net>`](../header/experimental/net.html "cpp/header/experimental/net")**` |  convenience header that includes every other Networking TS header   
---|---  
`**[`< experimental/netfwd>`](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/netfwd&action=edit&redlink=1 "cpp/header/experimental/netfwd \(page does not exist\)")**` |  contains forward declarations of major Networking TS components   
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&action=edit&section=3 "Edit section: Asynchronous model")] Asynchronous model

Defined in header `[<experimental/executor>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/executor&action=edit&redlink=1 "cpp/header/experimental/executor \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
  
#####  Asynchronous result   
  
[ async_result](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_result&action=edit&redlink=1 "cpp/experimental/networking/async result \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_async_result&action=edit)  
[ async_completion](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_completion&action=edit&redlink=1 "cpp/experimental/networking/async completion \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_async_completion&action=edit)  
[ associated_allocator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/associated_allocator&action=edit&redlink=1 "cpp/experimental/networking/associated allocator \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_associated_allocator&action=edit)  
[ get_associated_allocator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/get_associated_allocator&action=edit&redlink=1 "cpp/experimental/networking/get associated allocator \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_get_associated_allocator&action=edit)  
  
#####  Execution context and services   
  
[ execution_context](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/execution_context&action=edit&redlink=1 "cpp/experimental/networking/execution context \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_execution_context&action=edit)  
[ use_service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/use_service&action=edit&redlink=1 "cpp/experimental/networking/use service \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_use_service&action=edit)  
[ make_service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_service&action=edit&redlink=1 "cpp/experimental/networking/make service \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_make_service&action=edit)  
[ has_service](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/has_service&action=edit&redlink=1 "cpp/experimental/networking/has service \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_has_service&action=edit)  
[ service_already_exists](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/service_already_exists&action=edit&redlink=1 "cpp/experimental/networking/service already exists \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_service_already_exists&action=edit)  
  
#####  Executors   
  
[ is_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_executor&action=edit&redlink=1 "cpp/experimental/networking/is executor \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_is_executor&action=edit)  
[ executor_arg_t](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor_arg_t&action=edit&redlink=1 "cpp/experimental/networking/executor arg t \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_executor_arg_t&action=edit)  
[ uses_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/uses_executor&action=edit&redlink=1 "cpp/experimental/networking/uses executor \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_uses_executor&action=edit)  
[ associated_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/associated_executor&action=edit&redlink=1 "cpp/experimental/networking/associated executor \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_associated_executor&action=edit)  
[ get_associated_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/get_associated_executor&action=edit&redlink=1 "cpp/experimental/networking/get associated executor \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_get_associated_executor&action=edit)  
[ executor_binder](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor_binder&action=edit&redlink=1 "cpp/experimental/networking/executor binder \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_executor_binder&action=edit)  
[ bind_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/bind_executor&action=edit&redlink=1 "cpp/experimental/networking/bind executor \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_bind_executor&action=edit)  
[ executor_work_guard](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor_work_guard&action=edit&redlink=1 "cpp/experimental/networking/executor work guard \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_executor_work_guard&action=edit)  
[ system_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/system_executor&action=edit&redlink=1 "cpp/experimental/networking/system executor \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_system_executor&action=edit)  
[ system_context](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/system_context&action=edit&redlink=1 "cpp/experimental/networking/system context \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_system_context&action=edit)  
[ executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/executor&action=edit&redlink=1 "cpp/experimental/networking/executor \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_executor&action=edit)  
[ bad_executor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/bad_executor&action=edit&redlink=1 "cpp/experimental/networking/bad executor \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_bad_executor&action=edit)  
  
#####  Dispatch/post/defer   
  
[ dispatch](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dispatch&action=edit&redlink=1 "cpp/experimental/networking/dispatch \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_dispatch&action=edit)  
[ post](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/post&action=edit&redlink=1 "cpp/experimental/networking/post \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_post&action=edit)  
[ defer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/defer&action=edit&redlink=1 "cpp/experimental/networking/defer \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_defer&action=edit)  
  
#####  Strand   
  
[ strand](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/strand&action=edit&redlink=1 "cpp/experimental/networking/strand \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_strand&action=edit)  
  
#####  [std::future](../thread/future.html "cpp/thread/future") interop   
  
[ use_future_t](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/use_future_t&action=edit&redlink=1 "cpp/experimental/networking/use future t \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_use_future_t&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&action=edit&section=4 "Edit section: Basic I/O services")] Basic I/O services

Defined in header `[<experimental/io_context>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/io_context&action=edit&redlink=1 "cpp/header/experimental/io context \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
[ io_context](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/io_context&action=edit&redlink=1 "cpp/experimental/networking/io context \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_io_context&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&action=edit&section=5 "Edit section: Buffers and buffer-oriented streams")] Buffers and buffer-oriented streams

Defined in header `[<experimental/buffer>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/buffer&action=edit&redlink=1 "cpp/header/experimental/buffer \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
  
#####  Stream error codes   
  
[ stream_errc](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/stream_errc&action=edit&redlink=1 "cpp/experimental/networking/stream errc \(page does not exist\)") |    
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_stream_errc&action=edit)  
[ stream_category](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/stream_category&action=edit&redlink=1 "cpp/experimental/networking/stream category \(page does not exist\)") |    
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_stream_category&action=edit)  
  
#####  Buffers   
  
[ mutable_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/mutable_buffer&action=edit&redlink=1 "cpp/experimental/networking/mutable buffer \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_mutable_buffer&action=edit)  
[ const_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/const_buffer&action=edit&redlink=1 "cpp/experimental/networking/const buffer \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_const_buffer&action=edit)  
[ buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer&action=edit&redlink=1 "cpp/experimental/networking/buffer \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_buffer&action=edit)  
  
######  Buffer type traits  
  
[ is_mutable_buffer_sequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_mutable_buffer_sequence&action=edit&redlink=1 "cpp/experimental/networking/is mutable buffer sequence \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_is_mutable_buffer_sequence&action=edit)  
[ is_const_buffer_sequence](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_const_buffer_sequence&action=edit&redlink=1 "cpp/experimental/networking/is const buffer sequence \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_is_const_buffer_sequence&action=edit)  
[ is_dynamic_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/is_dynamic_buffer&action=edit&redlink=1 "cpp/experimental/networking/is dynamic buffer \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_is_dynamic_buffer&action=edit)  
  
######  Buffer sequence access  
  
[ buffer_sequence_begin](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_sequence_begin&action=edit&redlink=1 "cpp/experimental/networking/buffer sequence begin \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_buffer_sequence_begin&action=edit)  
[ buffer_sequence_end](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_sequence_end&action=edit&redlink=1 "cpp/experimental/networking/buffer sequence end \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_buffer_sequence_end&action=edit)  
  
######  Buffer operations  
  
[ buffer_size](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_size&action=edit&redlink=1 "cpp/experimental/networking/buffer size \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_buffer_size&action=edit)  
[ buffer_copy](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/buffer_copy&action=edit&redlink=1 "cpp/experimental/networking/buffer copy \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_buffer_copy&action=edit)  
  
######  Dynamic buffers  
  
[ dynamic_vector_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dynamic_vector_buffer&action=edit&redlink=1 "cpp/experimental/networking/dynamic vector buffer \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_dynamic_vector_buffer&action=edit)  
[ dynamic_string_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dynamic_string_buffer&action=edit&redlink=1 "cpp/experimental/networking/dynamic string buffer \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_dynamic_string_buffer&action=edit)  
[ dynamic_buffer](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/dynamic_buffer&action=edit&redlink=1 "cpp/experimental/networking/dynamic buffer \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_dynamic_buffer&action=edit)  
  
#####  Buffer I/O   
  
[ transfer_all](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/transfer_all&action=edit&redlink=1 "cpp/experimental/networking/transfer all \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_transfer_all&action=edit)  
[ transfer_at_least](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/transfer_at_least&action=edit&redlink=1 "cpp/experimental/networking/transfer at least \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_transfer_at_least&action=edit)  
[ transfer_exactly](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/transfer_exactly&action=edit&redlink=1 "cpp/experimental/networking/transfer exactly \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_transfer_exactly&action=edit)  
[ read](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/read&action=edit&redlink=1 "cpp/experimental/networking/read \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_read&action=edit)  
[ read_until](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/read_until&action=edit&redlink=1 "cpp/experimental/networking/read until \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_read_until&action=edit)  
[ async_read](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_read&action=edit&redlink=1 "cpp/experimental/networking/async read \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_async_read&action=edit)  
[ async_read_until](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_read_until&action=edit&redlink=1 "cpp/experimental/networking/async read until \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_async_read_until&action=edit)  
[ write](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/write&action=edit&redlink=1 "cpp/experimental/networking/write \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_write&action=edit)  
[ async_write](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_write&action=edit&redlink=1 "cpp/experimental/networking/async write \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_async_write&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&action=edit&section=6 "Edit section: Sockets and socket streams")] Sockets and socket streams

Defined in header `[<experimental/socket>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/socket&action=edit&redlink=1 "cpp/header/experimental/socket \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net`  
  
#####  Socket error codes   
  
[ socket_errc](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/socket_errc&action=edit&redlink=1 "cpp/experimental/networking/socket errc \(page does not exist\)") |    
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_socket_errc&action=edit)  
[ socket_category](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/socket_category&action=edit&redlink=1 "cpp/experimental/networking/socket category \(page does not exist\)") |    
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_socket_category&action=edit)  
  
#####  Sockets   
  
[ socket_base](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/socket_base&action=edit&redlink=1 "cpp/experimental/networking/socket base \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_socket_base&action=edit)  
[ basic_socket](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket&action=edit&redlink=1 "cpp/experimental/networking/basic socket \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_socket&action=edit)  
[ basic_datagram_socket](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_datagram_socket&action=edit&redlink=1 "cpp/experimental/networking/basic datagram socket \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_datagram_socket&action=edit)  
[ basic_stream_socket](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_stream_socket&action=edit&redlink=1 "cpp/experimental/networking/basic stream socket \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_stream_socket&action=edit)  
[ basic_socket_acceptor](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket_acceptor&action=edit&redlink=1 "cpp/experimental/networking/basic socket acceptor \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_socket_acceptor&action=edit)  
  
#####  Socket streams   
  
[ basic_socket_streambuf](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket_streambuf&action=edit&redlink=1 "cpp/experimental/networking/basic socket streambuf \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_socket_streambuf&action=edit)  
[ basic_socket_iostream](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_socket_iostream&action=edit&redlink=1 "cpp/experimental/networking/basic socket iostream \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_socket_iostream&action=edit)  
  
#####  Connect operations   
  
[ connect](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/connect&action=edit&redlink=1 "cpp/experimental/networking/connect \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_connect&action=edit)  
[ async_connect](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/async_connect&action=edit&redlink=1 "cpp/experimental/networking/async connect \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_async_connect&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking&action=edit&section=7 "Edit section: Internet protocol")] Internet protocol

Defined in header `[<experimental/internet>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/internet&action=edit&redlink=1 "cpp/header/experimental/internet \(page does not exist\)")`  
---  
Defined in namespace `std::experimental::net::ip`  
  
#####  Resolver error codes   
  
[ resolver_errc](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/resolver_errc&action=edit&redlink=1 "cpp/experimental/networking/resolver errc \(page does not exist\)") |    
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_resolver_errc&action=edit)  
[ resolver_category](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/resolver_category&action=edit&redlink=1 "cpp/experimental/networking/resolver category \(page does not exist\)") |    
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_resolver_category&action=edit)  
  
#####  IP addresses   
  
[ address_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/address_v4&action=edit&redlink=1 "cpp/experimental/networking/address v4 \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_address_v4&action=edit)  
[ make_address_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_address_v4&action=edit&redlink=1 "cpp/experimental/networking/make address v4 \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_make_address_v4&action=edit)  
[ address_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/address_v6&action=edit&redlink=1 "cpp/experimental/networking/address v6 \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_address_v6&action=edit)  
[ make_address_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_address_v6&action=edit&redlink=1 "cpp/experimental/networking/make address v6 \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_make_address_v6&action=edit)  
[ address](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/address&action=edit&redlink=1 "cpp/experimental/networking/address \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_address&action=edit)  
[ bad_address_cast](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/bad_address_cast&action=edit&redlink=1 "cpp/experimental/networking/bad address cast \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_bad_address_cast&action=edit)  
[ make_address](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_address&action=edit&redlink=1 "cpp/experimental/networking/make address \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_make_address&action=edit)  
  
######  Address iteration  
  
[ basic_address_iterator](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_address_iterator&action=edit&redlink=1 "cpp/experimental/networking/basic address iterator \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_address_iterator&action=edit)  
[ basic_address_range](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_address_range&action=edit&redlink=1 "cpp/experimental/networking/basic address range \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_address_range&action=edit)  
  
#####  Networks   
  
[ network_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/network_v4&action=edit&redlink=1 "cpp/experimental/networking/network v4 \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_network_v4&action=edit)  
[ make_network_v4](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_network_v4&action=edit&redlink=1 "cpp/experimental/networking/make network v4 \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_make_network_v4&action=edit)  
[ network_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/network_v6&action=edit&redlink=1 "cpp/experimental/networking/network v6 \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_network_v6&action=edit)  
[ make_network_v6](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/make_network_v6&action=edit&redlink=1 "cpp/experimental/networking/make network v6 \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_make_network_v6&action=edit)  
  
#####  Endpoints   
  
[ basic_endpoint](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_endpoint&action=edit&redlink=1 "cpp/experimental/networking/basic endpoint \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_endpoint&action=edit)  
  
#####  Name resolution   
  
[ basic_resolver_entry](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_resolver_entry&action=edit&redlink=1 "cpp/experimental/networking/basic resolver entry \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_resolver_entry&action=edit)  
[ basic_resolver_results](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_resolver_results&action=edit&redlink=1 "cpp/experimental/networking/basic resolver results \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_resolver_results&action=edit)  
[ resolver_base](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/resolver_base&action=edit&redlink=1 "cpp/experimental/networking/resolver base \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_resolver_base&action=edit)  
[ basic_resolver](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/basic_resolver&action=edit&redlink=1 "cpp/experimental/networking/basic resolver \(page does not exist\)") |    
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_basic_resolver&action=edit)  
  
#####  Host name   
  
[ host_name](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/host_name&action=edit&redlink=1 "cpp/experimental/networking/host name \(page does not exist\)") |    
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_host_name&action=edit)  
  
#####  TCP and UDP sockets   
  
[ tcp](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/tcp&action=edit&redlink=1 "cpp/experimental/networking/tcp \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_tcp&action=edit)  
[ udp](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/udp&action=edit&redlink=1 "cpp/experimental/networking/udp \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_udp&action=edit)  
  
######  Socket options  
  
Defined in namespace `std::experimental::net::ip`  
[ v6_only](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/v6_only&action=edit&redlink=1 "cpp/experimental/networking/v6 only \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/dsc_v6_only&action=edit)  
Defined in namespace `std::experimental::net::ip::unicast`  
[ hops](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/unicast/hops&action=edit&redlink=1 "cpp/experimental/networking/unicast/hops \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/unicast/dsc_hops&action=edit)  
Defined in namespace `std::experimental::net::ip::multicast`  
[ join_group](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/join_group&action=edit&redlink=1 "cpp/experimental/networking/multicast/join group \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/multicast/dsc_join_group&action=edit)  
[ leave_group](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/leave_group&action=edit&redlink=1 "cpp/experimental/networking/multicast/leave group \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/multicast/dsc_leave_group&action=edit)  
[ outbound_interface](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/outbound_interface&action=edit&redlink=1 "cpp/experimental/networking/multicast/outbound interface \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/multicast/dsc_outbound_interface&action=edit)  
[ hops](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/hops&action=edit&redlink=1 "cpp/experimental/networking/multicast/hops \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/multicast/dsc_hops&action=edit)  
[ enable_loopback](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/networking/multicast/enable_loopback&action=edit&redlink=1 "cpp/experimental/networking/multicast/enable loopback \(page does not exist\)") |    
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/networking/multicast/dsc_enable_loopback&action=edit)
