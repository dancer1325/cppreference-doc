* compiler
  * 👀processes C++ source files -- to -- produce C++ programs 👀

## Contents

  * [1 Translation process](translation_phases.html#Translation_process)
  * [2 Preprocessing tokens](translation_phases.html#Preprocessing_tokens)
    * [2.1 Preprocessing numbers](translation_phases.html#Preprocessing_numbers)
    * [2.2 Whitespace](translation_phases.html#Whitespace)
    * [2.3 Maximal munch](translation_phases.html#Maximal_munch)
  * [3 Tokens](translation_phases.html#Tokens)
  * [4 Translation phases](translation_phases.html#Translation_phases)
    * [4.1 Phase 1: Mapping source characters](translation_phases.html#Phase_1:_Mapping_source_characters)
    * [4.2 Phase 2: Splicing lines](translation_phases.html#Phase_2:_Splicing_lines)
    * [4.3 Phase 3: Lexing](translation_phases.html#Phase_3:_Lexing)
    * [4.4 Phase 4: Preprocessing](translation_phases.html#Phase_4:_Preprocessing)
    * [4.5 Phase 5: Determining common string literal encodings](translation_phases.html#Phase_5:_Determining_common_string_literal_encodings)
    * [4.6 Phase 6: Concatenating string literals](translation_phases.html#Phase_6:_Concatenating_string_literals)
    * [4.7 Phase 7: Compiling](translation_phases.html#Phase_7:_Compiling)
    * [4.8 Phase 8: Instantiating templates](translation_phases.html#Phase_8:_Instantiating_templates)
    * [4.9 Phase 9: Linking](translation_phases.html#Phase_9:_Linking)
  * [5 Notes](translation_phases.html#Notes)
  * [6 Defect reports](translation_phases.html#Defect_reports)
  * [7 References](translation_phases.html#References)
  * [8 See also](translation_phases.html#See_also)

### Translation process

* _source files_
  * := units | keep the text of a C++ program  

* _translation unit_
  * == C++ _source files_ / undergo a _translation_
    * _translation_ == steps
      1. Maps EACH source file -- to a -- character sequence 
      2. Converts EACH character sequence -- to a -- preprocessing token sequence / separated by whitespace 
      3. Converts EACH preprocessing token -- to a -- token / form a token sequence
      4. Converts EACH token sequence -- to a -- translation unit 
  * MULTIPLE translation units communicate -- with -- each other
    * ways to communicate
      * symbols / external linkage
      * data files 

* translated translation units & instantiated units 
  * can be saved
    * individually OR
    * | library

*  C++ program
  * (can be) 💡== translated translation units💡
    * way
      * translate separately
      * link the translated translation units

### Preprocessing tokens

A _preprocessing token_ is the minimal lexical element of the language in translation phases 3 through 6. 

The categories of preprocessing token are: 

  * [header names](../preprocessor/include.html "cpp/preprocessor/include") (such as <iostream> or "myfile.h") 



  * placeholder tokens produced by preprocessing [import and module directives](modules.html "cpp/language/modules") (i.e. import XXX; and module XXX;) 

| (since C++20)  
---|---  
  
  * [identifiers](name.html "cpp/language/identifiers")
  * preprocessing numbers (see below) 
  * [character literals](character_literal.html "cpp/language/character literal"), including [user-defined](user_literal.html "cpp/language/user literal") character literals(since C++11)
  * [string literals](string_literal.html "cpp/language/string literal"), including [user-defined](user_literal.html "cpp/language/user literal") string literals(since C++11)
  * [operators and punctuators](punctuators.html "cpp/language/punctuators"), including [alternative tokens](operator_alternative.html "cpp/language/operator alternative")
  * individual non-whitespace characters that do not fit in any other category 



     The program is ill-formed if the character matching this category is 

  * apostrophe (', U+0027), 
  * quotation mark (", U+0022), or 
  * a character not in the [basic character set](charset.html "cpp/language/charset"). 



#### Preprocessing numbers

The set of preprocessing tokens of preprocessing number is a superset of the union of the sets of tokens of [integer literals](integer_literal.html "cpp/language/integer literal") and [floating-point literals](floating_literal.html "cpp/language/floating literal"):   
  

`**.**`(optional) digit pp-continue-seq ﻿(optional) |  |   
digit |  \-  |  one of digits 0-9   
---|---|---  
pp-continue-seq |  \-  |  a sequence of pp-continue ﻿s   
  
Each pp-continue is one of the following:   
  

identifier-continue |  (1)  |   
exp-char sign-char |  (2)  |   
`**.**` |  (3)  |   
`**’**` digit |  (4)  |  (since C++14)  
`**’**` nondigit |  (5)  |  (since C++14)  
identifier-continue |  \-  |  any non-first character of a valid [identifier](name.html "cpp/language/identifiers")  
---|---|---  
exp-char |  \-  |  one of `**P**`, `**p**`,(since C++11) `**E**` and `**e**`  
sign-char |  \-  |  one of `**+**` and `**-**`  
digit |  \-  |  one of digits 0-9   
nondigit |  \-  |  one of Latin letters A/a-Z/z and underscore   
  
A preprocessing number does not have a type or a value; it acquires both after a successful conversion an integer/floating-point literal token. 

#### Whitespace

_Whitespace_ consists of [comments](../comments.html "cpp/comment"), whitespace characters, or both. 

The following characters are whitespace characters: 

  * character tabulation (U+0009) 
  * line feed / new-line character (U+000A) 
  * line tabulation (U+000B) 
  * form feed (U+000C) 
  * space (U+0020) 



Whitespace is usually used to separate preprocessing tokens, with the following exceptions: 

  * It is not a separator in header name, character literal and string literal. 
  * Preprocessing tokens separated by whitespace containing new-line characters cannot form [preprocessing directives](../preprocessor.html "cpp/preprocessor"). 


    
    
    #include "my header"        // OK, using a header name containing whitespace
     
    #include/*hello*/<iostream> // OK, using a comment as whitespace
     
    #include
    <iostream> // Error: #include cannot span across multiple lines
     
    "str ing"  // OK, a single preprocessing token (string literal)
    ' '        // OK, a single preprocessing token (character literal)

#### Maximal munch

The maximal munch is the rule used in phase 3 when decomposing the source file into preprocessing tokens. 

If the input has been parsed into preprocessing tokens up to a given character (otherwise, the next preprocessing token will not be parsed, which makes the parsing order unique), the next preprocessing token is generally taken to be the longest sequence of characters that could constitute a preprocessing token, even if that would cause subsequent analysis to fail. This is commonly known as _maximal munch_. 
    
    
    int foo = 1;
    int bar = 0xE+foo;   // Error: invalid preprocessing number 0xE+foo
    int baz = 0xE + foo; // OK

In other words, the maximal munch rule is in favor of [multi-character operators and punctuators](punctuators.html#Multi-character_operators_and_punctuators "cpp/language/punctuators"): 
    
    
    int foo = 1;
    int bar = 2;
     
    int num1 = foo+++++bar; // Error: treated as “foo++ ++ +baz”, not “foo++ + ++baz”
    int num2 = -----foo;    // Error: treated as “-- -- -foo”, not “- -- --foo”

The maximal munch rule has the following exceptions: 

  * Header name preprocessing tokens are only formed in the following cases: 



    

  * after the include preprocessing token in an [#include](../preprocessor/include.html "cpp/preprocessor/include") directive 



    

  * in a [`__has_include`](../preprocessor/include.html "cpp/preprocessor/include") expression 


| (since C++17)  
---|---  
  
    

  * after the import preprocessing token in an [import](modules.html#Syntax "cpp/language/modules") directive 


| (since C++20)  
      
    
    [std::vector](../container/vector.html)<int> x; // OK, “int” is not a header name

  * If the next three characters are <:: and the subsequent character is neither : nor >, the < is treated as a preprocessing token by itself instead of the first character of the [alternative token](operator_alternative.html "cpp/language/operator alternative") <:. 


    
    
    struct Foo { static const int v = 1; };
    [std::vector](../container/vector.html)<::Foo> x;  // OK, <: not taken as the alternative token for [
    extern int y<::>;      // OK, same as “extern int y[];”
    int z<:::Foo::value:>; // OK, same as “int z[::Foo::value];”

  * If the next two characters are >> and one of the > character can complete a [template identifier](templates.html#Template_identifiers "cpp/language/templates"), the character is treated as a preprocessing token alone instead of being part of the preprocessing token >>. 


    
    
    template<int i> class X { /* ... */ };
    template<class T> class Y { /* ... */ };
     
    Y<X<1>> x3;      // OK, declares a variable “x3” of type “Y<X<1> >”
    Y<X<6>>1>> x4;   // Syntax error
    Y<X<(6>>1)>> x5; // OK

  * If the next character begins a sequence of characters that could be the prefix and initial double quote of a [raw string literal](string_literal.html#Raw_string_literals "cpp/language/string literal"), the next preprocessing token is a raw string literal. The literal consists of the shortest sequence of characters that matches the raw-string pattern. 


    
    
    #define R "x"
    const char* s = R"y";         // ill-formed raw string literal, not "x" "y"
    const char* s2 = R"(a)" "b)"; // a raw string literal followed by a normal string literal

| (since C++11)  
---|---  
  
### Tokens

A _token_ is the minimal lexical element of the language in translation phase 7. 

The categories of token are: 

  * [identifiers](name.html "cpp/language/identifiers")
  * [keywords](../keywords.html "cpp/keyword")
  * [literals](expressions.html#Literals "cpp/language/expressions")
  * [operators and punctuators](punctuators.html "cpp/language/punctuators") (except preprocessing operators) 



### Translation phases

Translation is performed [as if](as_if.html "cpp/language/as if") in the order from phase 1 to phase 9. Implementations behave as if these separate phases occur, although in practice different phases can be folded together. 

#### Phase 1: Mapping source characters

1) The individual bytes of the source code file are mapped (in implementation-defined manner) to the characters of the [basic source character set](charset.html#Basic_source_character_set "cpp/language/charset"). In particular, OS-dependent end-of-line indicators are replaced by newline characters. 2) The set of source file characters accepted is implementation-defined(since C++11). Any source file character that cannot be mapped to a character in the [basic source character set](charset.html#Basic_source_character_set "cpp/language/charset") is replaced by its [universal character name](escape.html "cpp/language/escape") (escaped with `\u` or `\U`) or by some implementation-defined form that is handled equivalently.  |  3) [Trigraph sequences](operator_alternative.html "cpp/language/operator alternative") are replaced by corresponding single-character representations. | (until C++17)  
---|---  
(until C++23)  
Input files that are a sequence of UTF-8 code units (UTF-8 files) are guaranteed to be supported. The set of other supported kinds of input files is implementation-defined. If the set is non-empty, the kind of an input file is determined in an implementation-defined manner that includes a means of designating input files as UTF-8 files, independent of their content (recognizing the byte order mark is not sufficient). 

  * If an input file is determined to be a UTF-8 file, then it shall be a well-formed UTF-8 code unit sequence and it is decoded to produce a sequence of Unicode scalar values. A sequence of [translation character set](charset.html#Translation_character_set "cpp/language/charset") elements is then formed by mapping each Unicode scalar value to the corresponding translation character set element. In the resulting sequence, each pair of characters in the input sequence consisting of carriage return (U+000D) followed by line feed (U+000A), as well as each carriage return (U+000D) not immediately followed by a line feed (U+000A), is replaced by a single new-line character. 
  * For any other kind of input file supported by the implementation, characters are mapped (in implementation-defined manner) to a sequence of translation character set elements. In particular, OS-dependent end-of-line indicators are replaced by new-line characters. 

| (since C++23)  
  
#### Phase 2: Splicing lines

1) If the first translation character is byte order mark (U+FEFF), it is deleted. (since C++23)Whenever backslash (\) appears at the end of a line (immediately followed by zero or more whitespace characters other than new-line followed by(since C++23) the newline character), these characters are deleted, combining two physical source lines into one logical source line. This is a single-pass operation; a line ending in two backslashes followed by an empty line does not combine three lines into one.

2) If a non-empty source file does not end with a newline character after this step (end-of-line backslashes are no longer splices at this point), a terminating newline character is added.

#### Phase 3: Lexing

1) The source file is decomposed into [preprocessing tokens](translation_phases.html#Preprocessing_tokens) and [whitespace](translation_phases.html#Whitespace): 
    
    
    // The following #include directive can de decomposed into 5 preprocessing tokens:
     
    //     punctuators (#, < and >)
    //          │
    // ┌────────┼────────┐
    // │        │        │
       #include <iostream>
    //     │        │
    //     │        └── header name (iostream)
    //     │
    //     └─────────── identifier (include)

If a source file ends in a partial preprocessing token or in a partial comment, the program is ill-formed: 
    
    
    // Error: partial string literal
    "abc
    
    
    // Error: partial comment
    /* comment

As characters from the source file are consumed to form the next preprocessing token (i.e., not being consumed as part of a comment or other forms of whitespace), universal character names are recognized and replaced by the designated element of the [translation character set](charset.html#Translation_character_set "cpp/language/charset"), except when matching a character sequence in one of the following preprocessing tokens: 

    

  * a character literal (c-char-sequence) 
  * a string literal (s-char-sequence and r-char-sequence), excluding delimiters (d-char-sequence) 
  * a header name (h-char-sequence and q-char-sequence)


| (since C++23)  
---|---  
  
  


2) Any transformations performed during phase 1 and(until C++23) phase 2 between the initial and the final double quote of any [raw string literal](string_literal.html "cpp/language/string literal") are reverted. | (since C++11)  
---|---  
  
3) Whitespace is transformed: 

  * Each comment is replaced by one space character. 
  * New-line characters are retained. 
  * Whether each nonempty sequence of whitespace characters other than new-line is retained or replaced by one space character is unspecified.



#### Phase 4: Preprocessing

1) The [preprocessor](../preprocessor.html "cpp/preprocessor") is executed.

2) Each file introduced with the [#include](../preprocessor/include.html "cpp/preprocessor/include") directive goes through phases 1 through 4, recursively.

3) At the end of this phase, all preprocessor directives are removed from the source.

#### Phase 5: Determining common string literal encodings

1) All characters in [character literals](character_literal.html "cpp/language/character literal") and [string literals](string_literal.html "cpp/language/string literal") are converted from the source character set to the [encoding](charset.html#Code_unit_and_literal "cpp/language/charset") (which may be a multibyte character encoding such as UTF-8, as long as the 96 characters of the [basic character set](charset.html#Basic_character_set "cpp/language/charset") have single-byte representations). 2) [Escape sequences](escape.html "cpp/language/escape") and universal character names in character literals and non-raw string literals are expanded and converted to the literal encoding. If the character specified by a universal character name cannot be encoded as a single code point in the corresponding literal encoding, the result is implementation-defined, but is guaranteed not to be a null (wide) character.  | (until C++23)  
---|---  
For a sequence of two or more adjacent [string literal](string_literal.html "cpp/language/string literal") tokens, a common encoding prefix is determined as described [here](string_literal.html#Concatenation "cpp/language/string literal"). Each such string literal token is then considered to have that common encoding prefix. (Character conversion is moved to phase 3)  | (since C++23)  
  
#### Phase 6: Concatenating string literals

Adjacent [string literals](string_literal.html "cpp/language/string literal") are concatenated. 

#### Phase 7: Compiling

Compilation takes place: each preprocessing token is converted to a [token](translation_phases.html#Tokens). The tokens are syntactically and semantically analyzed and translated as a [translation unit](translation_phases.html#Translation_process). 

#### Phase 8: Instantiating templates

Each translation unit is examined to produce a list of required template instantiations, including the ones requested by [explicit instantiations](class_template.html "cpp/language/class template"). The definitions of the templates are located, and the required instantiations are performed to produce _instantiation units_. 

#### Phase 9: Linking

Translation units, instantiation units, and library components needed to satisfy external references are collected into a program image which contains information needed for execution in its execution environment. 

### Notes

Source files, translation units and translated translation units need not necessarily be stored as files, nor need there be any one-to-one correspondence between these entities and any external representation. The description is conceptual only, and does not specify any particular implementation. 

The conversion performed at phase 5 can be controlled by command line options in some implementations: gcc and clang use -finput-charset to specify the encoding of the source character set, -fexec-charset and -fwide-exec-charset to specify the ordinary and wide literal encodings respectively, while Visual Studio 2015 Update 2 and later uses /source-charset and /execution-charset to specify the source character set and literal encoding respectively.  | (until C++23)  
---|---  
  
Some compilers do not implement instantiation units (also known as [template repositories](https://docs.oracle.com/cd/E18659_01/html/821-1383/bkagr.html#scrolltoc) or [template registries](http://www-01.ibm.com/support/knowledgecenter/SSXVZZ_12.1.0/com.ibm.xlcpp121.linux.doc/compiler_ref/fcat_template.html?lang=en)) and simply compile each template instantiation at phase 7, storing the code in the object file where it is implicitly or explicitly requested, and then the linker collapses these compiled instantiations into one at phase 9. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 787](https://cplusplus.github.io/CWG/issues/787.html) | C++98  | the behavior was undefined if a non-empty source file does  
not end with a newline character at the end of phase 2  | add a terminating newline  
character in this case   
[CWG 1104](https://cplusplus.github.io/CWG/issues/1104.html) | C++98  | the alternative token <: caused [std::vector](../container/vector.html)<::[std::string](../string/basic_string.html)>  
to be treated as [std::vector](../container/vector.html)[:[std::string](../string/basic_string.html)> | added an additional lexing  
rule to address this case   
[CWG 1775](https://cplusplus.github.io/CWG/issues/1775.html) | C++11  | forming a universal character name inside a raw  
string literal in phase 2 resulted in undefined behavior  | made well-defined   
[CWG 2747](https://cplusplus.github.io/CWG/issues/2747.html) | C++98  | phase 2 checked the end-of-file splice after splicing, this is unnecessary  | removed the check   
[P2621R3](https://wg21.link/P2621R3) | C++98  | universal character names were not allowed to  
be formed by line splicing or token concatenation  | allowed   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 5.2 Phases of translation [lex.phases] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 5.2 Phases of translation [lex.phases] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 5.2 Phases of translation [lex.phases] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 2.2 Phases of translation [lex.phases] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 2.2 Phases of translation [lex.phases] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 2.1 Phases of translation [lex.phases] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 2.1 Phases of translation [lex.phases] 



### See also

* [C's Phases of translation](../../c/language/translation_phases.md)
