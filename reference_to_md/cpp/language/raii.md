

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](throw.html "cpp/language/throw")  
---  
[`try` block](try.html "cpp/language/try")  
  
|   
  
---  
[`catch` handler](catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  

  
  
  

---  
  

---  
  


_Resource Acquisition Is Initialization_ or RAII, is a C++ programming technique[[1]](raii.html#cite_note-1)[[2]](raii.html#cite_note-2) which binds the life cycle of a resource that must be acquired before use (allocated heap memory, thread of execution, open socket, open file, locked mutex, disk space, database connection—anything that exists in limited supply) to the [lifetime](lifetime.html "cpp/language/lifetime") of an object. 

RAII guarantees that the resource is available to any function that may access the object (resource availability is a [class invariant](https://en.wikipedia.org/wiki/Class_invariant "enwiki:Class invariant"), eliminating redundant runtime tests). It also guarantees that all resources are released when the lifetime of their controlling object ends, in reverse order of acquisition. Likewise, if resource acquisition fails (the constructor exits with an exception), all resources acquired by every fully-constructed member and base subobject are released in reverse order of initialization. This leverages the core language features ([object lifetime](lifetime.html "cpp/language/lifetime"), [scope exit](statements.html "cpp/language/statements"), [order of initialization](initializer_list.html#Initialization_order "cpp/language/initializer list") and [stack unwinding](throw.html#Stack_unwinding "cpp/language/throw")) to eliminate resource leaks and guarantee exception safety. Another name for this technique is _Scope-Bound Resource Management_ (SBRM), after the basic use case where the lifetime of an RAII object ends due to scope exit. 

RAII can be summarized as follows: 

  * encapsulate each resource into a class, where 



    

  * the constructor acquires the resource and establishes all class invariants or throws an exception if that cannot be done, 
  * the destructor releases the resource and never throws exceptions; 



  * always use the resource via an instance of a RAII-class that either 



    

  * has automatic storage duration or temporary lifetime itself, or 
  * has lifetime that is bounded by the lifetime of an automatic or temporary object. 


Move semantics enable the transfer of resources and ownership between objects, inside and outside containers, and across threads, while ensuring resource safety.  | (since C++11)  
---|---  
  
Classes with `open()`/`close()`, `lock()`/`unlock()`, or `init()`/`copyFrom()`/`destroy()` member functions are typical examples of non-RAII classes: 
    
    
    [std::mutex](../thread/mutex.html) m;
     
    void bad() 
    {
        m.lock();             // acquire the mutex
        f();                  // if f() throws an exception, the mutex is never released
        if (!everything_ok())
            return;           // early return, the mutex is never released
        m.unlock();           // if bad() reaches this statement, the mutex is released
    }
     
    void good()
    {
        [std::lock_guard](../thread/lock_guard.html)<[std::mutex](../thread/mutex.html)> lk(m); // RAII class: mutex acquisition is initialization
        f();                               // if f() throws an exception, the mutex is released
        if (!everything_ok())
            return;                        // early return, the mutex is released
    }                                      // if good() returns normally, the mutex is released

### The standard library

The C++ library classes that manage their own resources follow RAII: [std::string](../string/basic_string.html "cpp/string/basic string"), [std::vector](../container/vector.html "cpp/container/vector"), [std::jthread](../thread/jthread.html "cpp/thread/jthread")(since C++20), and many others acquire their resources in constructors (which throw exceptions on errors), release them in their destructors (which never throw), and don't require explicit cleanup. 

In addition, the standard library offers several RAII wrappers to manage user-provided resources: 

  * [std::unique_ptr](../memory/unique_ptr.html "cpp/memory/unique ptr") and [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") through [std::make_unique](../memory/unique_ptr/make_unique.html "cpp/memory/unique ptr/make unique") and [std::make_shared](../memory/shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared") to manage dynamically-allocated memory; 
  * [std::lock_guard](../thread/lock_guard.html "cpp/thread/lock guard"), [std::unique_lock](../thread/unique_lock.html "cpp/thread/unique lock"), [std::shared_lock](../thread/shared_lock.html "cpp/thread/shared lock") to manage mutexes. 

| (since C++11)  
---|---  
  
### Notes

RAII does not apply to the management of the resources that are not acquired before use: CPU time, core availability, cache capacity, entropy pool capacity, network bandwidth, electric power consumption, stack memory. For such resources, a C++ class constructor cannot guarantee resource availability for the duration of object lifetime, and other means of resource management have to be used. 

### External links

  1. [↑](raii.html#cite_ref-1) [RAII in Stroustrup's C++ FAQ](https://www.stroustrup.com/bs_faq2.html#finally)
  2. [↑](raii.html#cite_ref-2) [C++ Core Guidelines E.6 "Use RAII to prevent leaks"](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#e6-use-raii-to-prevent-leaks)


