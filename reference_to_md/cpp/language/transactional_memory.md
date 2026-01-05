[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[C++ language](../language.html "cpp/language")

General topics  
---  
| [Preprocessor](../preprocessor.html "cpp/preprocessor")  
---  
[Comments](../comments.html "cpp/comment")  
  
| [Keywords](../keywords.html "cpp/keyword")  
---  
[Escape sequences](escape.html "cpp/language/escape")  
  
[Flow control](statements.html "cpp/language/statements")  
Conditional execution statements  
| [`if`](if.html "cpp/language/if")  
---  
  
| [`switch`](switch.html "cpp/language/switch")  
---  
  
Iteration statements (loops)  
| [`for`](for.html "cpp/language/for")  
---  
[range-`for`](range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](while.html "cpp/language/while")  
---  
[`do-while`](do.html "cpp/language/do")  
  
Jump statements  
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
---  
  
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
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](storage_duration.html "cpp/language/storage duration")  
[Initialization](initialization.html "cpp/language/initialization")  
| [Default-initialization](default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](value_initialization.html "cpp/language/value initialization")  
[Zero-initialization](zero_initialization.html "cpp/language/zero initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](operator_alternative.html "cpp/language/operator alternative")  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- [`nullptr`](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
Types  
[`typedef` declaration](typedef.html "cpp/language/typedef")  
[Type alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
Casts  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`const_cast`](const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](new.html "cpp/language/new")  
---  
  
| [`delete` expression](delete.html "cpp/language/delete")  
---  
  
[Classes](classes.html "cpp/language/classes")  
| [Class declaration](class.html "cpp/language/class")  
---  
[Constructors](initializer_list.html "cpp/language/constructor")  
[`this` pointer](this.html "cpp/language/this")  
  
| [Access specifiers](access.html "cpp/language/access")  
---  
[`friend` specifier](friend.html "cpp/language/friend")  
  
  
  
Class-specific function properties  
| [Virtual function](virtual.html "cpp/language/virtual")  
---  
[`override` specifier](override.html "cpp/language/override") (C++11)` `  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  
| [`explicit`](explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
---  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
  
| [Copy assignment](as_operator.html "cpp/language/as operator")  
---  
[Move assignment](move_operator.html "cpp/language/move operator") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
  
[Templates](templates.html "cpp/language/templates")  
| [Class template](class_template.html "cpp/language/class template")  
---  
[Function template](function_template.html "cpp/language/function template")  
  
| [Template specialization](template_specialization.html "cpp/language/template specialization")  
---  
[Parameter packs](parameter_pack.html "cpp/language/pack") (C++11)  
  
Miscellaneous  
| [Inline assembly](asm.html "cpp/language/asm")  
---  
  
| [History of C++](history.html "cpp/language/history")  
---  
  


[ Statements](statements.html "cpp/language/statements")

[Labels](statements.html#Labeled_statements "cpp/language/statements")  
---  
[label : statement](statements.html#Labeled_statements "cpp/language/statements")  
[Expression statements](statements.html#Expression_statements "cpp/language/statements")  
[expression ; ](statements.html#Expression_statements "cpp/language/statements")  
[Compound statements](statements.html#Compound_statements "cpp/language/statements")  
[`{` statement... `}`](statements.html#Compound_statements "cpp/language/statements")  
[Selection statements](statements.html#Selection_statements "cpp/language/statements")  
[`if`](if.html "cpp/language/if")  
[`switch`](switch.html "cpp/language/switch")  
[Iteration statements](statements.html#Iteration_statements "cpp/language/statements")  
[`while`](while.html "cpp/language/while")  
[`do while`](do.html "cpp/language/do")  
[`for`](for.html "cpp/language/for")  
[range for](range-for.html "cpp/language/range-for") (C++11)  
[Jump statements](statements.html#Jump_statements "cpp/language/statements")  
[`break`](break.html "cpp/language/break")  
[`continue`](continue.html "cpp/language/continue")  
[`return`](return.html "cpp/language/return")  
[`goto`](goto.html "cpp/language/goto")  
[Assertions](statements.html#Assertion_statements "cpp/language/statements")  
[`contract_assert`](contract_assert.html "cpp/language/contract assert") (C++26)  
[Declaration statements](statements.html#Declaration_statements "cpp/language/statements")  
[declaration ; ](declarations.html "cpp/language/declarations")  
[Try blocks](statements.html#Try_blocks "cpp/language/statements")  
[try block](try.html "cpp/language/try")  
**Transactional memory**  
[`synchronized`](transactional_memory.html#Synchronized_blocks "cpp/language/transactional memory"), [`atomic_commit`](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory"), etc (TM TS)  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Work in progress** This page is under construction   
---|---  
![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Experimental Feature** The functionality described on this page is part of the Transactional Memory Technical Specification ISO/IEC TS 19841:2015 (TM TS)  
---|---  
  
Transactional memory is a concurrency synchronization mechanism that combines groups of statements in transactions, that are 

  * atomic (either all statements occur, or nothing occurs) 
  * isolated (statements in a transaction may not observe half-written writes made by another transaction, even if they execute in parallel) 



Typical implementations use hardware transactional memory where supported and to the limits that it is available (e.g. until the changeset is saturated) and fall back to software transactional memory, usually implemented with optimistic concurrency: if another transaction updated some of the variables used by a transaction, it is silently retried. For that reason, retriable transactions ("atomic blocks") can only call transaction-safe functions. 

Note that accessing a variable in a transaction and out of a transaction without other external synchronization is a data race. 

If feature testing is supported, the features described here are indicated by the macro constant __cpp_transactional_memory with a value equal or greater 201505. 

## Contents

  * [1 Synchronized blocks](transactional_memory.html#Synchronized_blocks)
  * [2 Atomic blocks](transactional_memory.html#Atomic_blocks)
  * [3 Transaction-safe functions](transactional_memory.html#Transaction-safe_functions)
    * [3.1 Transaction-safe virtual functions](transactional_memory.html#Transaction-safe_virtual_functions)
  * [4 Standard library](transactional_memory.html#Standard_library)
  * [5 Attributes](transactional_memory.html#Attributes)
  * [6 Notes](transactional_memory.html#Notes)
  * [7 Keywords](transactional_memory.html#Keywords)
  * [8 Compiler support](transactional_memory.html#Compiler_support)

  
---  
  
### Synchronized blocks

`**synchronized**` compound-statement

Executes the [compound statement](statements.html#Compound_statements "cpp/language/statements") as if under a global lock: all outermost synchronized blocks in the program execute in a single total order. The end of each synchronized block synchronizes with the beginning of the next synchronized block in that order. Synchronized blocks that are nested within other synchronized blocks have no special semantics. 

Synchronized blocks are not transactions (unlike the atomic blocks below) and may call transaction-unsafe functions. 

Run this code
    
    
    #include <iostream>
    #include <thread>
    #include <vector>
     
    int f()
    {
        static int i = 0;
        synchronized { // begin synchronized block
            [std::cout](../io/cout.html) << i << " -> ";
            ++i;       // each call to f() obtains a unique value of i
            [std::cout](../io/cout.html) << i << '\n';
            return i;  // end synchronized block
        }
    }
     
    int main()
    {
        [std::vector](../container/vector.html)<[std::thread](../thread/thread.html)> v(10);
        for (auto& t : v)
            t = [std::thread](../thread/thread.html)([] { for (int n = 0; n < 10; ++n) f(); });
        for (auto& t : v)
            t.join();
    }

Output: 
    
    
    0 -> 1
    1 -> 2
    2 -> 3
    ...
    99 -> 100

Leaving a synchronized block by any means (reaching the end, executing goto, break, continue, or return, or throwing an exception) exits the block and synchronizes-with the next block in the single total order if the exited block was an outer block. The behavior is undefined if [std::longjmp](../utility/program/longjmp.html "cpp/utility/program/longjmp") is used to exit a synchronized block. 

Entering a synchronized block by goto or switch is not allowed. 

Although synchronized blocks execute as-if under a global lock, the implementations are expected to examine the code within each block and use optimistic concurrency (backed up by hardware transactional memory where available) for transaction-safe code and minimal locking for non-transaction safe code. When a synchronized block makes a call to a non-inlined function, the compiler may have to drop out of speculative execution and hold a lock around the entire call unless the function is declared `transaction_safe` (see below) or the attribute `[[optimize_for_synchronized]]` (see below) is used. 

### Atomic blocks

| This section is incomplete   
---|---  
  
`**atomic_noexcept**` compound-statement

`**atomic_cancel**` compound-statement

`**atomic_commit**` compound-statement

1) If an exception is thrown, [std::abort](../utility/program/abort.html) is called.

2) If an exception is thrown, [std::abort](../utility/program/abort.html) is called, unless the exception is one of the exceptions used for transaction cancellation (see below) in which case the transaction is _cancelled_ : the values of all memory locations in the program that were modified by side effects of the operations of the atomic block are restored to the values they had at the time the start of the atomic block was executed, and the exception continues stack unwinding as usual.

3) If an exception is thrown, the transaction is committed normally.

The exceptions used for transaction cancellation in `atomic_cancel` blocks are [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc"), [std::bad_array_new_length](../memory/new/bad_array_new_length.html "cpp/memory/new/bad array new length"), [std::bad_cast](../types/bad_cast.html "cpp/types/bad cast"), [std::bad_typeid](../types/bad_typeid.html "cpp/types/bad typeid"), [std::bad_exception](../error/bad_exception.html "cpp/error/bad exception"), [std::exception](../error/exception.html "cpp/error/exception") and all standard library exceptions derived from it, and the special exception type [`std::tx_exception<T>`](../error/tx_exception.html "cpp/error/tx exception"). 

The compound-statement in an atomic block is not allowed to execute any expression or statement or call any function that isn't `transaction_safe` (this is a compile time error). 
    
    
    // each call to f() retrieves a unique value of i, even when done in parallel
    int f()
    {
        static int i = 0;
        atomic_noexcept { // begin transaction
    //  printf("before %d\n", i); // error: cannot call a non transaction-safe function
            ++i;
            return i; // commit transaction
        }
    }

Leaving an atomic block by any means other than exception (reaching the end, goto, break, continue, return) commits the transaction. The behavior is undefined if [std::longjmp](../utility/program/longjmp.html "cpp/utility/program/longjmp") is used to exit an atomic block. 

### Transaction-safe functions

| This section is incomplete   
---|---  
  
A function can be explicitly declared to be transaction-safe by using the keyword transaction_safe in its declaration. 

| This section is incomplete   
---|---  
  
In a [lambda](lambda.html "cpp/language/lambda") declaration, it appears either immediately after the capture list, or immediately after the (keyword `mutable` (if one is used). 

| This section is incomplete   
---|---  
      
    
    extern volatile int * p = 0;
    struct S
    {
        virtual ~S();
    };
    int f() transaction_safe
    {
        int x = 0;  // ok: not volatile
        p = &x;     // ok: the pointer is not volatile
        int i = *p; // error: read through volatile glvalue
        S s;        // error: invocation of unsafe destructor
    }
    
    
    int f(int x) { // implicitly transaction-safe
        if (x <= 0)
            return 0;
        return x + f(x - 1);
    }

If a function that is not transaction-safe is called through a reference or pointer to a transaction-safe function, the behavior is undefined. 

  
Pointers to transaction-safe functions and pointers to transaction-safe member functions are implicitly convertible to pointers to functions and pointers to member functions respectively. It is unspecified if the resulting pointer compares equal to the original. 

#### Transaction-safe virtual functions

| This section is incomplete   
---|---  
  
If the final overrider of a `transaction_safe_dynamic` function is not declared `transaction_safe`, calling it in an atomic block is undefined behavior. 

### Standard library

Besides introducing the new exception template [`std::tx_exception`](../error/tx_exception.html "cpp/error/tx exception"), the transactional memory technical specification makes the following changes to the standard library: 

  * makes the following functions explicitly `transaction_safe`: 



    

  * [std::forward](../utility/forward.html "cpp/utility/forward"), std::move, [std::move_if_noexcept](../utility/move_if_noexcept.html "cpp/utility/move if noexcept"), [std::align](../memory/align.html "cpp/memory/align"), [std::abort](../utility/program/abort.html "cpp/utility/program/abort"), global default [operator new](../memory/new/operator_new.html "cpp/memory/new/operator new"), global default [operator delete](../memory/new/operator_delete.html "cpp/memory/new/operator delete"), [std::allocator::construct](../memory/allocator/construct.html "cpp/memory/allocator/construct") if the invoked constructor is transaction-safe, [std::allocator::destroy](../memory/allocator/destroy.html "cpp/memory/allocator/destroy") if the invoked destructor is transaction-safe, [std::get_temporary_buffer](../memory/get_temporary_buffer.html "cpp/memory/get temporary buffer"), [std::return_temporary_buffer](../memory/return_temporary_buffer.html "cpp/memory/return temporary buffer"), [std::addressof](../memory/addressof.html "cpp/memory/addressof"), [std::pointer_traits::pointer_to](../memory/pointer_traits/pointer_to.html "cpp/memory/pointer traits/pointer to"), each non-virtual member function of all exception types that support transaction cancellation (see `atomic_cancel` above) | This section is incomplete  
Reason: there's more   
---|---  



  * makes the following functions explicitly `transaction_safe_dynamic`



    

  * each virtual member function of all exception types that support transaction cancellation (see `atomic_cancel` above) 



  * requires that all operations that are transaction-safe on an [Allocator](../named_req/Allocator.html "cpp/named req/Allocator") X are transaction-safe on `X::rebind<>::other`



### Attributes

The attribute `[[[optimize_for_synchronized](attributes/optimize_for_synchronized.html "cpp/language/attributes/optimize for synchronized")]]` may be applied to a declarator in a function declaration and must appear on the first declaration of the function. 

If a function is declared `[[optimize_for_synchronized]]` in one translation unit and the same function is declared without `[[optimize_for_synchronized]]` in another translation unit, the program is ill-formed; no diagnostic required. 

It indicates that a the function definition should be optimized for invocation from a synchronized statement. In particular, it avoids serializing synchronized blocks that make a call to a function that is transaction-safe for the majority of calls, but not for all calls (e.g. hash table insertion that may have to rehash, allocator that may have to request a new block, a simple function that may rarely log). 
    
    
    [std::atomic](../atomic/atomic.html)<bool> rehash{false};
     
    // maintenance thread runs this loop
    void maintenance_thread(void*)
    {
        while (!shutdown)
        {
            synchronized
            {
                if (rehash)
                {
                    hash.rehash();
                    rehash = false;
                }
            }
        }
    }
     
    // worker threads execute hundreds of thousands of calls to this function 
    // every second. Calls to insert_key() from synchronized blocks in other
    // translation units will cause those blocks to serialize, unless insert_key()
    // is marked [[optimize_for_synchronized]]
    [[optimize_for_synchronized]] void insert_key(char* key, char* value)
    {
        bool concern = hash.insert(key, value);
        if (concern)
            rehash = true;
    }

GCC assembly without the attribute: the entire function is serialized 
    
    
    insert_key(char*, char*):
    	subq	$8, %rsp
    	movq	%rsi, %rdx
    	movq	%rdi, %rsi
    	movl	$hash, %edi
    	call	Hash::insert(char*, char*)
    	testb	%al, %al
    	je	.L20
    	movb	$1, rehash(%rip)
    	mfence
    .L20:
    	addq	$8, %rsp
    	ret
    

GCC assembly with the attribute: 
    
    
    transaction clone for insert_key(char*, char*):
    	subq	$8, %rsp
    	movq	%rsi, %rdx
    	movq	%rdi, %rsi
    	movl	$hash, %edi
    	call	transaction clone for Hash::insert(char*, char*)
    	testb	%al, %al
    	je	.L27
    	xorl	%edi, %edi
    	call	_ITM_changeTransactionMode # Note: this is the serialization point
    	movb	$1, rehash(%rip)
    	mfence
    .L27:
    	addq	$8, %rsp
    	ret
    

| This section is incomplete  
Reason: check assembly with trunk, also show caller-side changes   
---|---  
  
### Notes

| This section is incomplete  
Reason: experience notes from Wyatt paper/talk   
---|---  
  
### Keywords

[`atomic_cancel`](../keyword/atomic_cancel.html "cpp/keyword/atomic cancel"), [`atomic_commit`](../keyword/atomic_commit.html "cpp/keyword/atomic commit"), [`atomic_noexcept`](../keyword/atomic_noexcept.html "cpp/keyword/atomic noexcept"), [`synchronized`](../keyword/synchronized.html "cpp/keyword/synchronized"), [`transaction_safe`](../keyword/transaction_safe.html "cpp/keyword/transaction safe"), [`transaction_safe_dynamic`](../keyword/transaction_safe_dynamic.html "cpp/keyword/transaction safe dynamic")

### Compiler support

This technical specification is supported by GCC as of version 6.1 (requires -fgnu-tm to enable). An older variant of this specification was [supported in GCC](http://www-users.cs.umn.edu/~boutcher/stm/) as of 4.7. 
