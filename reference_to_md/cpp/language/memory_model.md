
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
**Memory model**  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


Defines the semantics of computer memory storage for the purpose of the C++ abstract machine. 

The memory available to a C++ program is one or more contiguous sequences of _bytes_. Each byte in memory has a unique _address_. 

## Contents

  * [1 Byte](memory_model.html#Byte)
  * [2 Memory location](memory_model.html#Memory_location)
  * [3 Defect reports](memory_model.html#Defect_reports)
  * [4 See also](memory_model.html#See_also)

  
---  
  
### Byte

A _byte_ is the smallest addressable unit of memory. It is defined as a contiguous sequence of bits, large enough to hold 

  * the value of any `UTF-8` code unit (256 distinct values) and of 



  * any member of the [basic execution character set](charset.html#Basic_execution_character_set "cpp/language/charset"). 

| (until C++23)  
---|---  
  
  * the ordinary literal encoding of any element of the [basic literal character set](charset.html#Basic_literal_character_set "cpp/language/charset"). 

| (since C++23)  
  
Similar to C, C++ supports bytes of sizes 8 bits and greater. 

The [types](types.html "cpp/language/types") char, unsigned char, and signed char use one byte for both storage and [value representation](objects.html "cpp/language/object"). The number of bits in a byte is accessible as [CHAR_BIT](../types/climits.html "cpp/types/climits") or [std::numeric_limits](../types/numeric_limits.html)<unsigned char>::digits. 

### Memory location

A _memory location_ is the storage occupied by the [object representation](objects.html#Object_representation_and_value_representation "cpp/language/object") of either an object of [scalar type](type-id.html#Scalar_type "cpp/language/type") that is not a [bit-field](bit_field.html "cpp/language/bit field"), or the largest contiguous sequence of bit-fields of non-zero length. 

Note: Various features of the language, such as [references](reference.html "cpp/language/reference") and [virtual functions](virtual.html "cpp/language/virtual"), might involve additional memory locations that are not accessible to programs but are managed by the implementation. 
    
    
    struct S
    {
        char a;     // memory location #1
        int b : 5;  // memory location #2
        int c : 11, // memory location #2 (continued)
              : 0,
            d : 8;  // memory location #3
        struct
        {
            int ee : 8; // memory location #4
        } e;
    } obj; // The object “obj” consists of 4 separate memory locations

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1953](https://cplusplus.github.io/CWG/issues/1953.html) | C++98  | objects occupying the same storage were  
considered as different memory locations  | memory location  
now refers to storage   
  
### See also

[C documentation](../../c/language/memory_model.html "c/language/memory model") for Memory model  
---
