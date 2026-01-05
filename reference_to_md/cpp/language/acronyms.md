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
  


Acronym  | Full name  | See also   
---|---|---  
AAA  | Almost Always [Auto](../keyword/auto.html "cpp/keyword/auto") | [GOTW #94](https://herbsutter.com/2013/06/13/gotw-94-special-edition-aaa-style-almost-always-auto)  
ABC  | [Abstract Base Class](abstract_class.html "cpp/language/abstract class") |   
ABI  | [Application Binary Interface](https://en.wikipedia.org/wiki/Application_Binary_Interface "enwiki:Application Binary Interface") | [Itanium C++ ABI](https://itanium-cxx-abi.github.io/cxx-abi/abi.html)  
ADL  | [Argument-Dependent Lookup](adl.html "cpp/language/adl") |   
ADT  | [Abstract Data Type](https://en.wikipedia.org/wiki/Abstract_Data_Type "enwiki:Abstract Data Type") |   
AFO  | [Algorithm Function Objects](../algorithm/ranges.html#Algorithm_function_objects "cpp/algorithm/ranges") | [CPO](acronyms.html#CPO)  
API  | [Application Programming Interface](https://en.wikipedia.org/wiki/Application_Programming_Interface "enwiki:Application Programming Interface") |   
BMI  | Binary Module Interface  | [Modules](modules.html "cpp/language/modules")  
CAS  | [Compare-And-Swap](https://en.wikipedia.org/wiki/Compare-And-Swap "enwiki:Compare-And-Swap"); [Copy And Swap](https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom) | [`compare_exchange`](../atomic/atomic/compare_exchange.html "cpp/atomic/atomic/compare exchange")  
CMI  | Compiled Module Interfaces  | [Modules](modules.html "cpp/language/modules")  
COW  | [Copy-On-Write](https://en.wikipedia.org/wiki/Copy-On-Write "enwiki:Copy-On-Write") |   
CPO  | [Customization Point Object](../ranges/cpo.html "cpp/ranges/cpo") | [[customization.point.object]](https://eel.is/c++draft/customization.point.object#1), [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"), [RangeAdaptorClosureObject](../named_req/RangeAdaptorClosureObject.html "cpp/named req/RangeAdaptorClosureObject"), [AFO](acronyms.html#AFO)  
CRTP  | [Curiously Recurring Template Pattern](crtp.html "cpp/language/crtp") | [std::enable_shared_from_this](../memory/enable_shared_from_this.html "cpp/memory/enable shared from this"), [std::ranges::view_interface](../ranges/view_interface.html "cpp/ranges/view interface")  
CTAD  | [Class Template Argument Deduction](ctad.html "cpp/language/class template argument deduction") |   
CTRE  | **C** ompile-**T** ime **R** egular **E** xpressions  | [CTRE lib](https://github.com/hanickadot/compile-time-regular-expressions)  
CWG  | The **C** ore **W** orking **G** roup  | [WG21](https://isocpp.org/std/the-committee)  
DCL  | [Double-Checked Locking](https://en.wikipedia.org/wiki/Double-checked_locking "enwiki:Double-checked locking") | [Concurrency support library](../atomic.html "cpp/thread")  
DIS  | Draft International Standard  | See also [FDIS](acronyms.html#FDIS)  
DR  | Defect Report  |   
EBO  
EBCO  | [Empty Base (Class) Optimization](ebo.html "cpp/language/ebo") | `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]`, [std::allocator](../memory/allocator.html "cpp/memory/allocator"), [std::default_delete](../memory/default_delete.html "cpp/memory/default delete")  
EDG  | [Edison Design Group](https://www.edg.com/company) |   
EH  | Exception Handling  |   
ELF  | [**E** xecutable and **L** inkable **F** ormat](https://en.wikipedia.org/wiki/Executable_and_linkable_Format "enwiki:Executable and linkable Format") |   
EWG  | The **E** volution **W** orking **G** roup  | [WG21](https://isocpp.org/std/the-committee)  
EWGI  | The **E** volution **W** orking **G** roup **I** ncubator  | [WG21](https://isocpp.org/std/the-committee)  
FAM  | [Flexible Array Member](https://en.wikipedia.org/wiki/Flexible_array_member "enwiki:Flexible array member") |   
FDIS  | Final Draft International Standard  | See also [DIS](acronyms.html#DIS)  
GCC  | [**G** NU](https://en.wikipedia.org/wiki/GNU "enwiki:GNU") **C** ompiler **C** ollection  |   
GMF  | Global Module Fragment  | [Modules](modules.html "cpp/language/modules")  
HALO  | **H** eap **A** llocation e**L** ision **O** ptimization  | [Coroutines](coroutines.html "cpp/language/coroutines"), [P0981](https://wg21.link/p0981)  
ICE  | [Internal Compiler Error](https://en.wikipedia.org/wiki/Compilation_error#Internal_Compiler_Errors "enwiki:Compilation error"); Integer Constant Expression  |   
IFNDR  | [Ill-Formed, No Diagnostic Required](../ndr.html "cpp/language/ndr") |   
IIILE  | Immediately Invoked Initializing [Lambda Expression](lambda.html "cpp/language/lambda") |   
IPO  | [Inter-Procedural Optimization](https://en.wikipedia.org/wiki/Interprocedural_optimization "enwiki:Interprocedural optimization") |   
IWYU  | **I** nclude **W** hat **Y** ou **U** se  | [libclang-based tool](https://include-what-you-use.org)  
LEWG  | The **L** ibrary **E** volution **W** orking **G** roup  | [WG21](https://isocpp.org/std/the-committee)  
LEWGI  | The **L** ibrary **E** volution **W** orking **G** roup **I** ncubator  | [WG21](https://isocpp.org/std/the-committee)  
LTO  | [Link-Time Optimization](https://en.wikipedia.org/wiki/Interprocedural_optimization#WPO_and_LTO "enwiki:Interprocedural optimization") |   
LWG  | The **L** ibrary **W** orking **G** roup  | [WG21](https://isocpp.org/std/the-committee)  
MDT  | Most Derived Type  |   
MPSC  | Multi-Producer Single-Consumer (e.g., task queue)  | std::executor  
MSVC  | **M** icro**S** oft **V** isual **C** ++  |   
NAD  | Not A Defect  | See also [DR](acronyms.html#DR)  
NDR  | [No Diagnostic Required](../ndr.html "cpp/language/ndr") |   
NRVO  | [Named Return Value Optimization](copy_elision.html "cpp/language/copy elision") |   
NSDMI  | [Non-Static Data Member Initialization](data_members.html "cpp/language/data members") |   
NTBS  | [Null-Terminated Byte Strings](../string/byte.html "cpp/string/byte") |   
NTTP  | [Non-Type Template Parameter](template_parameters.html#Constant_template_parameter "cpp/language/template parameters") (a.k.a. [Constant Template Parameter](template_parameters.html#Notes "cpp/language/template parameters") (since C++26))  |   
NUA  | No Unique Address  | `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]`  
NVI  | **N** on-**V** irtual **I** nterface  |   
ODR  | [One Definition Rule](definition.html "cpp/language/definition") |   
OOP  | [Object-Oriented Programming](https://en.wikipedia.org/wiki/Object-Oriented_Programming "enwiki:Object-Oriented Programming") |   
PCH  | **P** re-**C** ompiled **H** eader  | [gcc doc on PCH](https://gcc.gnu.org/onlinedocs/gcc/Precompiled-Headers.html)  
PDO  | Profile-Driven Optimization  | See also [PGO](acronyms.html#PGO)  
PGO  | [**P** rofile-**G** uided **O** ptimization](https://en.wikipedia.org/wiki/Profile-guided_Optimization "enwiki:Profile-guided Optimization") | See also [PDO](acronyms.html#PDO)  
PID  | Process IDentifier  | [`std::thread::get_id()`](../thread/thread/get_id.html "cpp/thread/thread/get id"), [`std::jthread::get_id()`](../thread/jthread/get_id.html "cpp/thread/jthread/get id")  
PIMPL  | [Pointer to IMPLementation](pimpl.html "cpp/language/pimpl") |   
PMF  | Private Module Fragment  | [Modules](modules.html "cpp/language/modules")  
PMR  | **P** olymorphic **M** emory **R** esources  | [`<memory_resource>`](../header/memory_resource.html "cpp/header/memory resource")  
POCCA  | [Propagate on Container Copy Assignment](../memory/allocator_traits.html "cpp/memory/allocator traits") |   
POCMA  | [Propagate on Container Move Assignment](../memory/allocator_traits.html "cpp/memory/allocator traits") |   
POCS  | [Propagate on Container Swap](../memory/allocator_traits.html "cpp/memory/allocator traits") |   
POD  | [Plain Old Data](../named_req/PODType.html "cpp/named req/PODType") ([PODType](../named_req/PODType.html "cpp/named req/PODType"))  | [ScalarType](../named_req/ScalarType.html "cpp/named req/ScalarType"), [TrivialType](../named_req/TrivialType.html "cpp/named req/TrivialType"), [StandardLayoutType](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType")  
QoI  | **Q** uality **o** f **I** mplementation  |   
RAII  | [Resource Acquisition Is Initialization](raii.html "cpp/language/raii") |   
RACO  | [Range Adaptor Closure Object](../ranges.html#Range_adaptor_closure_objects "cpp/ranges") | [RangeAdaptorClosureObject](../named_req/RangeAdaptorClosureObject.html "cpp/named req/RangeAdaptorClosureObject")  
RAO  | [Range Adaptor Object](../ranges.html#Range_adaptor_objects "cpp/ranges") | [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject")  
RCU  | [Read-Copy-Update](https://en.wikipedia.org/wiki/Read-copy-update "enwiki:Read-copy-update") | [`<rcu>`](../header/rcu.html "cpp/header/rcu")  
RTTI  | [RunTime Type Identification](types.html "cpp/language/types") | [std::type_info](../types/type_info.html "cpp/types/type info")  
RVO  | [Return Value Optimization](copy_elision.html "cpp/language/copy elision") |   
SBO  | Small Buffer Optimization  | See also [SOO](acronyms.html#SOO), [SSO](acronyms.html#SSO)  
SBRM  | **S** cope-**B** ound **R** esource **M** anagement, see [RAII](acronyms.html#RAII) |   
SCARY  | **S** eemingly erroneous (appearing **C** onstrained by conflicting generic parameters), but **A** ctually work with the **R** ight implementation (unconstrained b**Y** the conflict due to minimized dependencies).  | [stroustrup.com/SCARY](https://www.stroustrup.com/SCARY.pdf)  
SEH  | **S** tructured **E** xception **H** andling  | [SEH](https://en.wikipedia.org/wiki/Microsoft-specific_exception_handling_mechanisms#SEH "enwiki:Microsoft-specific exception handling mechanisms")  
SFINAE  | [Substitution Failure Is Not An Error](sfinae.html "cpp/language/sfinae") | [std::enable_if](../types/enable_if.html "cpp/types/enable if"), [std::void_t](../types/void_t.html "cpp/types/void t")  
SIMD  | [Single Instruction Multiple Data](https://en.wikipedia.org/wiki/SIMD "enwiki:SIMD") | [Data-parallel types (SIMD)](../numeric/simd.html "cpp/numeric/simd")  
SIOF  | [**S** tatic **I** nitialization **O** rder **F** iasco](https://isocpp.org/wiki/faq/ctors#static-init-order) |   
SMF  | Special Member Function  |   
SOCCC  | [Select On Container Copy Construction](../memory/allocator_traits/select_on_container_copy_construction.html "cpp/memory/allocator traits/select on container copy construction") |   
SOO  | Small Object Optimization  | std::move_only_function, [std::function](../utility/functional/function.html "cpp/utility/functional/function"), [std::any](../utility/any.html "cpp/utility/any"). See also [SBO](acronyms.html#SBO), [SSO](acronyms.html#SSO)  
SSO  | Small String Optimization  | [std::basic_string](../string/basic_string.html "cpp/string/basic string"). See also [SBO](acronyms.html#SBO), [SOO](acronyms.html#SOO)  
STL  | The **S** tandard **T** emplate **L** ibrary  |   
TCO  | **T** ail **C** all **O** ptimization  |   
TLS  | Thread-Local Storage  | [`thread_local`](../keyword/thread_local.html "cpp/keyword/thread local")  
TMP  | [**T** emplate **M** eta **P** rogramming](template_metaprogramming.html "cpp/language/template metaprogramming") | [`<type_traits>`](../header/type_traits.html "cpp/header/type traits")  
TU  | [Translation Unit](translation_phases.html#Phase_8 "cpp/language/translation phases") | [Modules](modules.html "cpp/language/modules"), [TU-local](tu_local.html "cpp/language/tu local")  
UB  | [Undefined Behavior](ub.html "cpp/language/ub") |   
UDC  | [**U** ser-**D** efined **C** onversion](cast_operator.html "cpp/language/cast operator") operator  |   
UDL  | [User-Defined Literals](user_literal.html "cpp/language/user literal") |   
UFCS  | Universal Function Call Syntax  | [“What is UFCS anyway?”](https://brevzin.github.io/c++/2019/04/13/ufcs-history)  
VLA  | **V** ariable-**L** ength **A** rray  | [SO on VLA](https://stackoverflow.com/questions/1887097/why-arent-variable-length-arrays-part-of-the-c-standard)  
WPO  | [Whole-Program Optimization](https://en.wikipedia.org/wiki/Interprocedural_optimization#WPO_and_LTO "enwiki:Interprocedural optimization") |   
  
### External links

[“A C++ acronym glossary” by Arthur O’Dwyer, 2019/08](https://quuxplusone.github.io/blog/2019/08/02/the-tough-guide-to-cpp-acronyms/)  
---
