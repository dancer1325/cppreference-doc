# `const` & `volatile` (`cv`) type qualifiers

* ALLOWED |
  * any type [specifier](declarations.md#specifiers),
    * ALSO [`decl-specifier-seq`](declarations.md) 

* `const`
  * == constant

* `volatile`
  * == volatile

## Contents

  * [1 Explanation](cv.html#Explanation)
    * [1.1 const and volatile objects](cv.html#const_and_volatile_objects)
  * [2 mutable specifier](cv.html#mutable_specifier)
  * [3 Conversions](cv.html#Conversions)
  * [4 Notes](cv.html#Notes)
  * [5 Keywords](cv.html#Keywords)
  * [6 Example](cv.html#Example)
  * [7 Defect reports](cv.html#Defect_reports)
  * [8 See also](cv.html#See_also)
  
### Explanation

Any (possibly [incomplete](type-id.html#Incomplete_type "cpp/language/type")) type other than [function type](functions.html "cpp/language/functions") or [reference type](reference.html "cpp/language/reference") is a type in a group of the following four distinct but related types: 

  * A _cv-unqualified_ version. 
  * A _const-qualified_ version. 
  * A _volatile-qualified_ version. 
  * A _const-volatile-qualified_ version. 



These four types in the same group have the same [representation](objects.html#Object_representation_and_value_representation "cpp/language/object") and [alignment](objects.html#Alignment "cpp/language/object") requirements. 

[Array types](array.html "cpp/language/array") are considered to have the same cv-qualification as their element types. 

#### const and volatile objects

When an object is first created, the cv-qualifiers used (which could be part of decl-specifier-seq or part of a declarator in a [declaration](declarations.html "cpp/language/declarations"), or part of type-id in a [new-expression](new.html "cpp/language/new")) determine the constness or volatility of the object, as follows: 

  * A _const object_ is 



    

  * an object whose type is const-qualified, or 
  * a non-[mutable](cv.html#mutable) subobject of a const object. 


     Such object cannot be modified: attempt to do so directly is a compile-time error, and attempt to do so indirectly (e.g., by modifying the const object through a reference or pointer to non-const type) results in undefined behavior. 

  * A _volatile object_ is 



    

  * an object whose type is volatile-qualified, 
  * a subobject of a volatile object, or 
  * a [mutable](cv.html#mutable) subobject of a const-volatile object. 


     Every access (read or write operation, member function call, etc.) made through a glvalue expression of volatile-qualified type is treated as a visible side-effect for the [purposes of optimization](as_if.html "cpp/language/as if") (that is, within a single thread of execution, volatile accesses cannot be optimized out or reordered with another visible side effect that is [sequenced-before](eval_order.html "cpp/language/eval order") or sequenced-after the volatile access. This makes volatile objects suitable for communication with a [signal handler](../utility/program/signal.html "cpp/utility/program/signal"), but not with another thread of execution, see [std::memory_order](../atomic/memory_order.html "cpp/atomic/memory order")). Any attempt to access a volatile object through a [glvalue](value_category.html#glvalue "cpp/language/value category") of non-volatile type (e.g. through a reference or pointer to non-volatile type) results in undefined behavior. 

  * A _const volatile object_ is 



    

  * an object whose type is const-volatile-qualified, 
  * a non-[mutable](cv.html#mutable) subobject of a const volatile object, 
  * a const subobject of a volatile object, or 
  * a non-[mutable](cv.html#mutable) volatile subobject of a const object. 


     Behaves as both a const object and as a volatile object. 

Each cv-qualifier (const and volatile) can appear at most once in any cv-qualifier sequence. For example, const const and volatile const volatile are not valid cv-qualifier sequences. 

### `mutable` specifier

  * mutable \- permits modification of the class member declared mutable even if the containing object is declared const (i.e., the class member is mutable). 



May appear in the declaration of a non-static [class members](data_members.html "cpp/language/data members") of non-reference non-const type: 
    
    
    class X
    {
        mutable const int* p; // OK
        mutable int* const q; // ill-formed
        mutable int&       r; // ill-formed
    };

mutable is used to specify that the member does not affect the externally visible state of the class (as often used for mutexes, memo caches, lazy evaluation, and access instrumentation). 
    
    
    class ThreadsafeCounter
    {
        mutable [std::mutex](../thread/mutex.html) m; // The "M&M rule": mutable and mutex go together
        int data = 0;
    public:
        int get() const
        {
            [std::lock_guard](../thread/lock_guard.html)<[std::mutex](../thread/mutex.html)> lk(m);
            return data;
        }
     
        void inc()
        {
            [std::lock_guard](../thread/lock_guard.html)<[std::mutex](../thread/mutex.html)> lk(m);
            ++data;
        }
    };

### Conversions

There is partial ordering of cv-qualifiers by the order of increasing restrictions. The type can be said _more_ or _less_ cv-qualified than: 

  * _unqualified_ < const
  * _unqualified_ < volatile
  * _unqualified_ < const volatile
  * const < const volatile
  * volatile < const volatile



References and pointers to cv-qualified types can be implicitly converted to references and pointers to more cv-qualified types, see [qualification conversions](implicit_cast.html#Qualification_conversions "cpp/language/implicit cast") for details. 

To convert a reference or a pointer to a cv-qualified type to a reference or pointer to a less cv-qualified type, [`const_cast`](const_cast.html "cpp/language/const cast") must be used. 

### Notes

The const qualifier used on a declaration of a non-local non-volatile non-[template](variable_template.html "cpp/language/variable template")(since C++14)non-[inline](inline.html "cpp/language/inline")(since C++17) variable that is not declared extern gives it [internal linkage](storage_duration.html#Linkage "cpp/language/storage duration"). This is different from C where const file scope variables have external linkage. 

The C++ language grammar treats mutable as a [storage-class-specifier](storage_duration.html "cpp/language/storage duration"), rather than a type qualifier, but it does not affect storage class or linkage. 

Some uses of volatile are deprecated: 

  * lvalue of volatile type as operand of built-in [increment/decrement](operator_incdec.html "cpp/language/operator incdec") operators; 
  * lvalue of volatile type as left operand of built-in [direct assignment](operator_assignment.html "cpp/language/operator assignment"), unless the direct assignment expression appears in an [unevaluated context](expressions.html#Unevaluated_expressions "cpp/language/expressions") or is a [discarded-value expression](expressions.html#Discarded-value_expressions "cpp/language/expressions"); 
  * volatile object type as function parameter type or return type; 
  * volatile qualifier in [structured binding](structured_binding.html "cpp/language/structured binding") declaration. 

| (since C++20)  
---|---  
  
### Keywords

[`const`](../keyword/const.html "cpp/keyword/const"), [`volatile`](../keyword/volatile.html "cpp/keyword/volatile"), [`mutable`](../keyword/mutable.html "cpp/keyword/mutable")


### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1428](https://cplusplus.github.io/CWG/issues/1428.html) | C++98  | the definition of 'const object' was based on declaration  | based on object type   
[CWG 1528](https://cplusplus.github.io/CWG/issues/1528.html) | C++98  | there was no requirement on the number of occurrences  
of each cv-qualifier in the same cv-qualifier sequence  | at most once for  
each cv-qualifier   
[CWG 1799](https://cplusplus.github.io/CWG/issues/1799.html) | C++98  | mutable could be applied to data members not declared  
const, but the members' types may still be const-qualified  | cannot apply mutable to data  
members of const-qualified types   
  
### See also

* [C `const` qualifier](../../c/language/const.html "c/language/const")
* [C `volatile` qualifier](../../c/language/volatile.html "c/language/volatile")
