* storage class specifiers 
  * == part of the decl-specifier-seq of a name's [declaration syntax](declarations.html "cpp/language/declarations"). Together with the [scope](scope.html "cpp/language/scope") of the name, they control two independent properties of the name: its _storage duration_ and its _linkage_. 

## Contents

  * [1 Storage duration](storage_duration.html#Storage_duration)
    * [1.1 Specifiers](storage_duration.html#Specifiers)
    * [1.2 Static storage duration](storage_duration.html#Static_storage_duration)
    * [1.3 Thread storage duration](storage_duration.html#Thread_storage_duration)
    * [1.4 Automatic storage duration](storage_duration.html#Automatic_storage_duration)
    * [1.5 Dynamic storage duration](storage_duration.html#Dynamic_storage_duration)
  * [2 Linkage](storage_duration.html#Linkage)
    * [2.1 No linkage](storage_duration.html#No_linkage)
    * [2.2 Internal linkage](storage_duration.html#Internal_linkage)
    * [2.3 External linkage](storage_duration.html#External_linkage)
    * [2.4 Module linkage](storage_duration.html#Module_linkage)
  * [3 Static block variables](storage_duration.html#Static_block_variables)
  * [4 Translation-unit-local entities](storage_duration.html#Translation-unit-local_entities)
  * [5 Notes](storage_duration.html#Notes)
  * [6 Keywords](storage_duration.html#Keywords)
  * [7 Example](storage_duration.html#Example)
  * [8 Defect reports](storage_duration.html#Defect_reports)
  * [9 References](storage_duration.html#References)
  * [10 See also](storage_duration.html#See_also)

  
### Storage duration

The _storage duration_ is the property of an [object](objects.html "cpp/language/object") that defines the minimum potential lifetime of the storage containing the object. The storage duration is determined by the construct used to create the object and is one of the following: 

  * static storage duration 



  * thread storage duration (also known as thread-local storage duration) 

| (since C++11)  
---|---  
  
  * automatic storage duration 
  * dynamic storage duration 



Static, thread,(since C++11) and automatic storage durations are associated with objects introduced by [declarations](declarations.html "cpp/language/declarations") and with [temporary objects](lifetime.html#Temporary_object_lifetime "cpp/language/lifetime"). The dynamic storage duration is associated with objects created by a [new expression](new.html "cpp/language/new") or with [implicitly created objects](objects.html#Object_creation "cpp/language/object"). 

The storage duration categories apply to references as well. 

The storage duration of [subobjects](objects.html#Subobjects "cpp/language/object") and reference members is that of their complete object. 

#### Specifiers

The following keywords are _storage class specifiers_ ﻿: 

  * auto

| (until C++11)  
---|---  
  
  * register

| (until C++17)  
  
  * static



  * thread_local

| (since C++11)  
---|---  
  
  * extern
  * mutable



In a decl-specifier-seq, there can be at most one storage class specifier, except that thread_local may appear with static or extern(since C++11). 

mutable has no effect on storage duration. For its usage, see [const/volatile](cv.html "cpp/language/cv"). 

Other storage class specifiers can appear in the decl-specifier-seq ﻿s of the following declarations: 

Specifier  | Can appear in the decl-specifier-seq ﻿s of   
---|---  
Variable declarations  | Function declarations  | Structured binding declarations  
(since C++17)  
Non-member  | Member  | Non-member  | Member   
Non-parameter  | Function parameter  | Non-static  |  Static  | Non-static  |  Static   
auto | Block scope only | Yes |  No |  No  |  No |  No |  No |  N/A  
register | Block scope only | Yes |  No |  No  |  No |  No |  No |  N/A  
static | Yes |  No | Declares static  | Namespace scope only | Declares static | Yes   
thread_local | Yes |  No |  No | Yes  |  No |  No |  No | Yes   
extern | Yes |  No |  No |  No  | Yes |  No |  No |  No   
  
[Anonymous unions](union.html#Anonymous_unions "cpp/language/union") can also be declared with static. 

register is a hint that the variable so declared will be heavily used, so that its value can be stored in a CPU register. The hint can be ignored, and in most implementations it will be ignored if the address of the variable is taken. This use is deprecated.  | (until C++17)  
---|---  
  
#### Static storage duration

A variable satisfying all following conditions has _static storage duration_ ﻿: 

  * It belongs to a [namespace scope](scope.html#Namespace_scope "cpp/language/scope") or are first declared with static or extern. 



  * It does not have thread storage duration. 

| (since C++11)  
---|---  
  
The storage for these entities lasts for the duration of the program. 

####  Thread storage duration

All variables declared with thread_local have _thread storage duration_. The storage for these entities lasts for the duration of the thread in which they are created. There is a distinct object or reference per thread, and use of the declared name refers to the entity associated with the current thread.  | (since C++11)  
---|---  
  
#### Automatic storage duration

The following variables have _automatic storage duration_ ﻿: 

  * Variables that belong to a [block scope](scope.html#Block_scope "cpp/language/scope") and are not explicitly declared static, thread_local,(since C++11) or extern. The storage for such variables lasts until the block in which they are created exits. 
  * Variables that belong to a parameter scope (i.e. function parameters). The storage for a function parameter lasts until immediately after its [destruction](operator_other.html#Built-in_function_call_operator "cpp/language/operator other"). 



#### Dynamic storage duration

Objects created by the following methods during program execution have _dynamic storage duration_ ﻿: 

  * [new expressions](new.html "cpp/language/new"). The storage for such objects is allocated by [allocation functions](../memory/new/operator_new.html "cpp/memory/new/operator new") and deallocated by [deallocation functions](../memory/new/operator_delete.html "cpp/memory/new/operator delete"). 
  * [Implicitly creation](objects.html#Object_creation "cpp/language/object") by other means. The storage for such objects overlaps with some existing storage. 
  * [Exception objects](throw.html#Exception_object "cpp/language/throw"). The storage for such objects is allocated and deallocated in an unspecified way. 



### Linkage

A name can have _external linkage_ ﻿, _module linkage_(since C++20), _internal linkage_ , or _no linkage_ : 

  * An entity whose name has external linkage can be [redeclared](conflicting_declarations.html#Multiple_declarations_of_the_same_entity "cpp/language/conflicting declarations") in another [translation unit](translation_phases.html "cpp/language/translation phases"), and the redeclaration can be [attached to a different module](modules.html#Module_ownership "cpp/language/modules")(since C++20). 



  * An entity whose name has module linkage can be redeclared in another translation unit, as long as the redeclaration is attached to the same module. 

| (since C++20)  
---|---  
  
  * An entity whose name has internal linkage can be redeclared in another scope in the same translation unit. 
  * An entity whose name has no linkage can only be redeclared in the same scope. 



The following linkages are recognized: 

#### No linkage

Any of the following names declared at block scope have no linkage: 

  * variables that are not explicitly declared extern (regardless of the static modifier); 
  * [local classes](class.html#Local_classes "cpp/language/class") and their member functions; 
  * other names declared at block scope such as typedefs, enumerations, and enumerators. 



Names not specified with external, module,(since C++20) or internal linkage also have no linkage, regardless of which scope they are declared in. 

#### Internal linkage

Any of the following names declared at namespace scope have internal linkage: 

  * variables, variable templates(since C++14), functions, or function templates declared static; 
  * non-template (since C++14)variables of non-volatile const-qualified type, unless 



    

  * they are inline, 


| (since C++17)  
---|---  
  
    

  * they are declared in the purview of a [module interface unit](modules.html#Module_declarations "cpp/language/modules") (outside the [private module fragment](modules.html#Private_module_fragment "cpp/language/modules"), if any) or [module partition](modules.html#Module_partitions "cpp/language/modules"), 


| (since C++20)  
  
    

  * they are explicitly declared extern, or 
  * they were previously declared and the prior declaration did not have internal linkage; 



  * data members of [anonymous unions](union.html "cpp/language/union"). 

In addition, all names declared in [unnamed namespaces](namespace.html#Unnamed_namespaces "cpp/language/namespace") or a namespace within an unnamed namespace, even ones explicitly declared extern, have internal linkage.  | (since C++11)  
---|---  
  
#### External linkage

Variables and functions with external linkage also have [language linkage](language_linkage.html "cpp/language/language linkage"), which makes it possible to link translation units written in different programming languages. 

Any of the following names declared at namespace scope have external linkage, unless they are declared in an unnamed namespace or their declarations are attached to a named module and are not exported(since C++20): 

  * variables and functions not listed above (that is, functions not declared static, non-const variables not declared static, and any variables declared extern); 
  * enumerations; 
  * names of classes, their member functions, static data members (const or not), nested classes and enumerations, and functions first introduced with [friend](friend.html "cpp/language/friend") declarations inside class bodies; 
  * names of all templates not listed above (that is, not function templates declared static). 



Any of the following names first declared at block scope have external linkage: 

  * names of variables declared extern; 
  * names of functions. 



####  Module linkage

Names declared at namespace scope have module linkage if their declarations are attached to a named module and are not exported, and do not have internal linkage.  | (since C++20)  
---|---  
| This section is incomplete  
Reason: add the description of the behavior when an entity is declared with different linkages in the same translation unit (6.6 paragraph 6), note the difference between C++20 (ill-formed) and the current draft (well-formed)   
---|---  
  
### Static block variables

Block variables with static or thread(since C++11) storage duration are initialized the first time control passes through their declaration (unless their initialization is [zero-](zero_initialization.html "cpp/language/zero initialization") or [constant-initialization](constant_initialization.html "cpp/language/constant initialization"), which can be performed before the block is first entered). On all further calls, the declaration is skipped. 

  * If the initialization [throws an exception](throw.html "cpp/language/throw"), the variable is not considered to be initialized, and initialization will be attempted again the next time control passes through the declaration. 
  * If the initialization recursively enters the block in which the variable is being initialized, the behavior is undefined. 



  * If multiple threads attempt to initialize the same static local variable concurrently, the initialization occurs exactly once (similar behavior can be obtained for arbitrary functions with [std::call_once](../thread/call_once.html "cpp/thread/call once")). 



    

  * Usual implementations of this feature use variants of the double-checked locking pattern, which reduces runtime overhead for already-initialized local statics to a single non-atomic boolean comparison. 


| (since C++11)  
---|---  
  
The destructor for a block variable with static storage duration [is called at program exit](../utility/program/exit.html "cpp/utility/program/exit"), but only if the initialization took place successfully. 

Variables with static storage duration in all definitions of the same [inline function](inline.html "cpp/language/inline") (which may be implicitly inline) all refer to the same object defined in one translation unit, as long as the function has external linkage. 

### Translation-unit-local entities

The concept of translation-unit-local entities is standardized in C++20, see [this page](tu_local.html "cpp/language/tu local") for more details. 

An entity is _translation-unit-local_ (or _TU-local_ for short) if 

  * it has a name with internal linkage, or 
  * it does not have a name with linkage and is introduced within the definition of a TU-local entity, or 
  * it is a template or template specialization whose template argument or template declaration uses a TU-local entity. 



Bad things (usually violation of [ODR](definition.html "cpp/language/definition")) can happen if the type of a non-TU-local entity depends on a TU-local entity, or if a declaration of, or a [deduction guide](ctad.html "cpp/language/ctad") for,(since C++17) a non-TU-local entity names a TU-local entity outside its 

  * function-body for a non-inline function or function template 
  * initializer for a variable or variable template 
  * friend declarations in a class definition 
  * use of value of a variable, if the variable is [usable in constant expressions](constant_expression.html#Usable_in_constant_expressions "cpp/language/constant expression")

Such uses are disallowed in a [module interface unit](modules.html "cpp/language/modules") (outside its private-module-fragment, if any) or a module partition, and are deprecated in any other context. A declaration that appears in one translation unit cannot name a TU-local entity declared in another translation unit that is not a header unit. A declaration instantiated for a [template](templates.html "cpp/language/templates") appears at the point of instantiation of the specialization.  | (since C++20)  
---|---  
  
### Notes

Names at the top-level namespace scope (file scope in C) that are const and not extern have external linkage in C, but internal linkage in C++. 

Since C++11, auto is no longer a storage class specifier; it is used to indicate type deduction. 

In C, the address of a register variable cannot be taken, but in C++, a variable declared register is semantically indistinguishable from a variable declared without any storage class specifiers.  | (until C++17)  
---|---  
In C++, unlike C, variables cannot be declared register.  | (since C++17)  
  
Names of thread_local variables with internal or external linkage referred from different scopes may refer to the same or to different instances depending on whether the code is executing in the same or in different threads. 

The extern keyword can also be used to specify [language linkage](language_linkage.html "cpp/language/language linkage") and [explicit template instantiation declarations](class_template.html "cpp/language/class template"), but it's not a storage class specifier in those cases (except when a declaration is directly contained in a language linkage specification, in which case the declaration is treated as if it contains the extern specifier). 

Storage class specifiers, except for thread_local, are not allowed on [explicit specializations](template_specialization.html "cpp/language/template specialization") and [explicit instantiations](class_template.html#Explicit_instantiation "cpp/language/class template"): 
    
    
    template<class T>
    struct S
    {
        thread_local static int tlm;
    };
     
    template<>
    thread_local int S<float>::tlm = 0; // "static" does not appear here

A const (may be implied by constexpr) variable template used to have internal linkage by default, which was inconsistent with other templated entities. Defect report [CWG2387](https://cplusplus.github.io/CWG/issues/2387.html) corrected this.  | (since C++14)  
---|---  
[`inline`](inline.html "cpp/language/inline") acts as a workaround for [CWG2387](https://cplusplus.github.io/CWG/issues/2387.html) by giving external linkage by default. This is why the inline was [added](https://wg21.link/p0607r0) to many variable templates and then [removed](https://github.com/cplusplus/draft/pull/4625) after having CWG2387 accepted. Standard library implementations also need to use inline as long as a supported compiler has not get CWG2387 implemented. See [GCC Bugzilla #109126](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=109126) and [MSVC STL PR #4546](https://github.com/microsoft/STL/pull/4546). | (since C++17)  
Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_threadsafe_static_init`](../experimental/feature_test.html#cpp_threadsafe_static_init "cpp/feature test") | [`200806L`](../compiler_support/11.html#cpp_threadsafe_static_init_200806L "cpp/compiler support/11") | (C++11) | [Dynamic initialization and destruction with concurrency](storage_duration.html#Static_block_variables)  
  
### Keywords

[`auto`](../keyword/auto.html "cpp/keyword/auto"), [`register`](../keyword/register.html "cpp/keyword/register"), [`static`](../keywords/static.html "cpp/keyword/static"), [`extern`](../keyword/extern.html "cpp/keyword/extern"), [`thread_local`](../keyword/thread_local.html "cpp/keyword/thread local"), [`mutable`](../keyword/mutable.html "cpp/keyword/mutable")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 216](https://cplusplus.github.io/CWG/issues/216.html) | C++98  | unnamed class and enumeration in class scope have  
different linkage from those in namespace scope  | they all have external  
linkage in these scopes   
[CWG 389](https://cplusplus.github.io/CWG/issues/389.html) | C++98  | a name with no linkage should not be  
used to declare an entity with linkage  | a type without linkage shall not be used  
as the type of a variable or function  
with linkage, unless the variable  
or function has C language linkage   
[CWG 426](https://cplusplus.github.io/CWG/issues/426.html) | C++98  | an entity could be declared with both internal  
and external linkage in the same translation unit  | the program is ill-formed in this case   
[CWG 527](https://cplusplus.github.io/CWG/issues/527.html) | C++98  | the type restriction introduced by the resolution of CWG  
389 was also applied to variables and functions that  
cannot be named outside their own translation units  | the restriction is lifted for these  
variables and functions (i.e. with no  
linkage or internal linkage, or declared  
within unnamed namespaces)   
[CWG 809](https://cplusplus.github.io/CWG/issues/809.html) | C++98  | register served very little function  | deprecated   
[CWG 1648](https://cplusplus.github.io/CWG/issues/1648.html) | C++11  | static was implied even if  
thread_local is combined with extern | implied only if no other storage  
class specifier is present   
[CWG 1686](https://cplusplus.github.io/CWG/issues/1686.html) | C++98  
C++11  | the name of a non-static variable declared in namespace  
scope had internal linkage only if it is explicitly  
declared const (C++98) or constexpr (C++11)  | only required the type  
to be const-qualified   
[CWG 2019](https://cplusplus.github.io/CWG/issues/2019.html) | C++98  | the storage duration of reference  
members were unspecified  | same as their complete object   
[CWG 2387](https://cplusplus.github.io/CWG/issues/2387.html) | C++14  | unclear whether const-qualified variable  
template have internal linkage by default  | const qualifier does not affect  
the linkage of variable  
templates or their instances   
[CWG 2533](https://cplusplus.github.io/CWG/issues/2533.html) | C++98  | the storage duration of implicitly-  
created objects were unclear  | made clear   
[CWG 2850](https://cplusplus.github.io/CWG/issues/2850.html) | C++98  | it was unclear when the storage for  
function parameters are deallocated  | made clear   
[CWG 2872](https://cplusplus.github.io/CWG/issues/2872.html) | C++98  | the meaning of “can be referred to” was unclear  | improved wording   
[P2788R0](https://wg21.link/P2788R0) | C++20  | declaring a const-qualified variable in a namespace  
gave it internal linkage even in a module unit  | internal linkage is not given   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.7.5 Storage duration [basic.stc] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.7.5 Storage duration [basic.stc] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.7 Storage duration [basic.stc] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.7 Storage duration [basic.stc] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.7 Storage duration [basic.stc] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 3.7 Storage duration [basic.stc] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.7 Storage duration [basic.stc] 



### See also

[C documentation](../../c/language/storage_class_specifiers.html "c/language/storage duration") for storage duration  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
