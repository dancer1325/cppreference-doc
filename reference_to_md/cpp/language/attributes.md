* attributes
  * implementation-defined
  * uses | 
    * types,
    * objects,
    * code,
    * etc. 

## Contents

  * [1 Syntax](attributes.html#Syntax)
  * [2 Explanation](attributes.html#Explanation)
  * [3 Standard attributes](attributes.html#Standard_attributes)
  * [4 Notes](attributes.html#Notes)
  * [5 Example](attributes.html#Example)
  * [6 Defect reports](attributes.html#Defect_reports)
  * [7 See also](attributes.html#See_also)
  * [8 External links](attributes.html#External_links)

### Syntax  
  
* `[[ attribute-list ]]`
  * | C++11
* `[[ using attribute-namespace : attribute-list ]]` 
  * | C++17  



* `attribute-namespace`
  * == `identifier`
* `attribute-list`
  * == sequence of >=0 attributeS /
    * comma-separated  
    * POSSIBLY ending -- with -- `...` (== [pack expansion](parameter_pack.md))
* `identifier`
  * == SIMPLE attribute
  * _Example:_ `[[noreturn]]`
* `attribute-namespace :: identifier`
  * == attribute / has a namespace
  * _Example:_ `[[gnu::unused]]`   
* `identifier ( argument-list )`
  * `argument-list`
    * OPTIONAL
  * == attribute / has arguments
  * _Example:_ `[[deprecated("because")]]`
* `attribute-namespace :: identifier ( argument-list )`
  * `argument-list`
    * OPTIONAL
  * == attribute / has namespace & arguments
* `argument-list`
  * == sequence of tokens /
    * parentheses, brackets and braces are balanced == `balanced-token-seq` 
  * | C++17,
    * ❌if | beginning of an attribute list, appears `using namespace:` -> NO other attributes | attribute list can specify a namespace❌
      * `namespace` specifies | ALL
      * `[[using CC: opt(1), debug]]`
        * == `[[CC::opt(1), CC::debug]]`
      * `[[using CC: CC::opt(1)]]`
        * can NOT combine using and scoped attribute (❓)
  
### Explanation

* Attributes
  * provide
    * unified standard syntax -- for -- language extensions
      * implementation-defined
  * _Examples:_ 
    * GNU & IBM language extensions `__attribute__((...))`
    * Microsoft extension `__declspec()` 
  * uses
    * | any part of C++ program: types, variables, functions, names, code blocks, translation units,
      * ⚠️ALTHOUGH it depends on the implementation⚠️
        * _Examples:_
          * `[[expect_true]]`  
            * POSSIBLE use cases: with an `if`
            * NOT use cases: with class declaration
          * `[[omp::parallel()]]`
            * POSSIBLE use cases: code block, for loop
            * NOT use cases: type int
  * | declarations
    * can appear 
      * BEFORE the whole declaration 
      * DIRECTLY AFTER the name of the entity / is declared,
      * DIRECTLY preceding entity 
  * ALLOWED attributes
    * [standard](#standard-attributes)
    * arbitrary non-standard
      * arbitrary == implementation-dependant
        * | C++17,
          * 👀if an implementation does NOT know an attribute -> implementation ignores it WITHOUT causing an error👀
      * implementation-defined behavior

* [alignas specifier](alignas.md)
  * == part of the attribute specifier sequence
    * DIFFERENT syntax
  * use cases
    * where `[[...]]` attributes appear
    * can mix with `[[...]]` 

* `[[`
  * use cases
    * | introduce an attribute-specifier
    * | attribute argument 


An attribute without attribute-namespace and an attribute-namespace whose name is either `std` or `std` followed 
by one or more digits is reserved for future standardization
* That is, every non-standard attribute is in the attribute-namespace provided by the implementation, e.g. `[[gnu::may_alias]]`, `[[clang::trivial_abi]]`, and `[[msvc::noop_dtor]]`
*  | (since C++20)
  
### Standard attributes

* == defined -- by the -- C++ standard

Standard attributes cannot be syntactically ignored: they cannot contain syntax errors, must be applied to the correct target,
and entities in the arguments must be [ODR-use](definition.html#ODR-use "cpp/language/definition"). 

Standard attributes cannot be semantically ignored either: the behavior with all instances of a particular standard attribute removed 
would have been a conforming behavior for the original program with the attribute present. 

* [`[[noreturn]]`](attributes/noreturn.md)
  * (C++11) |  indicates that the function does not return  
  (attribute specifier)  
  ---|---  
  `[[[carries_dependency](attributes/carries_dependency.html "cpp/language/attributes/carries dependency")]]`(C++11)(removed in C++26) |  indicates that dependency chain in release-consume [std::memory_order](../atomic/memory_order.html "cpp/atomic/memory order") propagates in and out of the function  
  (attribute specifier)  
  `[[[deprecated](attributes/deprecated.html "cpp/language/attributes/deprecated")]]``[[[deprecated](attributes/deprecated.html "cpp/language/attributes/deprecated")("_reason_ ")]]`(C++14)(C++14) |  indicates that the use of the name or entity declared with this attribute is allowed, but discouraged for some reason  
  (attribute specifier)  
  `[[[fallthrough](attributes/fallthrough.html "cpp/language/attributes/fallthrough")]]`(C++17) |  indicates that the fall through from the previous case label is intentional and should not be diagnosed by a compiler that warns on fall-through  
  (attribute specifier)  
  `[[[maybe_unused](attributes/maybe_unused.html "cpp/language/attributes/maybe unused")]]`(C++17) |  suppresses compiler warnings on unused entities, if any  
  (attribute specifier)  
  `[[[nodiscard](attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]``[[[nodiscard](attributes/nodiscard.html "cpp/language/attributes/nodiscard")("_reason_ ")]]`(C++17)(C++20) |  encourages the compiler to issue a warning if the return value is discarded  
  (attribute specifier)  
  `[[[likely](attributes/likely.html "cpp/language/attributes/likely")]]``[[[unlikely](attributes/likely.html "cpp/language/attributes/likely")]]`(C++20)(C++20) |  indicates that the compiler should optimize for the case where a path of execution through a statement is more or less likely than any other path of execution  
  (attribute specifier)  
  `[[[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]`(C++20) |  indicates that a non-static data member need not have an address distinct from all other non-static data members of its class  
  (attribute specifier)  
  `[[[assume](attributes/assume.html "cpp/language/attributes/assume")(_expression_)]]`(C++23) |  specifies that the _expression_ will always evaluate to true at a given point  
  (attribute specifier)  
  `[[[indeterminate](attributes/indeterminate.html "cpp/language/attributes/indeterminate")]]`(C++26) |  specifies that an object has an indeterminate value if it is not initialized  
  (attribute specifier)  
  `[[[optimize_for_synchronized](attributes/optimize_for_synchronized.html "cpp/language/attributes/optimize for synchronized")]]`(TM TS) |  indicates that the function definition should be optimized for invocation from a [synchronized statement](transactional_memory.html "cpp/language/transactional memory")  
  (attribute specifier)  
  
### Notes

The presence of each individual attribute on a given platform can be checked with [`__has_cpp_attribute`](../experimental/feature_test.html#Attributes "cpp/feature test") preprocessor macro. 

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_attributes`](../experimental/feature_test.html#cpp_attributes "cpp/feature test") | [`200809L`](../compiler_support/11.html#cpp_attributes_200809L "cpp/compiler support/11") | (C++11) | Attributes   
[`__cpp_namespace_attributes`](../experimental/feature_test.html#cpp_namespace_attributes "cpp/feature test") | [`201411L`](../compiler_support/17.html#cpp_namespace_attributes_201411L "cpp/compiler support/17") | (C++17) | Attributes for [namespaces](namespace.html "cpp/language/namespace")  

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2079](https://cplusplus.github.io/CWG/issues/2079.html) | C++11  | `[[` could not appear inside an attribute argument  | allowed   
[CWG 2538](https://cplusplus.github.io/CWG/issues/2538.html) | C++11  | it was unclear whether standard attributes can be syntactically ignored  | prohibited   
[CWG 2695](https://cplusplus.github.io/CWG/issues/2695.html) | C++11  | it was unclear whether standard attributes can be semantically ignored  | prohibited   
[P2156R1](https://wg21.link/P2156R1) | C++11  | every standard attribute was required to appear at most once in an attribute-list | not required   
  
### See also

* [`__has_cpp_attribute`](../experimental/feature_test.md#attributes-)
  * checks for the presence of an attribute   
* [C's Attributes specifier sequence](../../c/language/attributes.md)   
  
### External links

1\.  | [Attributes in GCC](https://gcc.gnu.org/onlinedocs/gcc/Attribute-Syntax.html#Attribute-Syntax). These attributes can be used as `[[gnu::...]]`, [See SO](https://stackoverflow.com/questions/54639524/which-gnu-attributes-have-c11-syntax#comment96071307_54639524).   
---|---  
2\.  | [Attributes in Clang](https://clang.llvm.org/docs/AttributeReference.html).   
3\.  | [Attributes in MSVC](https://learn.microsoft.com/en-us/cpp/cpp/attributes#microsoft-specific-attributes). 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
