* (C++20) |  indicates that a non-static data member need not have an address distinct from all other non-static data members of its class  
  (attribute specifier)  
Allows this data member to be overlapped with other non-static data members or base class subobjects of its class. 

## Contents

  * [1 Syntax](no_unique_address.html#Syntax)
  * [2 Explanation](no_unique_address.html#Explanation)
  * [3 Notes](no_unique_address.html#Notes)
  * [4 Example](no_unique_address.html#Example)
  * [5 References](no_unique_address.html#References)
  
### Syntax  

`[[no_unique_address]]`   
  
### Explanation

Applies to the name being declared in the declaration of a non-static data member that is not a bit-field. 

Makes this member subobject [potentially-overlapping](../objects.html#Subobjects "cpp/language/object"), i.e., allows this member to be overlapped with other non-static data members or base class subobjects of its class. This means that if the member has an empty class type (e.g. stateless allocator), the compiler may optimize it to occupy no space, just like if it were an [empty base](../ebo.html "cpp/language/ebo"). If the member is not empty, any tail padding in it may be also reused to store other data members. 

### Notes

[[no_unique_address]] is ignored by MSVC even in C++20 mode; instead, [[msvc::no_unique_address]] is provided. 

### Example

Run this code
    
    


Possible output: 
    
    
    sizeof(Empty) == 1
    sizeof(int) == 4
    sizeof(X) == 8
    sizeof(Y) == 4
    sizeof(Z) == 2
    sizeof(W) == 3

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.11 No unique address attribute [dcl.attr.nouniqueaddr] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.10 No unique address attribute [dcl.attr.nouniqueaddr] 


