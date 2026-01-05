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
  


[ Basic Concepts](basics.html "cpp/language/basic concepts")

[Comments](../comments.html "cpp/comment")  
---  
[ASCII](ascii.html "cpp/language/ascii")  
[Punctuation](punctuators.html "cpp/language/punctuators")  
[Names and identifiers](name.html "cpp/language/identifiers")  
[Types](type-id.html "cpp/language/type")  
[Fundamental types](types.html "cpp/language/types")  
[Objects](objects.html "cpp/language/object")  
[Scope](scope.html "cpp/language/scope")  
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
**Modules** (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


Most C++ projects use multiple translation units, and so they need to share [declarations](declarations.html "cpp/language/declarations") and [definitions](definition.html "cpp/language/definition") across those units. The usage of [headers](../standard_library.html#Headers "cpp/standard library") is prominent for this purpose, an example being the [standard library](../standard_library.html "cpp/standard library") whose declarations can be provided by [including the corresponding header](../standard_library.html#Including_headers "cpp/standard library"). 

Modules are a language feature to share declarations and definitions across translation units. They are an alternative to some use cases of headers. 

Modules are orthogonal to [namespaces](namespace.html "cpp/language/namespace"). 
    
    
    // helloworld.cpp
    export module helloworld; // module declaration
     
    import <iostream>;        // import declaration
     
    export void hello()       // export declaration
    {
        [std::cout](../io/cout.html) << "Hello world!\n";
    }
    
    
    // main.cpp
    import helloworld; // import declaration
     
    int main()
    {
        hello();
    }

## Contents

  * [1 Syntax](modules.html#Syntax)
  * [2 Module declarations](modules.html#Module_declarations)
  * [3 Exporting declarations and definitions](modules.html#Exporting_declarations_and_definitions)
  * [4 Importing modules and header units](modules.html#Importing_modules_and_header_units)
  * [5 Global module fragment](modules.html#Global_module_fragment)
  * [6 Private module fragment](modules.html#Private_module_fragment)
  * [7 Module partitions](modules.html#Module_partitions)
  * [8 Module ownership](modules.html#Module_ownership)
  * [9 Notes](modules.html#Notes)
  * [10 Keywords](modules.html#Keywords)
  * [11 Defect reports](modules.html#Defect_reports)

  
---  
  
### Syntax   
  
---  
`**export**`(optional) `**module**` module-name module-partition ﻿(optional) attr ﻿(optional) `**;**` |  (1)  |   
`**export**` declaration |  (2)  |   
`**export {**` declaration-seq ﻿(optional) `**}**` |  (3)  |   
`**export**`(optional) `**import**` module-name attr ﻿(optional) `**;**` |  (4)  |   
`**export**`(optional) `**import**` module-partition attr ﻿(optional) `**;**` |  (5)  |   
`**export**`(optional) `**import**` header-name attr ﻿(optional) `**;**` |  (6)  |   
`**module;**` |  (7)  |   
`**module : private;**` |  (8)  |   
  
1) Module declaration. Declares that the current translation unit is a _module unit_.

2,3) Export declaration. Export all namespace-scope declarations in declaration or declaration-seq.

4,5,6) Import declaration. Import a module unit/module partition/header unit.

7) Starts a [global module fragment](modules.html#Global_module_fragment).

8) Starts a [private module fragment](modules.html#Private_module_fragment).

### Module declarations

A translation unit may have a module declaration, in which case it is considered a _module unit_. The _module declaration_ , if provided, must be the first declaration of the translation unit (excepted the _global module fragment_ , which is covered later on). Each module unit is associated to a _module name_ (and optionally a partition), provided in the module declaration.   
  
---  
`**export**`(optional) `**module**` module-name module-partition ﻿(optional) attr ﻿(optional) `**;**` |  |   
  
The module name consists of one or more identifiers separated by dots (for example: `mymodule`, `mymodule.mysubmodule`, `mymodule2`...). Dots have no intrinsic meaning, however they are used informally to represent hierarchy. 

If any identifier in the module name or module partition is defined as an [object-like macro](../preprocessor/replace.html "cpp/preprocessor/replace"), the program is ill-formed. 

A _named module_ is the collection of module units with the same module name. 

Module units whose declaration has the keyword export are termed _module interface units_ ; all other module units are termed _module implementation units_. 

For every named module, there must be exactly one module interface unit that specifies no module partition; this module unit is termed the _primary module interface unit_. Its exported content will be available when importing the corresponding named module. 
    
    
    // (each line represents a separate translation unit)
     
    export module A;   // declares the primary module interface unit for named module 'A'
    module A;          // declares a module implementation unit for named module 'A'
    module A;          // declares another module implementation unit for named module 'A'
    export module A.B; // declares the primary module interface unit for named module 'A.B'
    module A.B;        // declares a module implementation unit for named module 'A.B'

### Exporting declarations and definitions

Module interface units can export declarations (including definitions), which can be imported by other translation units. To export a declaration, either prefix it with the export keyword, or else place it inside an export block.   
  
---  
`**export**` declaration |  |   
`**export {**` declaration-seq ﻿(optional) `**}**` |  |   
      
    
    export module A; // declares the primary module interface unit for named module 'A'
     
    // hello() will be visible by translations units importing 'A'
    export char const* hello() { return "hello"; } 
     
    // world() will NOT be visible.
    char const* world() { return "world"; }
     
    // Both one() and zero() will be visible.
    export
    {
        int one()  { return 1; }
        int zero() { return 0; }
    }
     
    // Exporting namespaces also works: hi::english() and hi::french() will be visible.
    export namespace hi
    {
        char const* english() { return "Hi!"; }
        char const* french()  { return "Salut!"; }
    }

### Importing modules and header units

Modules are imported via an _import declaration_ :   
  
---  
`**export**`(optional) `**import**` module-name attr ﻿(optional) `**;**` |  |   
  
All declarations and definitions exported in the module interface units of the given named module will be available in the translation unit using the import declaration. 

Import declarations can be exported in a module interface unit. That is, if module `B` export-imports `A`, then importing `B` will also make visible all exports from `A`. 

In module units, all import declarations (including export-imports) must be grouped after the module declaration and before all other declarations. 
    
    
    /////// A.cpp (primary module interface unit of 'A')
    export module A;
     
    export char const* hello() { return "hello"; }
     
    /////// B.cpp (primary module interface unit of 'B')
    export module B;
     
    export import A;
     
    export char const* world() { return "world"; }
     
    /////// main.cpp (not a module unit)
    #include <iostream>
    import B;
     
    int main()
    {
        [std::cout](../io/cout.html) << hello() << ' ' << world() << '\n';
    }

[` #include`](../preprocessor/include.html "cpp/preprocessor/include") should not be used in a module unit (outside the _global module fragment_), because all included declarations and definitions would be considered part of the module. Instead, headers can also be imported as _header units_ with an _import declaration_ :   
  
---  
`**export**`(optional) `**import**` header-name attr ﻿(optional) `**;**` |  |   
  
A header unit is a separate translation unit synthesized from a header. Importing a header unit will make accessible all its definitions and declarations. Preprocessor macros are also accessible (because import declarations are recognized by the preprocessor). 

However, contrary to #include, preprocessing macros already defined at the point of the import declaration will not affect the processing of the header. This may be inconvenient in some cases (some headers use preprocessing macros as a form of configuration), in which case the usage of _global module fragment_ is needed. 
    
    
    /////// A.cpp (primary module interface unit of 'A')
    export module A;
     
    import <iostream>;
    export import <string_view>;
     
    export void print([std::string_view](../string/basic_string_view.html) message)
    {
        [std::cout](../io/cout.html) << message << [std::endl](../io/manip/endl.html);
    }
     
    /////// main.cpp (not a module unit)
    import A;
     
    int main()
    {
        [std::string_view](../string/basic_string_view.html) message = "Hello, world!";
        print(message);
    }

### Global module fragment

Module units can be prefixed by a _global module fragment_ , which can be used to include headers when importing the headers is not possible (notably when the header uses preprocessing macros as configuration).   
  
---  
`**module;**` preprocessing-directives ﻿(optional) module-declaration |  |   
  
If a module-unit has a global module fragment, then its first declaration must be `**module;**`. Then, only [preprocessing directives](../preprocessor.html#Directives "cpp/preprocessor") can appear in the global module fragment. Then, a standard module declaration marks the end of the global module fragment and the start of the module content. 
    
    
    /////// A.cpp (primary module interface unit of 'A')
    module;
     
    // Defining _POSIX_C_SOURCE adds functions to standard headers,
    // according to the POSIX standard.
    #define _POSIX_C_SOURCE 200809L
    #include <stdlib.h>
     
    export module A;
     
    import <ctime>;
     
    // Only for demonstration (bad source of randomness).
    // Use C++ <random> instead.
    export double weak_random()
    {
        [std::timespec](../chrono/c/timespec.html) ts;
        [std::timespec_get](../chrono/c/timespec_get.html)(&ts, [TIME_UTC](../chrono/c/timespec_get.html)); // from <ctime>
     
        // Provided in <stdlib.h> according to the POSIX standard.
        srand48(ts.tv_nsec);
     
        // drand48() returns a random number between 0 and 1.
        return drand48();
    }
     
    /////// main.cpp (not a module unit)
    import <iostream>;
    import A;
     
    int main()
    {
        [std::cout](../io/cout.html) << "Random value between 0 and 1: " << weak_random() << '\n';
    }

### Private module fragment

Primary module interface unit can be suffixed by a _private module fragment_ , which allows a module to be represented as a single translation unit without making all of the contents of the module reachable to importers.   
  
---  
`**module : private;**` declaration-seq ﻿(optional) |  |   
  
_Private module fragment_ ends the portion of the module interface unit that can affect the behavior of other translation units. If a module unit contains a _private module fragment_ , it will be the only module unit of its module. 
    
    
    export module foo;
     
    export int f();
     
    module : private; // ends the portion of the module interface unit that
                      // can affect the behavior of other translation units
                      // starts a private module fragment
     
    int f()           // definition not reachable from importers of foo
    {
        return 42;
    }

### Module partitions

A module can have _module partition units_. They are module units whose module declarations include a module partition, which starts with a colon `**:**` and is placed after the module name. 
    
    
    export module A:B; // Declares a module interface unit for module 'A', partition ':B'.

A module partition represents exactly one module unit (two module units cannot designate the same module partition). They are visible only from inside the named module (translation units outside the named module cannot import a module partition directly). 

A module partition can be imported by module units of the same named module.   
  
---  
`**export**`(optional) `**import**` module-partition attr ﻿(optional) `**;**` |  |   
      
    
    /////// A-B.cpp   
    export module A:B;
    ...
     
    /////// A-C.cpp
    module A:C;
    ...
     
    /////// A.cpp
    export module A;
     
    import :C;
    export import :B;
     
    ...

All definitions and declarations in a module partition are visible by the importing module unit, whether exported or not. 

Module partitions can be module interface units (when their module declarations have `**export**`). They must be export-imported by the primary module interface unit, and their exported statements will be visible when the module is imported.   
  
---  
`**export**`(optional) `**import**` module-partition attr ﻿(optional) `**;**` |  |   
      
    
    ///////  A.cpp   
    export module A;     // primary module interface unit
     
    export import :B;    // Hello() is visible when importing 'A'.
    import :C;           // WorldImpl() is now visible only for 'A.cpp'.
    // export import :C; // ERROR: Cannot export a module implementation unit.
     
    // World() is visible by any translation unit importing 'A'.
    export char const* World()
    {
        return WorldImpl();
    }
    
    
    /////// A-B.cpp 
    export module A:B; // partition module interface unit
     
    // Hello() is visible by any translation unit importing 'A'.
    export char const* Hello() { return "Hello"; }
    
    
    /////// A-C.cpp 
    module A:C; // partition module implementation unit
     
    // WorldImpl() is visible by any module unit of 'A' importing ':C'.
    char const* WorldImpl() { return "World"; }
    
    
    /////// main.cpp 
    import A;
    import <iostream>;
     
    int main()
    {
        [std::cout](../io/cout.html) << Hello() << ' ' << World() << '\n';
        // WorldImpl(); // ERROR: WorldImpl() is not visible.
    }

### Module ownership

In general, if a declaration appears after the module declaration in a module unit, it is _attached to_ that module. 

If a declaration of an entity is attached to a named module, that entity can only be defined in that module. All declarations of such an entity must be attached to the same module. 

If a declaration is attached to a named module, and it is not exported, the declared name has [module linkage](storage_duration.html#Module_linkage "cpp/language/storage duration"). 
    
    
    export module lib_A;
     
    int f() { return 0; } // f has module linkage
    export int x = f();   // x equals 0
    
    
    export module lib_B;
     
    int f() { return 1; } // OK, f in lib_A and f in lib_B refer to different entities
    export int y = f(); // y equals 1

If [two declarations of an entity](conflicting_declarations.html#Multiple_declarations_of_the_same_entity "cpp/language/conflicting declarations") are attached to different modules, the program is ill-formed; no diagnostic is required if neither is reachable from the other. 
    
    
    /////// decls.h
    int f(); // #1, attached to the global module
    int g(); // #2, attached to the global module
    
    
    /////// Module interface of M
    module;
    #include "decls.h"
    export module M;
    export using ::f; // OK, does not declare an entity, exports #1
    int g();          // Error: matches #2, but attached to M
    export int h();   // #3
    export int k();   // #4
    
    
    /////// Other translation unit
    import M;
    static int h();   // Error: matches #3
    int k();          // Error: matches #4

The following declarations are not attached to any named module (and thus the declared entity can be defined outside the module): 

  * [namespace](namespace.html "cpp/language/namespace") definitions with external linkage; 
  * declarations within a [language linkage](language_linkage.html "cpp/language/language linkage") specification. 


    
    
    export module lib_A;
     
    namespace ns // ns is not attached to lib_A.
    {
        export extern "C++" int f(); // f is not attached to lib_A.
               extern "C++" int g(); // g is not attached to lib_A.
        export              int h(); // h is attached to lib_A.
    }
    // ns::h must be defined in lib_A, but ns::f and ns::g can be defined elsewhere (e.g.
    // in a traditional source file).

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_modules`](../experimental/feature_test.html#cpp_modules "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_modules_201907L "cpp/compiler support/20") | (C++20) | Modules — core language support   
[`__cpp_lib_modules`](../experimental/feature_test.html#cpp_lib_modules "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_modules_202207L "cpp/compiler support/23") | (C++23) | [Standard library modules](../standard_library.html#Importing_modules "cpp/standard library") std and std.compat  
  
### Keywords

[`private`](../keyword/private.html "cpp/keyword/private"), [`module`](../identifier_with_special_meaning/module.html "cpp/identifier with special meaning/module"), [`import`](../identifier_with_special_meaning/import.html "cpp/identifier with special meaning/import"), [`export`](../keyword/export.html "cpp/keyword/export")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2732](https://cplusplus.github.io/CWG/issues/2732.html) | C++20  | it was unclear whether importable headers can  
react to preprocessor state from the point of import  | no reaction   
[P3034R1](https://wg21.link/P3034R1) | C++20  | module names and module partitions could  
contain identifiers defined as object-like macros  | prohibited 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
