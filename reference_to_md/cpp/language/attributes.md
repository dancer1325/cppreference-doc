

  
  
  
  
  

  
  
  
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
**Attributes** (C++11)  
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
  

---  
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
[typedef](typedef.html "cpp/language/typedef")  
[inline](inline.html "cpp/language/inline")  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
[decltype](decltype.html "cpp/language/decltype")(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
[alignas](alignas.html "cpp/language/alignas")(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
**Attributes** (C++11)  
  
 
  
  
  


**Attributes**

[assume](attributes/assume.html "cpp/language/attributes/assume")(C++23)  
---  
[carries_dependency](attributes/carries_dependency.html "cpp/language/attributes/carries dependency")(C++11)(until C++26)  
[deprecated](attributes/deprecated.html "cpp/language/attributes/deprecated")(C++14)  
[fallthrough](attributes/fallthrough.html "cpp/language/attributes/fallthrough")(C++17)  
[indeterminate](attributes/indeterminate.html "cpp/language/attributes/indeterminate")(C++26)  
[likely](attributes/likely.html "cpp/language/attributes/likely")(C++20)  
[maybe_unused](attributes/maybe_unused.html "cpp/language/attributes/maybe unused")(C++17)  
[nodiscard](attributes/nodiscard.html "cpp/language/attributes/nodiscard")(C++17)  
[noreturn](attributes/noreturn.html "cpp/language/attributes/noreturn")(C++11)  
[no_unique_address](attributes/no_unique_address.html "cpp/language/attributes/no unique address")(C++20)  
[optimize_for_synchronized](attributes/optimize_for_synchronized.html "cpp/language/attributes/optimize for synchronized")(TM TS)  
[unlikely](attributes/likely.html "cpp/language/attributes/likely")(C++20)  
  


Introduces implementation-defined attributes for types, objects, code, etc. 

## Contents

  * [1 Syntax](attributes.html#Syntax)
  * [2 Explanation](attributes.html#Explanation)
  * [3 Standard attributes](attributes.html#Standard_attributes)
  * [4 Notes](attributes.html#Notes)
  * [5 Example](attributes.html#Example)
  * [6 Defect reports](attributes.html#Defect_reports)
  * [7 See also](attributes.html#See_also)
  * [8 External links](attributes.html#External_links)

  
---  
  
### Syntax  
  
---  
`**[[**` attribute-list `**]]**` |  |  (since C++11)  
`**[[**` `**using**` attribute-namespace `**:**` attribute-list `**]]**` |  |  (since C++17)  
  
where attribute-list is a comma-separated sequence of zero or more attribute ﻿s (possibly ending with an ellipsis `**...**` indicating a [pack expansion](parameter_pack.html "cpp/language/parameter pack"))   
  
---  
identifier |  (1)  |   
attribute-namespace `**::**` identifier |  (2)  |   
identifier `**(**` argument-list ﻿(optional) `**)**` |  (3)  |   
attribute-namespace `**::**` identifier `**(**` argument-list ﻿(optional) `**)**` |  (4)  |   
  
where attribute-namespace is an identifier and argument-list is a sequence of tokens where parentheses, brackets and braces are balanced (balanced-token-seq). 

1) Simple attribute, such as [[noreturn]].

2) Attribute with a namespace, such as [[gnu::unused]].

3) Attribute with arguments, such as [[deprecated("because")]].

4) Attribute with both a namespace and an argument list.

If `using namespace:` appears in the beginning of an attribute list, no other attributes in the attribute list can specify a namespace: the namespace specified in a using applies to them all: 
    
    
    [[using CC: opt(1), debug]] // same as [[CC::opt(1), CC::debug]]
    [[using CC: CC::opt(1)]] // error: cannot combine using and scoped attribute

| (since C++17)  
---|---  
  
### Explanation

Attributes provide the unified standard syntax for implementation-defined language extensions, such as the GNU and IBM language extensions `__attribute__((...))`, Microsoft extension `__declspec()`, etc. 

An attribute can be used almost everywhere in the C++ program, and can be applied to almost everything: to types, to variables, to functions, to names, to code blocks, to entire translation units, although each particular attribute is only valid where it is permitted by the implementation: `[[expect_true]]` could be an attribute that can only be used with an if, and not with a class declaration. `[[omp::parallel()]]` could be an attribute that applies to a code block or to a for loop, but not to the type int, etc (note these two attributes are fictional examples, see below for the standard and some non-standard attributes). 

In declarations, attributes may appear both before the whole declaration and directly after the name of the entity that is declared, in which case they are combined. In most other situations, attributes apply to the directly preceding entity. 

The [alignas specifier](alignas.html "cpp/language/alignas") is a part of the attribute specifier sequence, although it has different syntax. It may appear where the `[[...]]` attributes appear and may mix with them (provided it is used where alignas is permitted). 

Two consecutive left square bracket tokens (`[[`) may only appear when introducing an attribute-specifier or inside an attribute argument. 
    
    
    void f()
    {
        int y[3];
        y[[] { return 0; }()] = 1;  // error
        int i [[cats::meow([[]])]]; // OK
    }

Besides the standard attributes listed below, implementations may support arbitrary non-standard attributes with implementation-defined behavior. All attributes unknown to an implementation are ignored without causing an error.(since C++17)

An attribute without attribute-namespace and an attribute-namespace whose name is either `std` or `std` followed by one or more digits is reserved for future standardization. That is, every non-standard attribute is in the attribute-namespace provided by the implementation, e.g. `[[gnu::may_alias]]`, `[[clang::trivial_abi]]`, and `[[msvc::noop_dtor]]`.  | (since C++20)  
---|---  
  
### Standard attributes

The following attributes are defined by the C++ standard. 

Standard attributes cannot be syntactically ignored: they cannot contain syntax errors, must be applied to the correct target, and entities in the arguments must be [ODR-use](definition.html#ODR-use "cpp/language/definition"). 

Standard attributes cannot be semantically ignored either: the behavior with all instances of a particular standard attribute removed would have been a conforming behavior for the original program with the attribute present. 

`[[[noreturn](attributes/noreturn.html "cpp/language/attributes/noreturn")]]`(C++11) |  indicates that the function does not return  
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
  
### Example

Run this code
    
    
    [[gnu::always_inline]] [[gnu::hot]] [[gnu::const]] [[nodiscard]]
    inline int f(); // declare f with four attributes
     
    [[gnu::always_inline, gnu::const, gnu::hot, nodiscard]]
    int f(); // same as above, but uses a single attr specifier that contains four attributes
     
    // C++17:
    [[using gnu : const, always_inline, hot]] [[nodiscard]]
    int f[[gnu::always_inline]](); // an attribute may appear in multiple specifiers
     
    int f() { return 0; }
     
    int main() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2079](https://cplusplus.github.io/CWG/issues/2079.html) | C++11  | `[[` could not appear inside an attribute argument  | allowed   
[CWG 2538](https://cplusplus.github.io/CWG/issues/2538.html) | C++11  | it was unclear whether standard attributes can be syntactically ignored  | prohibited   
[CWG 2695](https://cplusplus.github.io/CWG/issues/2695.html) | C++11  | it was unclear whether standard attributes can be semantically ignored  | prohibited   
[P2156R1](https://wg21.link/P2156R1) | C++11  | every standard attribute was required to appear at most once in an attribute-list | not required   
  
### See also

[`**__has_cpp_attribute**`](../experimental/feature_test.html#Attributes "cpp/feature test") \- checks for the presence of an attribute   
---  
[C documentation](../../c/language/attributes.html "c/language/attributes") for Attributes specifier sequence  
  
### External links

1\.  | [Attributes in GCC](https://gcc.gnu.org/onlinedocs/gcc/Attribute-Syntax.html#Attribute-Syntax). These attributes can be used as `[[gnu::...]]`, [See SO](https://stackoverflow.com/questions/54639524/which-gnu-attributes-have-c11-syntax#comment96071307_54639524).   
---|---  
2\.  | [Attributes in Clang](https://clang.llvm.org/docs/AttributeReference.html).   
3\.  | [Attributes in MSVC](https://learn.microsoft.com/en-us/cpp/cpp/attributes#microsoft-specific-attributes). 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
