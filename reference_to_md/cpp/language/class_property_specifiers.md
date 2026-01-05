

  
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
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
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
  


[ Classes](classes.html "cpp/language/classes")

General  
---  
[Overview](classes.html "cpp/language/classes")  
[`class`/`struct` types](class.html "cpp/language/class")  
[`union` types](union.html "cpp/language/union")  
[Injected-class-name](injected-class-name.html "cpp/language/injected-class-name")  
**Class property specifiers** (C++26)  
Members  
[Data members](data_members.html "cpp/language/data members")  
[Static members](static.html "cpp/language/static")  
[The `this` pointer](this.html "cpp/language/this")  
[Nested classes](nested_classes.html "cpp/language/nested types")  
[Member templates](member_template.html "cpp/language/member template")  
[Bit-fields](bit_field.html "cpp/language/bit field")  
[`using`-declarations](using_declaration.html "cpp/language/using declaration")  
[Member functions](member_functions.html "cpp/language/member functions")  
[Member access specifiers](access.html "cpp/language/access")  
[Constructors and member initializer lists](initializer_list.html "cpp/language/constructor")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
[`friend` specifier](friend.html "cpp/language/friend")  
[`explicit` specifier](explicit.html "cpp/language/explicit")  
[Converting constructor](converting_constructor.html "cpp/language/converting constructor")  
Special member functions  
[Default constructor](default_constructor.html "cpp/language/default constructor")  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
[Copy assignment operator](as_operator.html "cpp/language/copy assignment")  
[Move assignment operator](move_operator.html "cpp/language/move assignment") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
Inheritance  
[Base and derived classes](derived_class.html "cpp/language/derived class")  
[Empty base optimization (EBO)](ebo.html "cpp/language/ebo")  
[Virtual member functions](virtual.html "cpp/language/virtual")  
[Pure virtual functions and abstract classes](abstract_class.html "cpp/language/abstract class")  
[`override` specifier](override.html "cpp/language/override") (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


Specifies that a class is _replaceable ﻿_ (replaceable_if_eligible), _trivially relocatable ﻿_ (trivially_relocatable_if_eligible), or that a class cannot be [derived from](derived_class.html "cpp/language/derived class") (final). 

## Contents

  * [1 Syntax](class_property_specifiers.html#Syntax)
  * [2 Explanation](class_property_specifiers.html#Explanation)
    * [2.1 final specifier](class_property_specifiers.html#final_specifier)
    * [2.2 replaceable_if_eligible specifier](class_property_specifiers.html#replaceable_if_eligible_specifier)
    * [2.3 trivially_relocatable_if_eligible specifier](class_property_specifiers.html#trivially_relocatable_if_eligible_specifier)
    * [2.4 Replaceability](class_property_specifiers.html#Replaceability)
    * [2.5 Eligibility for replacement](class_property_specifiers.html#Eligibility_for_replacement)
    * [2.6 Trivial relocatability](class_property_specifiers.html#Trivial_relocatability)
    * [2.7 Eligibility for trivial relocation](class_property_specifiers.html#Eligibility_for_trivial_relocation)
    * [2.8 Default movability](class_property_specifiers.html#Default_movability)
  * [3 Keywords](class_property_specifiers.html#Keywords)
  * [4 Note](class_property_specifiers.html#Note)
  * [5 Example](class_property_specifiers.html#Example)
  * [6 References](class_property_specifiers.html#References)
  * [7 See also](class_property_specifiers.html#See_also)

  
---  
  
### Syntax

**Class property specifiers** appear at the beginning of the class definition, immediately after the name of the class, and cannot appear in a class declaration.   
  
---  
class-key attr ﻿(optional) class-head-name class-prop-specifier-seq ﻿(optional) base-clause ﻿(optional) |  |   
class-prop-specifier-seq |  \-  |  one or more class-prop-specifier ﻿s, but each can appear at most once.   
---|---|---  
class-prop-specifier |  \-  |  one of [`final`](../identifier_with_special_meaning/final.html "cpp/identifier with special meaning/final"), [`replaceable_if_eligible`](../identifier_with_special_meaning/replaceable_if_eligible.html "cpp/identifier with special meaning/replaceable if eligible") and [`trivially_relocatable_if_eligible`](../identifier_with_special_meaning/trivially_relocatable_if_eligible.html "cpp/identifier with special meaning/trivially relocatable if eligible").   
  
Before (C++26), there was the class-virt-specifier ﻿(optional) in place of class-prop-specifier-seq ﻿(optional), which only allowed the final for [`final` specifier](final.html "cpp/language/final") (since C++11). 

### Explanation

final, replaceable_if_eligible and trivially_relocatable_if_eligible are identifiers with a special meaning when used in a class head. In other contexts, it is not reserved and may be used to name objects and functions. 

#### final specifier

final specifies that this class may not appear in the base-specifier-list of another class definition (in other words, cannot be derived from). The program is ill-formed otherwise (a compile-time error is generated). final can also be used with a [union](union.html "cpp/language/union") definition, in which case it has no effect (other than on the outcome of [std::is_final](../types/is_final.html "cpp/types/is final"))(since C++14), since unions cannot be derived from. 

#### replaceable_if_eligible specifier

replaceable_if_eligible specifies that this class is [_replaceable ﻿_](class_property_specifiers.html#Replaceability) if it is [_eligible for replacement ﻿_](class_property_specifiers.html#Eligibility_for_replacement). 

#### trivially_relocatable_if_eligible specifier

trivially_relocatable_if_eligible specifies that this class is [_trivially relocatable ﻿_](class_property_specifiers.html#Trivial_relocatability) if it is [_eligible for trivial relocation ﻿_](class_property_specifiers.html#Eligibility_for_trivial_relocation). 

#### Replaceability

A class `C` is _replaceable ﻿_ if it is [_eligible for replacement ﻿_](class_property_specifiers.html#Eligibility_for_replacement) and either: 

  * has the replaceable_if_eligible class-prop-specifier
  * is a [`union`](union.html "cpp/language/union") with no user-declared [special member functions](member_functions.html#Special_member_functions "cpp/language/member functions")
  * is [_default movable ﻿_](class_property_specifiers.html#Default_movability). 



#### Eligibility for replacement

A class `C` is _eligible for replacement ﻿_ unless either: 

  * it has a [base class](derived_class.html "cpp/language/derived class") that is not a [_replaceable ﻿_](class_property_specifiers.html#Replaceability) class 
  * it has a [non-static data member](data_members.html "cpp/language/data members") that is not of a [_replaceable ﻿_](class_property_specifiers.html#Replaceability) type 
  * overload resolution fails or selects a deleted constructor when [direct-initializing](direct_initialization.html "cpp/language/direct initialization") an object of type `C` from an [xvalue](value_category.html#xvalue "cpp/language/value category") of type `C`
  * overload resolution fails or selects a deleted assignment operator function when assigning to an [lvalue](value_category.html#lvalue "cpp/language/value category") of type `C` from an [xvalue](value_category.html#xvalue "cpp/language/value category") of type `C`
  * it has a [deleted destructor](destructor.html#Deleted_destructor "cpp/language/destructor"). 



#### Trivial relocatability

A class is _trivially relocatable ﻿_ if it is [_eligible for trivial relocation ﻿_](class_property_specifiers.html#Eligibility_for_trivial_relocation) and either: 

  * has the trivially_relocatable_if_eligible class-prop-specifier
  * is a [`union`](union.html "cpp/language/union") with no user-declared [special member functions](member_functions.html#Special_member_functions "cpp/language/member functions")
  * is [_default movable ﻿_](class_property_specifiers.html#Default_movability). 



#### Eligibility for trivial relocation

A class is _eligible for trivial relocation ﻿_ unless it has either: 

  * any [virtual base classes](derived_class.html#Virtual_base_classes "cpp/language/derived class")
  * a [base class](derived_class.html "cpp/language/derived class") that is not a [_trivially relocatable ﻿_](class_property_specifiers.html#Trivial_relocatability) class 
  * a [non-static data member](data_members.html "cpp/language/data members") of an object type that is not of a [_trivially relocatable ﻿_](class_property_specifiers.html#Trivial_relocatability) type 
  * a [deleted destructor](destructor.html#Deleted_destructor "cpp/language/destructor")



except that it is implementation-defined whether an otherwise-eligible [`union`](union.html "cpp/language/union") having one or more subobjects of polymorphic class type is _eligible for trivial relocation ﻿_. 

#### Default movability

A class `C` is _default movable ﻿_ if all following conditions are met: 

  * overload resolution for [direct-initializing](direct_initialization.html "cpp/language/direct initialization") an object of type `C` from an [xvalue](value_category.html#xvalue "cpp/language/value category") of type `C` selects a constructor that is a direct member of `C` and is neither user-provided nor deleted 
  * overload resolution for assigning to an [lvalue](value_category.html#lvalue "cpp/language/value category") of type `C` from an [xvalue](value_category.html#xvalue "cpp/language/value category") of type `C` selects an assignment operator function that is a direct member of `C` and is neither user-provided nor deleted 
  * `C` has a [destructor](destructor.html "cpp/language/destructor") that is neither user-provided nor deleted. 



### Keywords

[`final`](../identifier_with_special_meaning/final.html "cpp/identifier with special meaning/final"), [`replaceable_if_eligible`](../identifier_with_special_meaning/replaceable_if_eligible.html "cpp/identifier with special meaning/replaceable if eligible"), [`trivially_relocatable_if_eligible`](../identifier_with_special_meaning/trivially_relocatable_if_eligible.html "cpp/identifier with special meaning/trivially relocatable if eligible"). 

### Note

  * Not all [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") classes are _replaceable ﻿_ or [_trivially relocatable ﻿_](class_property_specifiers.html#Trivial_relocatability). 
  * [Accessibility](access.html "cpp/language/access") of the [special member functions](member_functions.html#Special_member_functions "cpp/language/member functions") is not considered when establishing [_trivial relocatability ﻿_](class_property_specifiers.html#Trivial_relocatability) or [_replaceability ﻿_](class_property_specifiers.html#Replaceability). 
  * A class with const-qualified or reference [non-static data members](data_members.html "cpp/language/data members") can be [_trivially relocatable ﻿_](class_property_specifiers.html#Trivial_relocatability). 
  * [`union`s](union.html "cpp/language/union") with no user-declared [special member functions](member_functions.html#Special_member_functions "cpp/language/member functions") and [_default movable ﻿_](class_property_specifiers.html#Default_movability) classes are both [_replaceable ﻿_](class_property_specifiers.html#Replaceability) and [_trivially relocatable ﻿_](class_property_specifiers.html#Trivial_relocatability), even when defined without class property specifiers. 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_trivial_relocatability`](../experimental/feature_test.html#cpp_trivial_relocatability "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_trivial_relocatability_202502L "cpp/compiler support/26") | (C++26) | [Trivial relocatability](class_property_specifiers.html#Trivial_relocatability)  
  
### Example

Run this code
    
    
    struct final;      // OK; declares a class named 'final',
                       // does not use class property specifiers.
    struct IF final;   // Ill-formed: class property specifiers
                       // cannot appear at function declaration.
    struct F final {}; // OK; specifier marks class F as non-derivable.
    struct D: F {};    // Ill-formed: class F cannot be derived from.
     
    // OK; specifier marks class R as 𝘳𝘦𝘱𝘭𝘢𝘤𝘦𝘢𝘣𝘭𝘦 if eligible.
    struct R replaceable_if_eligible {};
     
    // OK; specifier marks class T as 𝘵𝘳𝘪𝘷𝘪𝘢𝘭𝘭𝘺 𝘳𝘦𝘭𝘰𝘤𝘢𝘵𝘢𝘣𝘭𝘦 if eligible.
    struct T trivially_relocatable_if_eligible {};
     
    // OK; a class can be marked with multiple class property specifiers.
    struct FRT final replaceable_if_eligible trivially_relocatable_if_eligible {};
     
    // Ill-formed: each class property specifier can appear at most once.
    struct FRF final replaceable_if_eligible final {};
     
    int main() {}

### References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * 6.8.1 Trivially relocatable and replaceable types [basic.types.general] 



### See also

[`final` specifier](final.html "cpp/language/final") (C++11) |  declares that a method cannot be overridden or a class be derived from  
---|---  
[ is_final](../types/is_final.html "cpp/types/is final")(C++14) |  checks if a type is a final class type   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
