

  
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
  
| **Namespace aliases**  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  

  
  
  

---  
  

---  
  



  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
[Alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
**Namespace alias definition**  
[using declaration](using_declaration.html "cpp/language/using declaration")  
[`using` directive](namespace.html#Using-directives "cpp/language/namespace")  
[static_assert declaration](static_assert.html "cpp/language/static assert") (C++11)  
[asm declaration](asm.html "cpp/language/asm")  
[Opaque enum declaration](enum.html "cpp/language/enum") (C++11)  
Other declarations  
[Namespace definition](namespace.html "cpp/language/namespace")  
[Function declaration](function.html "cpp/language/function")  
[Class template declaration](class_template.html "cpp/language/class template")  
[Function template declaration](function_template.html "cpp/language/function template")  
[Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template") (C++11)  
[Explicit template specialization](template_specialization.html "cpp/language/template specialization")  
[Linkage specification](language_linkage.html "cpp/language/language linkage")  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


Namespace aliases allow the programmer to define an alternate name for a namespace. 

They are commonly used as a convenient shortcut for long or deeply-nested namespaces. 

## Contents

  * [1 Syntax](namespace_alias.html#Syntax)
  * [2 Explanation](namespace_alias.html#Explanation)
  * [3 Keywords](namespace_alias.html#Keywords)
  * [4 Example](namespace_alias.html#Example)
  * [5 See also](namespace_alias.html#See_also)

  
---  
  
### Syntax  
  
---  
`**namespace**` alias_name = ns_name`**;**` |  (1)  |   
`**namespace**` alias_name = `**::**` ns_name`**;**` |  (2)  |   
`**namespace**` alias_name = nested_name`**::**` ns_name`**;**` |  (3)  |   
  
### Explanation

The new alias alias_name provides an alternate method of accessing ns_name. 

alias_name must be a name not previously used. alias_name is valid for the duration of the scope in which it is introduced. 

### Keywords

[`namespace`](../keyword/namespace.html "cpp/keyword/namespace")

### Example

Run this code
    
    
    #include <iostream>
     
    namespace foo
    {
        namespace bar
        {
             namespace baz
             {
                 int qux = 42;
             }
        }
    }
     
    namespace fbz = foo::bar::baz;
     
    int main()
    {
        [std::cout](../io/cout.html) << fbz::qux << '\n';
    }

Output: 
    
    
    42

### See also

[ namespace declaration ](namespace.html "cpp/language/namespace") |  identifies a namespace  
---|---  
[ type alias declaration ](type_alias.html "cpp/language/type alias")(C++11) |  creates a synonym for a type
