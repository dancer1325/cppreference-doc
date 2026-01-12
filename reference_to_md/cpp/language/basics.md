* goal
  * C++ programming language
    * terminology
    * concepts  

* C++ program
  * == sequence of text files (== header + source files) / 
    * contain 
      * [declarations](declarations.md)
      * [keywords](../keywords.md)
        * == CERTAIN words | C++ program / have special meaning
      * [comments](../comments.md)
        * ignored | translation
      * [identifiers](name.md)
      * [literals](expressions.md#Literals) 
        * == characters values  
        * determined -- by -- [character sets & encodings](charset.md)
    * becomeS -- , thanks to [translation](translation_phases.md), -- an executable program

* C++ executable program
  * if you want to execute it -> C++ implementation calls its [main function](main_function.md) 

* Certain characters in the program have to be represented with [escape sequences](escape.html "cpp/language/escape"). 

* 👀C++ program's _entities_👀
  * are
    * values
    * [objects](objects.md)
    * [references](reference.md)
    * [structured bindings](structured_binding.md)
      * | C++17
    * [result bindings](function.md#Postcondition_assertions)
      * | C++26
    * [functions](functions.md)
    * [enumerators](enum.md)
    * [types](type-id.md)
    * class members
    * [templates](templates.md)
    * [template specializations](template_specialization.md)
    * [packs](parameter_pack.md)
      * | C++11
    * [namespaces](namespace.md)

* Preprocessor [macros](../preprocessor/replace.md)
  * ❌are NOT C++ entities❌ 

[Declarations](declarations.html "cpp/language/declarations") may introduce entities, associate them with [names](name.html "cpp/language/name") and define their properties
* The declarations that define all properties required to use an entity are [definitions](definition.html "cpp/language/definition")
* A program must contain only one definition of any non-inline function or variable that is [odr-used](definition.html#ODR-use "cpp/language/definition"). 

Definitions of functions usually include sequences of [statements](statements.html "cpp/language/statements"), some of which include [expressions](expressions.html "cpp/language/expressions"), which specify the computations to be performed by the program. 

Names encountered in a program are associated with the declarations that introduced them using [name lookup](lookup.html "cpp/language/lookup")
* Each name is only valid within a part of the program called its [scope](scope.html "cpp/language/scope")
* Some names have [linkage](storage_duration.html "cpp/language/storage duration") which makes them refer to the same entities when they appear in different scopes or translation units. 

Each object, reference, function, expression in C++ is associated with a [type](type-id.html "cpp/language/type"), which may be [fundamental](types.html "cpp/language/types"), compound, or [user-defined](classes.html "cpp/language/classes"), complete or [incomplete](incomplete_type.html "cpp/language/incomplete type"), etc. 

Declared objects and declared references that are not [non-static data members](data_members.html "cpp/language/data members") are _variables ﻿_. 

### See also

* [C's basic concepts](../../c/language/basic_concepts.md)
