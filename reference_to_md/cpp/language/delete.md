

  
  
  
  
  

  
  
  

---  
  
| **`delete` expression**  
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
  


  
  
Operators  
| [Assignment operators](operator_assignment.html "cpp/language/operator assignment")  
---  
[Increment and decrement](operator_incdec.html "cpp/language/operator incdec")  
[Arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic")  
[Logical operators](operator_logical.html "cpp/language/operator logical")  
[Comparison operators](operator_comparison.html "cpp/language/operator comparison")  
[Member access operators](operator_member_access.html "cpp/language/operator member access")  
[Other operators](operator_other.html "cpp/language/operator other")  
[`new`-expression](new.html "cpp/language/new")  
**`delete`-expression**  
[`throw`-expression](throw.html "cpp/language/throw")  
  
| [`alignof`](alignof.html "cpp/language/alignof")  
---  
[`sizeof`](sizeof.html "cpp/language/sizeof")  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") (C++11)  
[`typeid`](typeid.html "cpp/language/typeid")  
[`noexcept`](noexcept.html "cpp/language/noexcept") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
  


Destroys object(s) previously allocated by the [new-expression](new.html "cpp/language/new") and releases obtained memory area. 

## Contents

  * [1 Syntax](delete.html#Syntax)
  * [2 Explanation](delete.html#Explanation)
  * [3 Notes](delete.html#Notes)
  * [4 Keywords](delete.html#Keywords)
  * [5 Defect reports](delete.html#Defect_reports)
  * [6 See also](delete.html#See_also)

  
---  
  
### Syntax  
  
---  
`**::**`(optional) `**delete**` expression |  (1)  |   
`**::**`(optional) `**delete[]**` expression |  (2)  |   
expression |  \-  |  one of the following: 

  * an expression of class type [contextually implicitly convertible](implicit_cast.html "cpp/language/implicit conversion") to a pointer to object type 
  * a prvalue of pointer to object type 

  
---|---|---  
  
1) Destroys one non-array object created by a [new-expression](new.html "cpp/language/new").

2) Destroys an array created by a [new[]-expression](new.html "cpp/language/new").

### Explanation

Given the pointer evaluated from expression (after possible conversions) as ptr. 

1) ptr must be one of 

  * a null pointer, 
  * a pointer to a non-array object created by a [new-expression](new.html "cpp/language/new"), or 
  * a pointer to a base subobject of a non-array object created by a [new-expression](new.html "cpp/language/new").



The pointed-to type of ptr must be [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") to the type of the object (or of a base subobject). If ptr is anything else, including if it is a pointer obtained by the array form of [new-expression](new.html "cpp/language/new"), the behavior is [undefined](ub.html "cpp/language/ub").

2) ptr must be a null pointer or a pointer whose value is previously obtained by an array form of [new-expression](new.html "cpp/language/new") whose [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new") was not a non-allocating form (i.e. overload (10)).

The pointed-to type of ptr must be [similar](implicit_cast.html#Similar_types "cpp/language/implicit conversion") to the element type of the array object. If ptr is anything else, including if it is a pointer obtained by the non-array form of [new-expression](new.html "cpp/language/new"), the behavior is [undefined](ub.html "cpp/language/ub").

The result of the delete-expression always has type void. 

If the object being deleted has incomplete class type at the point of deletion, and the complete class has a non-trivial destructor or a deallocation function, the behavior is undefined(until C++26)the program is ill-formed(since C++26). 

If ptr is not a null pointer and the [deallocation function](../memory/new/operator_delete.html "cpp/memory/new/operator delete") is not a destroying delete(since C++20), the delete-expression invokes the [destructor](destructor.html "cpp/language/destructor") (if any) for the object that is being destroyed, or for every element of the array being destroyed (proceeding from the last element to the first element of the array). The destructor must be [accessible](access.html "cpp/language/access") from the point where the delete-expression appears. 

After that, whether or not an exception was thrown by any destructor, the delete-expression invokes the [deallocation function](../memory/new/operator_delete.html "cpp/memory/new/operator delete"): either [operator delete](../memory/new/operator_delete.html) (first version) or [operator delete](../memory/new/operator_delete.html)[] (second version), unless the matching new-expression was combined with another new-expression(since C++14). 

The deallocation function's name is [looked up](lookup.html "cpp/language/lookup") in the scope of the dynamic type of the object pointed to by ptr, which means class-specific deallocation functions, if present, are found before the global ones. If `**::**` is present in the delete-expression, only the global namespace is examined by this lookup. In any case, any declarations other than of usual deallocation functions are discarded. 

If any deallocation function is found, the function to be called is selected as follows (see [deallocation function](../memory/new/operator_delete.html "cpp/memory/new/operator delete") for a more detailed description of these functions and their effects): 

  * If at least one of the deallocation functions is a destroying delete, all non-destroying deletes are ignored. 

| (since C++20)  
---|---  
  
  * If the type's alignment requirement exceeds `__STDCPP_DEFAULT_NEW_ALIGNMENT__`, alignment-aware deallocation functions (with a parameter of type [std::align_val_t](../memory/new/align_val_t.html "cpp/memory/new/align val t")) are preferred. For other types, the alignment-unaware deallocation functions (without a parameter of type [std::align_val_t](../memory/new/align_val_t.html "cpp/memory/new/align val t")) are preferred. 



    

  * If more than one preferred functions are found, only preferred functions are considered in the next step. 
  * If no preferred functions are found, the non-preferred ones are considered in the next step. 



  * If only one function is left, that function is selected. 

| (since C++17)  
  
  * If the deallocation functions that were found are class-specific, size-unaware class-specific deallocation function (without a parameter of type [std::size_t](../types/size_t.html "cpp/types/size t")) is preferred over size-aware class-specific deallocation function (with a parameter of type [std::size_t](../types/size_t.html "cpp/types/size t")). 



  * Otherwise, lookup reached global scope, and: 



    

  * If the type is complete and if, for the array form only, the operand is a pointer to a class type with a non-trivial destructor or a (possibly multi-dimensional) array thereof, the global size-aware global function (with a parameter of type [std::size_t](../types/size_t.html "cpp/types/size t")) is selected. 
  * Otherwise, it is unspecified whether the global size-aware deallocation function (with a parameter of type [std::size_t](../types/size_t.html "cpp/types/size t")) or the global size-unaware deallocation function (without a parameter of type [std::size_t](../types/size_t.html "cpp/types/size t")) is selected. 


| (since C++14)  
---|---  
  
The selected deallocation function must be [accessible](access.html "cpp/language/access") from the point where the delete-expression appears, unless the deallocation function is selected at the point of definition of the [dynamic type](type-id.html#Dynamic_type "cpp/language/type")’s [virtual destructor](virtual.html#Virtual_destructor "cpp/language/virtual"). 

The pointer to the block of storage to be reclaimed is passed to the [deallocation function](../memory/new/operator_delete.html "cpp/memory/new/operator delete") that was selected by the process above as the first argument. The size of the block is passed as the optional [std::size_t](../types/size_t.html "cpp/types/size t") argument. The alignment requirement is passed as the optional [std::align_val_t](../memory/new/align_val_t.html "cpp/memory/new/align val t") argument.(since C++17)

If ptr is a null pointer value, no destructors are called, and the deallocation function may or may not be called (it's unspecified), but the default deallocation functions are guaranteed to do nothing when passed a null pointer. 

If ptr is a pointer to a base class subobject of the object that was allocated with [new](new.html "cpp/language/new"), the destructor of the base class must be [virtual](virtual.html "cpp/language/virtual"), otherwise the behavior is undefined. 

### Notes

A pointer to void cannot be deleted because it is not a pointer to an object type. 

Because a pair of brackets following the keyword delete is always interpreted as the array form of a delete-expression, a [lambda-expression](lambda.html "cpp/language/lambda") with an empty capture list immediately after delete must be enclosed in parentheses. 
    
    
    // delete []{ return new int; }(); // parse error
    delete ([]{ return new int; })();  // OK

| (since C++11)  
---|---  
  
### Keywords

[`delete`](../keyword/delete.html "cpp/keyword/delete")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 288](https://cplusplus.github.io/CWG/issues/288.html) | C++98  | for the first form, the static type of the  
operand was compared with its dynamic type  | compare the static type of the object  
to be deleted with its dynamic type   
[CWG 353](https://cplusplus.github.io/CWG/issues/353.html) | C++98  | whether the deallocation function will be invoked if  
the destructor throws an exception was unspecified  | always invoked   
[CWG 599](https://cplusplus.github.io/CWG/issues/599.html) | C++98  | the first form could take a null pointer of  
any type, including function pointers  | except pointers to object types,  
all other pointer types are rejected   
[CWG 1642](https://cplusplus.github.io/CWG/issues/1642.html) | C++98  | expression could be a pointer lvalue  | not allowed   
[CWG 2474](https://cplusplus.github.io/CWG/issues/2474.html) | C++98  | deleting a pointer to an object of a similar but  
different type resulted in undefined behavior  | made well-defined   
[CWG 2624](https://cplusplus.github.io/CWG/issues/2624.html) | C++98  | pointers obtained from non-allocating  
[operator new](../memory/new/operator_new.html)[] could be passed to delete[] | prohibited   
[CWG 2758](https://cplusplus.github.io/CWG/issues/2758.html) | C++98  | it was unclear how access control was done for  
the deallocation function and the destructor  | made clear   
  
### See also

  * [new](new.html "cpp/language/new")


