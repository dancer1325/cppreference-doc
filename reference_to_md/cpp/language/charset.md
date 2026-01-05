
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
**Character sets and encodings**  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


This page describes several character sets specified by the C++ standard. 

| 

## Contents

  * [1 Translation character set](charset.html#Translation_character_set)
  * [2 Basic character set](charset.html#Basic_character_set)
  * [3 Basic literal character set](charset.html#Basic_literal_character_set)
  * [4 Execution character set](charset.html#Execution_character_set)
  * [5 Code unit and literal encoding](charset.html#Code_unit_and_literal_encoding)
  * [6 Notes](charset.html#Notes)
  * [7 Defect reports](charset.html#Defect_reports)
  * [8 See also](charset.html#See_also)

  
---  
  
###  Translation character set

The _translation character set_ consists of the following elements: 

  * each abstract character assigned a code point in the [Unicode](https://www.unicode.org/versions/latest/) codespace, and 
  * a distinct character for each Unicode scalar value not assigned to an abstract character. 



The translation character set is a superset of the basic character set and the basic literal character set (see below). 

(since C++23)  
  
### Basic character set

The _basic character set_ consists of the following 96(until C++26)99(since C++26) characters: 

Code point | Character | Glyph   
---|---|---  
U+0009 | Character tabulation |   
U+000B | Line tabulation |   
U+000C | Form feed (FF) |   
U+0020 | Space |   
U+000A | Line feed (LF) | new-line   
U+0021 | Exclamation mark | `**!**`  
U+0022 | Quotation mark | `**"**`  
U+0023 | Number sign | `**#**`  
U+0025 | Percent sign | `**%**`  
U+0026 | Ampersand | `**&**`  
U+0027 | Apostrophe | `**'**`  
U+0028 | Left parenthesis | `**(**`  
U+0029 | Right parenthesis | `**)**`  
U+002A | Asterisk | `*****`  
U+002B | Plus sign | `**+**`  
U+002C | Comma | `**,**`  
U+002D | Hyphen-minus | `**-**`  
U+002E | Full stop | `**.**`  
U+002F | Solidus | `**/**`  
U+0030 .. U+0039 | Digit zero .. nine | `**0 1 2 3 4 5 6 7 8 9**`  
U+003A | Colon | `**:**`  
U+003B | Semicolon | `**;**`  
U+003C | Less-than sign | `**<**`  
U+003D | Equals sign | `**=**`  
U+003E | Greater-than sign | `**>**`  
U+003F | Question mark | `**?**`  
U+0041 .. U+005A | Latin capital letter A .. Z | `**A B C D E F G H I J K L M**` `**N O P Q R S T U V W X Y Z**`  
U+005B | Left square bracket | `**[**`  
U+005C | Reverse solidus | `**\**`  
U+005D | Right square bracket | `**]**`  
U+005E | Circumflex accent | `**^**`  
U+005F | Low line | `**_**`  
U+0061 .. U+007A | Latin small letter a .. z | `**a b c d e f g h i j k l m**` `**n o p q r s t u v w x y z**`  
U+007B | Left curly bracket | `**{**`  
U+007C | Vertical line | `**|**`  
U+007D | Right curly bracket | `**}**`  
U+007E | Tilde | `**~**`  
The following characters are added to the basic character set since C++26:  |  Code point | Character | Glyph   
---|---|---  
U+0024 | Dollar Sign | `**$**`  
U+0040 | Commercial At | `**@**`  
U+0060 | Grave Accent | `**`**`  
(since C++26)  
  
### Basic literal character set

The _basic literal character set_ consists of all characters of the basic character set, plus the following control characters: 

Code point | Character   
---|---  
U+0000 | Null   
U+0007 | Bell   
U+0008 | Backspace   
U+000D | Carriage return (CR)   
  
### Execution character set

The execution character set and the execution wide-character set are supersets of the basic literal character set. The encodings of the execution character sets and the sets of additional elements (if any) are locale-specific. Each element of execution wide-character set must be representable as a distinct wchar_t code unit. 

### Code unit and literal encoding

A _code unit_ is an integer value of character type. Characters in a [character literal](character_literal.html "cpp/language/character literal") other than a multicharacter or non-encodable character literal or in a [string literal](string_literal.html "cpp/language/string literal") are encoded as a sequence of one or more code units, as determined by the encoding prefix; this is termed the respective _literal encoding_. 

A literal encoding or a locale-specific encoding of one of the execution character sets encodes each element of the basic literal character set as a single code unit with non-negative value, distinct from the code unit for any other such element. A character not in the basic literal character set can be encoded with more than one code unit; the value of such a code unit can be the same as that of a code unit for an element of the basic literal character set. The encodings of the execution character sets can be unrelated to any literal encoding. 

The ordinary literal encoding is the encoding applied to an ordinary character or string literal. The wide literal encoding is the encoding applied to a wide character or string literal. 

The U+0000 NULL character is encoded as the value 0. No other element of the translation character set is encoded with a code unit of value 0. The code unit value of each decimal digit character after the digit 0 (U+0030) shall be one greater than the value of the previous. The ordinary and wide literal encodings are otherwise implementation-defined. 

For a UTF-8, UTF-16, or UTF-32 literal, the UCS scalar value corresponding to each character of the translation character set is encoded as specified in ISO/IEC 10646 for the respective UCS encoding form. 

### Notes

The standard names of some character sets are changed in C++23 via [P2314R4](https://wg21.link/P2314R4). 

New name(s) | Old name(s)   
---|---  
basic character set | basic source character set   
basic literal character set | basic execution character set  
basic execution wide-character set   
  
Mapping from source file (other than a UTF-8 source file)(since C++23) characters to the basic character set(until C++23)translation character set(since C++23) during [translation phase 1](translation_phases.html#Phase1 "cpp/language/translation phases") is implementation-defined, so an implementation is required to document how the basic source characters are represented in source files. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 788](https://cplusplus.github.io/CWG/issues/788.html) | C++98  | the values of the members of the execution character sets  
were implementation-defined, but were not locale-specific  | they are locale-specific   
[CWG 1796](https://cplusplus.github.io/CWG/issues/1796.html) | C++98  | the representation of the null (wide) character in  
basic execution (wide-)character set had all zero bits  | only required value to be zero   
  
### See also

[ASCII chart](ascii.html "cpp/language/ascii")  
---  
[C documentation](../../c/language/charset.html "c/language/charset") for Character sets and encodings
