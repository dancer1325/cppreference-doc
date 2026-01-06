

  
  
  
  
  

  
  
  

---  
  

---  
  


**Basic Concepts**

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
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


This section provides definitions for the specific terminology and the concepts used when describing the C++ programming language. 

A C++ program is a sequence of text files (typically header and source files) that contain [declarations](declarations.html "cpp/language/declarations"). They undergo [translation](translation_phases.html "cpp/language/translation phases") to become an executable program, which is executed when the C++ implementation calls its [main function](main_function.html "cpp/language/main function"). 

Certain words in a C++ program have special meaning, and these are known as [keywords](../keywords.html "cpp/keyword"). Others can be used as [identifiers](name.html "cpp/language/identifiers"). [Comments](../comments.html "cpp/comment") are ignored during translation. C++ programs also contain [literals](expressions.html#Literals "cpp/language/expressions"), the values of characters inside them are determined by [character sets and encodings](charset.html "cpp/language/charset"). Certain characters in the program have to be represented with [escape sequences](escape.html "cpp/language/escape"). 

The _entities_ of a C++ program are values, [objects](objects.html "cpp/language/objects"), [references](reference.html "cpp/language/reference"), [structured bindings](structured_binding.html "cpp/language/structured binding")(since C++17), [result bindings](function.html#Postcondition_assertions "cpp/language/function")(since C++26), [functions](functions.html "cpp/language/functions"), [enumerators](enum.html "cpp/language/enum"), [types](type-id.html "cpp/language/type"), class members, [templates](templates.html "cpp/language/templates"), [template specializations](template_specialization.html "cpp/language/template specialization"), [packs](parameter_pack.html "cpp/language/pack")(since C++11), and [namespaces](namespace.html "cpp/language/namespace"). Preprocessor [macros](../preprocessor/replace.html "cpp/preprocessor/replace") are not C++ entities. 

[Declarations](declarations.html "cpp/language/declarations") may introduce entities, associate them with [names](name.html "cpp/language/name") and define their properties. The declarations that define all properties required to use an entity are [definitions](definition.html "cpp/language/definition"). A program must contain only one definition of any non-inline function or variable that is [odr-used](definition.html#ODR-use "cpp/language/definition"). 

Definitions of functions usually include sequences of [statements](statements.html "cpp/language/statements"), some of which include [expressions](expressions.html "cpp/language/expressions"), which specify the computations to be performed by the program. 

Names encountered in a program are associated with the declarations that introduced them using [name lookup](lookup.html "cpp/language/lookup"). Each name is only valid within a part of the program called its [scope](scope.html "cpp/language/scope"). Some names have [linkage](storage_duration.html "cpp/language/storage duration") which makes them refer to the same entities when they appear in different scopes or translation units. 

Each object, reference, function, expression in C++ is associated with a [type](type-id.html "cpp/language/type"), which may be [fundamental](types.html "cpp/language/types"), compound, or [user-defined](classes.html "cpp/language/classes"), complete or [incomplete](incomplete_type.html "cpp/language/incomplete type"), etc. 

Declared objects and declared references that are not [non-static data members](data_members.html "cpp/language/data members") are _variables ﻿_. 

### See also

[C documentation](../../c/language/basic_concepts.html "c/language/basic concepts") for Basic concepts  
---
