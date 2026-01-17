* (C++26) |  specifies that an object has an indeterminate value if it is not initialized  
  (attribute specifier)
Indicates that the variable or function parameter has an indeterminate value if it is not initialized. 

## Contents

  * [1 Syntax](indeterminate.html#Syntax)
  * [2 Explanation](indeterminate.html#Explanation)
  * [3 Notes](indeterminate.html#Notes)
  * [4 Example](indeterminate.html#Example)
  * [5 References](indeterminate.html#References)

### Syntax  

`**[[indeterminate]]**` |  |   
  
### Explanation

`[[**indeterminate**]]` can be applied to the definition of a block variable with automatic [storage duration](../storage_duration.html "cpp/language/storage duration") or to a declaration of a parameter of a [function declaration](../function.html "cpp/language/function"). The attribute specifies that the bytes comprising the storage of an object with automatic storage duration is initially [indeterminate](../default_initialization.html#Indeterminate_and_erroneous_values "cpp/language/default initialization") rather than erroneous. 

If a function parameter is declared with `[[**indeterminate**]]`, it must be declared in the first declaration of its function. If a function parameter is declared with `[[**indeterminate**]]` in the first declaration of its function in one translation unit and the same function is declared without `[[**indeterminate**]]` on the same parameter in its first declaration in another translation unit, the program is [ill-formed, no diagnostic required](../ub.html#Explanation "cpp/language/ub"). 

### Notes

The `[[indeterminate]]` attribute restores the undefined behavior that was implicitly introduced until C++26. It may make compilers consider a code path reading an indeterminate value unreachable.

### References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * 9.12.7 Indeterminate storage [dcl.attr.indet] 


