[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[C++ language](../language.html "cpp/language")

General topics  
---  
| [Preprocessor](../preprocessor.html "cpp/preprocessor")  
---  
[Comments](../comments.html "cpp/comment")  
  
| [Keywords](../keywords.html "cpp/keyword")  
---  
[Escape sequences](escape.html "cpp/language/escape")  
  
[Flow control](statements.html "cpp/language/statements")  
Conditional execution statements  
| [`if`](if.html "cpp/language/if")  
---  
  
| [`switch`](switch.html "cpp/language/switch")  
---  
  
Iteration statements (loops)  
| [`for`](for.html "cpp/language/for")  
---  
[range-`for`](range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](while.html "cpp/language/while")  
---  
[`do-while`](do.html "cpp/language/do")  
  
Jump statements  
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
---  
  
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
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](storage_duration.html "cpp/language/storage duration")  
[Initialization](initialization.html "cpp/language/initialization")  
| [Default-initialization](default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](value_initialization.html "cpp/language/value initialization")  
[Zero-initialization](zero_initialization.html "cpp/language/zero initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
  
  
  
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
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
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
  
| [`delete` expression](delete.html "cpp/language/delete")  
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
  


[ Classes](classes.html "cpp/language/classes")

General  
---  
[Overview](classes.html "cpp/language/classes")  
[`class`/`struct` types](class.html "cpp/language/class")  
[`union` types](union.html "cpp/language/union")  
[Injected-class-name](injected-class-name.html "cpp/language/injected-class-name")  
[Class property specifiers](class_property_specifiers.html "cpp/language/class property specifiers") (C++26)  
Members  
[Data members](data_members.html "cpp/language/data members")  
[Static members](static.html "cpp/language/static")  
[The `this` pointer](this.html "cpp/language/this")  
[Nested classes](nested_classes.html "cpp/language/nested types")  
[Member templates](member_template.html "cpp/language/member template")  
**Bit-fields**  
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
  


Declares a class data member with explicit size, in bits. Adjacent bit-field members may (or may not) be packed to share and straddle the individual bytes. 

A bit-field declaration is a [class data member declaration](data_members.html "cpp/language/data members") which uses the following declarator:   
  
---  
identifier ﻿(optional) attr ﻿(optional) `**:**` size |  (1)  |   
identifier ﻿(optional) attr ﻿(optional) `**:**` size brace-or-equal-initializer |  (2)  |  (since C++20)  
  
The _type_ of the bit-field is introduced by the decl-specifier-seq of the [declaration syntax](declarations.html "cpp/language/declarations"). 

attr |  \-  |  (since C++11) sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
identifier |  \-  |  the name of the bit-field that is being declared. The name is optional: unnamed bit-fields introduce the specified number of [padding bits](objects.html#Object_representation_and_value_representation "cpp/language/object").   
size |  \-  |  an [integral constant expression](constant_expression.html#Integral_constant_expression "cpp/language/constant expression") with a value greater or equal to zero. When greater than zero, this is the number of bits that this bit-field will occupy. The value zero is only allowed for nameless bit-fields and has [special meaning](bit_field.html#zero_size).   
brace-or-equal-initializer |  \-  |  [default member initializer](data_members.html#Member_initialization "cpp/language/data members") to be used with this bit-field   
  
## Contents

  * [1 Explanation](bit_field.html#Explanation)
  * [2 Notes](bit_field.html#Notes)
  * [3 Defect reports](bit_field.html#Defect_reports)
  * [4 References](bit_field.html#References)
  * [5 See also](bit_field.html#See_also)

  
---  
  
### Explanation

The type of a bit-field can only be integral (including bool) or (possibly cv-qualified) enumeration type, an unnamed bit-field cannot be declared with a cv-qualified type. 

A bit-field cannot be a [static data member](static.html "cpp/language/static"). 

There are no bit-field [prvalues](value_category.html "cpp/language/value category"): lvalue-to-rvalue conversion always produces an object of the underlying type of the bit-field. 

The number of bits in a bit-field sets the limit to the range of values it can hold: 

Run this code
    
    
    #include <iostream>
     
    struct S
    {
        // three-bit unsigned field, allowed values are 0...7
        unsigned int b : 3;
    };
     
    int main()
    {
        S s = {6};
     
        ++s.b; // store the value 7 in the bit-field
        [std::cout](../io/cout.html) << s.b << '\n';
     
        ++s.b; // the value 8 does not fit in this bit-field
        [std::cout](../io/cout.html) << s.b << '\n'; // formally implementation-defined, typically 0
    }

Possible output: 
    
    
    7
    0

Multiple adjacent bit-fields are usually packed together (although this behavior is implementation-defined): 

Run this code
    
    
    #include <bit>
    #include <cstdint>
    #include <iostream>
     
    struct S
    {
        // will usually occupy 2 bytes:
        unsigned char b1 : 3; // 1st 3 bits (in 1st byte) are b1
        unsigned char    : 2; // next 2 bits (in 1st byte) are blocked out as unused
        unsigned char b2 : 6; // 6 bits for b2 - doesn't fit into the 1st byte => starts a 2nd
        unsigned char b3 : 2; // 2 bits for b3 - next (and final) bits in the 2nd byte
    };
     
    int main()
    {
        [std::cout](../io/cout.html) << sizeof(S) << '\n'; // usually prints 2
     
        S s;
        // set distinguishable field values
        s.b1 = 0b111;
        s.b2 = 0b101111;
        s.b3 = 0b11;
     
        // show layout of fields in S
        auto i = [std::bit_cast](../numeric/bit_cast.html)<[std::uint16_t](../types/integer.html)>(s);
        // usually prints 1110000011110111
        // breakdown is:  └┬┘├┘└┬┘└─┬──┘└┤
        //                b1 u  a   b2  b3
        // where “u” marks the unused :2 specified in the struct, and
        // “a” marks compiler-added padding to byte-align the next field.
        // Byte-alignment is happening because b2's type is declared unsigned char;
        // if b2 were declared uint16_t there would be no “a”, b2 would abut “u”.
        for (auto b = i; b; b >>= 1) // print LSB-first
            [std::cout](../io/cout.html) << (b & 1);
        [std::cout](../io/cout.html) << '\n';
    }

Possible output: 
    
    
    2
    1110000011110111

The special unnamed bit-field of size zero can be forced to break up padding. It specifies that the next bit-field begins at the beginning of its allocation unit: 

Run this code
    
    
    #include <iostream>
     
    struct S
    {
        // will usually occupy 2 bytes:
        // 3 bits: value of b1
        // 5 bits: unused
        // 2 bits: value of b2
        // 6 bits: unused
        unsigned char b1 : 3;
        unsigned char :0; // start a new byte
        unsigned char b2 : 2;
    };
     
    int main()
    {
        [std::cout](../io/cout.html) << sizeof(S) << '\n'; // usually prints 2
                                        // would usually print 1 if not for
                                        // the padding break in line 11
    }

Possible output: 
    
    
    2

If the specified size of the bit-field is greater than the size of its type, the value is limited by the type: a [std::uint8_t](../types/integer.html) b : 1000; would still hold values in the range `[`​0​`, `255`]`. The extra bits are [padding bits](objects.html#Object_representation_and_value_representation "cpp/language/object"). 

Because bit-fields do not necessarily begin at the beginning of a byte, address of a bit-field cannot be taken. Pointers and non-const references to bit-fields are not possible. When [initializing a const reference](reference_initialization.html "cpp/language/reference initialization") from a bit-field, a temporary is created (its type is the type of the bit-field), copy initialized with the value of the bit-field, and the reference is bound to that temporary. 

There are no [default member initializers](data_members.html#Member_initialization "cpp/language/data members") for bit-fields: int b : 1 = 0; and int b : 1 {0} are ill-formed.  | (until C++20)  
---|---  
In case of ambiguity between the size of the bit-field and the default member initializer, the longest sequence of tokens that forms a valid size is chosen: 
    
    
    int a;
    const int b = 0;
     
    struct S
    {
        // simple cases
        int x1 : 8 = 42; // OK; "= 42" is brace-or-equal-initializer
        int x2 : 8 {42}; // OK; "{42}" is brace-or-equal-initializer
     
        // ambiguities
        int y1 : true ? 8 : a = 42;   // OK; brace-or-equal-initializer is absent
        int y2 : true ? 8 : b = 42;   // error: cannot assign to const int
        int y3 : (true ? 8 : b) = 42; // OK; "= 42" is brace-or-equal-initializer
        int z : 1 || new int{0};      // OK; brace-or-equal-initializer is absent
    };

| (since C++20)  
  
### Notes

The following properties of bit-fields are _implementation-defined_ : 

  * The value that results from assigning or initializing a signed bit-field with a value out of range, or from incrementing a signed bit-field past its range. 
  * Everything about the actual allocation details of bit-fields within the class object. 



    

  * For example, on some platforms, bit-fields don't straddle bytes, on others they do. 
  * Also, on some platforms, bit-fields are packed left-to-right, on others right-to-left. 



In the C programming language, the width of a bit-field cannot exceed the width of the underlying type, and whether int bit-fields that are not explicitly signed or unsigned are signed or unsigned is implementation-defined. For example, int b : 3; may have the range of values `[`​0​`, `7`]` or `[`-4`, `3`]` in C, but only the latter choice is allowed in C++. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 324](https://cplusplus.github.io/CWG/issues/324.html) | C++98  | it was unspecified whether the return value  
of an assignment to a bit-field is a bit-field  | added bit-field specifications for  
operators which may return lvalues   
[CWG 739](https://cplusplus.github.io/CWG/issues/739.html) | C++98  | signedness of bit-fields that are neither declared  
signed nor unsigned were implementation-defined  | consistent with underlying types   
[CWG 2229](https://cplusplus.github.io/CWG/issues/2229.html) | C++98  | unnamed bit-fields could be declared with a cv-qualified type  | prohibited   
[CWG 2511](https://cplusplus.github.io/CWG/issues/2511.html) | C++98  | cv-qualifications were not allowed in bit-field types  | bit-fields can have cv-qualified  
enumeration types   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 11.4.10 Bit-fields [class.bit] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 11.4.9 Bit-fields [class.bit] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 12.2.4 Bit-fields [class.bit] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 9.6 Bit-fields [class.bit] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 9.6 Bit-fields [class.bit] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 9.6 Bit-fields [class.bit] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 9.6 Bit-fields [class.bit] 



### See also

[ bitset](../utility/bitset.html "cpp/utility/bitset") |  implements constant length bit array   
(class template)   
---|---  
[ vector<bool>](../container/vector_bool.html "cpp/container/vector bool") |  space-efficient dynamic bitset   
(class template specialization)   
[**Bit manipulation**](../utility/bit.html "cpp/utility/bit") (C++20) |  utilities to access, manipulate, and process individual bits and bit sequences   
[C documentation](../../c/language/bit_field.html "c/language/bit field") for Bit-fields
