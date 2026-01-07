* C++ (and C) source code 
  * 💡may be written | ANY non-ASCII 7-bit character set / includes the [ISO 646:1983](https://en.wikipedia.org/wiki/ISO_646) invariant character set💡
    * ⚠️HOWEVER, MULTIPLE C++ operators & punctuators require characters / outside of ISO 646 codeset: `{, }, [, ], #, \, ^, |, ~` ⚠️
* TODO: To be able to use character encodings where some or all of these symbols do not exist (such as the German [DIN 66003](https://en.wikipedia.org/wiki/DIN_66003 "enwiki:DIN 66003")),
C++ defines the following alternatives composed of ISO 646 compatible characters. 

* alternative spellings for some operators

## Contents

  * [1 Alternative tokens](operator_alternative.html#Alternative_tokens)
  * [2 Trigraphs (removed in C++17)](operator_alternative.html#Trigraphs_.28removed_in_C.2B.2B17.29)
  * [3 Notes](operator_alternative.html#Notes)
  * [4 Compatibility with C](operator_alternative.html#Compatibility_with_C)
  * [5 Keywords](operator_alternative.html#Keywords)
  * [6 Example](operator_alternative.html#Example)
  * [7 References](operator_alternative.html#References)
  * [8 See also](operator_alternative.html#See_also)
  
### Alternative tokens

There are alternative spellings for several operators and other tokens that use non-ISO646 characters
* In all respects of the language, each alternative token behaves exactly the same as its primary token, except for its spelling (the [stringification operator](../preprocessor/replace.html "cpp/preprocessor/replace") can make the spelling visible)
* The two-letter alternative tokens are sometimes called "digraphs"
* Despite being four-letters long, %:%: is also considered a digraph. 

Primary  | Alternative   
---|---  
`&&` | [`and`](../keyword/and.html "cpp/keyword/and")  
`&=` | [`and_eq`](../keyword/and_eq.html "cpp/keyword/and eq")  
`&` | [`bitand`](../keyword/bitand.html "cpp/keyword/bitand")  
`|` | [`bitor`](../keyword/bitor.html "cpp/keyword/bitor")  
`~` | [`compl`](../keyword/compl.html "cpp/keyword/compl")  
`!` | [`not`](../keyword/not.html "cpp/keyword/not")  
`!=` | [`not_eq`](../keyword/not_eq.html "cpp/keyword/not eq")  
`||` | [`or`](../keyword/or.html "cpp/keyword/or")  
`|=` | [`or_eq`](../keyword/or_eq.html "cpp/keyword/or eq")  
`^` | [`xor`](../keyword/xor.html "cpp/keyword/xor")  
`^=` | [`xor_eq`](../keyword/xor_eq.html "cpp/keyword/xor eq")  
`{` | `<%`  
`}` | `%>`  
`[` | `<:`  
`]` | `:>`  
`#` | `%:`  
`##` | `%:%:`  
  
### Trigraphs (removed in C++17)

The following three-character groups (trigraphs) are [parsed before comments and string literals are recognized](translation_phases.html "cpp/language/translation phases"), and each appearance of a trigraph is replaced by the corresponding primary character: 

Primary  | Trigraph   
---|---  
`{` | `??<`  
``} | `??>`  
`[` | `??(`  
`]` | `??)`  
`#` | `??=`  
`\` | `??/`  
`^` | `??'`  
`|` | `??!`  
`~` | `??-`  
  
Because trigraphs are processed early, a comment such as // Will the next line be executed?????/ will effectively comment out the following line, and the string literal such as "Enter date ??/??/??" is parsed as "Enter date \\\??". 

### Notes

The characters & and ! are invariant under ISO-646, but alternatives are provided for the tokens that use these characters anyway to accommodate even more restrictive historical charsets. 

There is no alternative spelling (such as eq) for the equality operator == because the character = was present in all supported charsets. 

### Compatibility with C

The same words are defined in the C programming language in the include file [`<iso646.h>`](../../c/header/iso646.html "c/header/iso646") as macros. Because in C++ these are built into the language, the C++ version of [`<iso646.h>`](../header/ciso646.html "cpp/header/ciso646"), as well as [`<ciso646>`](../header/ciso646.html "cpp/header/ciso646"), does not define anything. The non-word digraphs (e.g <%), however, are part of the core language and can be used without including any header (otherwise, they would be unusable on any charset that lacks #). 

### Keywords

[`and`](../keyword/and.html "cpp/keyword/and"), [`and_eq`](../keyword/and_eq.html "cpp/keyword/and eq"), [`bitand`](../keyword/bitand.html "cpp/keyword/bitand"), [`bitor`](../keyword/bitor.html "cpp/keyword/bitor"), [`compl`](../keyword/compl.html "cpp/keyword/compl"), [`not`](../keyword/not.html "cpp/keyword/not"), [`not_eq`](../keyword/not_eq.html "cpp/keyword/not eq"), [`or`](../keyword/or.html "cpp/keyword/or"), [`or_eq`](../keyword/or_eq.html "cpp/keyword/or eq"), [`xor`](../keyword/xor.html "cpp/keyword/xor"), [`xor_eq`](../keyword/xor_eq.html "cpp/keyword/xor eq")

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 5.5 Alternative tokens [lex.digraph] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 5.5 Alternative tokens [lex.digraph] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 5.5 Alternative tokens [lex.digraph] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 2.4 Trigraph sequences [lex.trigraph] 



    

  * 2.6 Alternative tokens [lex.digraph] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 2.4 Trigraph sequences [lex.trigraph] 



    

  * 2.6 Alternative tokens [lex.digraph] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 2.3 Trigraph sequences [lex.trigraph] 



    

  * 2.5 Alternative tokens [lex.digraph] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 2.3 Trigraph sequences [lex.trigraph] 



    

  * 2.5 Alternative tokens [lex.digraph] 



### See also

[C documentation](../../c/language/operator_alternative.html "c/language/operator alternative") for Alternative operators and tokens  
---
