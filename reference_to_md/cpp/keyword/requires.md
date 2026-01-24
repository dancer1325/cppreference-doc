### Usage

* Specifies a constant expression on template parameters that [evaluate a requirement](../language/requires.md) 
* Within such a requirement, introduces a [nested requirement](../language/requires.md#nested-requirements-)
* In a template declaration, specifies an [associated constraint](../language/constraints.md) 

### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_concepts`](../experimental/feature_test.html#cpp_concepts "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_concepts_201907L "cpp/compiler support/20") | (C++20) | Constraints   
  
### See also

  * [`class`](class.html "cpp/keyword/class"), [`typename`](typename.html "cpp/keyword/typename")
  * [`template`](template.html "cpp/keyword/template")
  * [`concept`](concept.html "cpp/keyword/concept")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
