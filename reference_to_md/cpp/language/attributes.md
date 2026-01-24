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
  * allows
    * extending the base language (== fundamental entities) / syntax
      * unified 
      * standard 
  * uses
    * | any part of C++ program: types, variables, functions, names, code blocks, translation units, control flow
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
        * == implementation-defined behavior
        * _Examples:_
          * GNU & IBM language extensions `__attribute__((...))`
          * Microsoft extension `__declspec()`

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

### Standard attributes

* == defined -- by the -- C++ standard
* | C++20,
  * == attribute / reserved ones
    * attribute WITHOUT `attribute-namespace`
    * attribute / `attribute-namespace` == `std` OR `std + OneOrMoreDigits`
* ❌can NOT be 
  * syntactically ignored❌
    * == ❌can NOT contain syntax errors❌
  * semantically ignored❌
    * TODO: the behavior with all instances of a particular standard attribute removed would have been a conforming behavior for the original program with the attribute present. 
* MUST be applied | correct target
* entities | arguments MUST be [ODR-use](definition.md#odr-use-formal-definition)

* [`[[noreturn]]`](attributes/noreturn.md)
* [`[[carries_dependency]]`](attributes/carries_dependency.md)
* [`[[deprecated]]`](attributes/deprecated.md) OR `[[deprecated("reason")]]`
* [`[[fallthrough]]`](attributes/fallthrough.md)
* [`[[maybe_unused]]`](attributes/maybe_unused.md)
* [`[[nodiscard]]`](attributes/nodiscard.md) OR `[[nodiscard("reason")]]`
* [`[[likely]]`](attributes/likely.md) OR `[[unlikely]]`
* [`[[no_unique_address]]`](attributes/no_unique_address.md)
* [`[[assume(expression)]]`](attributes/assume.md)
* [`[[indeterminate]]`](attributes/indeterminate.md)
* [`[[optimize_for_synchronized]]`](attributes/optimize_for_synchronized.md)

### Non-standard attribute

* | C++20,
  * == attribute / 
    * `attribute-namespace` == C++ implementation
      * _Examples:_ `[[gnu::may_alias]]`, `[[clang::trivial_abi]]`, `[[msvc::noop_dtor]]`, ...

### Notes

* [`__has_cpp_attribute`](../experimental/feature_test.md#attributes-)
  * == preprocessor macro /
    * check the presence of individual attribute | given platform  

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
