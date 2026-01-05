
  



  
|   
  
---  
[`catch` handler](../language/catch.html "cpp/language/catch")  
  

  
  
  
  
  
  

  


[Preprocessor](../preprocessor.html "cpp/preprocessor")

[#if#ifdef#ifndef#else#elif#elifdef#elifndef#endif](conditional.html "cpp/preprocessor/conditional")(C++23)(C++23)  
---  
[#define#undef#,## operators](replace.html "cpp/preprocessor/replace")  
[#include__has_include](include.html "cpp/preprocessor/include")(C++17)  
[#error#warning](warning.html "cpp/preprocessor/error")(C++23)  
[#pragma_Pragma](impl.html "cpp/preprocessor/impl")(C++11)  
[#line](line.html "cpp/preprocessor/line")  
**#embed**(C++26)  
  


#embed is a preprocessor directive to include [resources](embed.html#Resources). 

## Contents

  * [1 Syntax](embed.html#Syntax)
  * [2 Explanation](embed.html#Explanation)
  * [3 Resources](embed.html#Resources)
  * [4 Embedding resources](embed.html#Embedding_resources)
  * [5 Embed parameters](embed.html#Embed_parameters)
    * [5.1 limit parameter](embed.html#limit_parameter)
    * [5.2 prefix parameter](embed.html#prefix_parameter)
    * [5.3 suffix parameter](embed.html#suffix_parameter)
    * [5.4 if_empty parameter](embed.html#if_empty_parameter)
  * [6 Notes](embed.html#Notes)
  * [7 Example](embed.html#Example)
  * [8 References](embed.html#References)
  * [9 See also](embed.html#See_also)

  
---  
  
### Syntax  
  
---  
`**#embed <**` h-char-sequence `**>**` pp-tokens new-line |  (1)  |   
`**#embed "**` q-char-sequence `**"**` pp-tokens new-line |  (2)  |   
`**#embed**` pp-tokens new-line |  (3)  |   
`**__has_embed**` `**(**` balanced-pp-tokens `**)**` |  (4)  |   
  
1) Searches for a resource identified uniquely by h-char-sequence and replaces the directive by the entire contents of the resource.

2) Searches for a resource identified by q-char-sequence and replaces the directive by the entire contents of the source file. It may fallback to (1) and treat q-char-sequence as a resource identifier.

3) If neither (1) nor (2) is matched, pp-tokens will undergo macro replacement. The directive after replacement will be tried to match with (1) or (2) again.

4) Checks whether a resource is available for inclusion with given [embed parameters](embed.html#Embed_parameters).

new-line |  \-  |  The new-line character   
---|---|---  
h-char-sequence |  \-  |  A sequence of one or more h-char ﻿s (see [`#include`](include.html "cpp/preprocessor/include"))   
q-char-sequence |  \-  |  A sequence of one or more q-char ﻿s (see [`#include`](include.html "cpp/preprocessor/include"))   
pp-tokens |  \-  |  A sequence of one or more [preprocessing tokens](../language/translation_phases.html#Preprocessing_tokens "cpp/language/translation phases")  
balanced-pp-tokens |  \-  |  A sequence of one or more preprocessing tokens, where all (, [ and { are properly closed   
  
### Explanation

1) Searches a sequence of places for a resource identified uniquely by h-char-sequence ﻿, and causes the replacement of that directive by the entire contents of the header. How the places are specified or the header identified is implementation-defined.

2) Causes the replacement of that directive by the entire contents of the resource identified by q-char-sequence ﻿. The named resource is searched for in an implementation-defined manner.

If this search is not supported, or if the search fails, the directive is reprocessed as if it reads syntax (1) with the identical contained sequence (including > characters, if any) from the original directive.

3) The preprocessing tokens after `**embed**` in the directive are processed just as in normal text (i.e., each identifier currently defined as a macro name is replaced by its replacement list of preprocessing tokens).

If the directive resulting after all replacements does not match one of the two previous forms, the behavior is undefined.

The method by which a sequence of preprocessing tokens between a < and a > preprocessing token pair or a pair of " characters is combined into a single resource name preprocessing token is implementation-defined.

4) Searches for a resource identified by an invented #embed directive of syntax (3), using balanced-pp-tokens as its pp-tokens. 

  * If such a directive would not satisfy the syntactic requirements of an #embed directive, the program is ill-formed. 
  * Otherwise, if the search for the resource succeeds and all the given [embed parameters](embed.html#Embed_parameters) in the invented directive are supported, the `__has_embed` expression evaluates to __STDC_EMBED_FOUND__ if the resource is not empty, and to __STDC_EMBED_EMPTY__ if the resource is empty. 
  * Otherwise, the `__has_embed` expression evaluates to __STDC_EMBED_NOT_FOUND__.



### Resources

A _resource_ is a source of data accessible from the translation environment. A resource has an _implementation-resource-width ﻿_ , which is the implementation-defined size in bits of the resource. If the implementation-resource-width is not an integral multiple of [CHAR_BIT](../types/climits.html), the program is ill-formed. 

Let _implementation-resource-count_ be implementation-resource-width divided by [CHAR_BIT](../types/climits.html). Every resource also has a _resource-count ﻿_ , which is the implementation-resource-count, unless the [`limit`](embed.html#limit_parameter) embed parameter is provided. 

A resource is _empty_ if the resource-count is zero. 
    
    
    // ill-formed if the implementation-resource-width is 6 bits
    #embed "6_bits.bin"

### Embedding resources

Unless otherwise modified, the #embed directive is replaced by a comma-delimited list of [integer literals](../language/integer_literal.html "cpp/language/integer literal") of type int. 

The integer literals in the comma-delimited list correspond to resource-count consecutive calls to [std::fgetc](../io/c/fgetc.html "cpp/io/c/fgetc") from the resource, as a binary file. If any call to [std::fgetc](../io/c/fgetc.html "cpp/io/c/fgetc") returns [EOF](../io/c.html), the program is ill-formed. 
    
    
    int i =
    {
    #embed "i.dat"
    }; // well-formed if i.dat produces a single value
     
    int i2 =
    #embed "i.dat"
    ; // also well-formed if i.dat produces a single value
     
    struct T
    {
        double a, b, c;
        struct { double e, f, g; } x;
        double h, i, j;
    };
    T x =
    {
    // well-formed if the directive produces nine or fewer values
    #embed "s.dat"
    };

### Embed parameters

If pp-tokens is present in syntax (1) or syntax (2), it is processed just as in normal text. The processed pp-tokens should form a sequence of _embed parameters ﻿_ , otherwise the program is ill-formed. Embed parameters have the following syntax:   
  
---  
`**limit**` `**(**` balanced-pp-tokens `**)**` |  (1)  |   
`**prefix**` `**(**` balanced-pp-tokens ﻿(optional) `**)**` |  (2)  |   
`**suffix**` `**(**` balanced-pp-tokens ﻿(optional) `**)**` |  (3)  |   
`**if_empty**` `**(**` balanced-pp-tokens ﻿(optional) `**)**` |  (4)  |   
identifier `**::**` identifier |  (5)  |   
identifier `**::**` identifier `**(**` balanced-pp-tokens ﻿(optional) `**)**` |  (6)  |   
  
1-4) Standard embed parameters.

1) Limits the resource-count of the resource to be embedded.

2) Adds prefix to the embedded non-empty resource.

3) Adds suffix to the embedded non-empty resource.

4) Replaces the embedded resource if it is empty.

5,6) Non-standard embed parameters. Any such parameter is conditionally-supported, with implementation-defined semantics.

#### `limit` parameter

An embed parameter of the form `**limit**` `**(**` balanced-pp-tokens `**)**` can only appear at most once in each #embed directive. 

balanced-pp-tokens are processed just as in normal text to form a [constant expression](../language/constant_expression.html "cpp/language/constant expression"), but `defined`, `__has_include`, `__has_cpp_attribute` and `__has_embed` expressions are not evaluated. 

The constant expression must be an [integral constant expression](../language/constant_expression.html#Integral_constant_expression "cpp/language/constant expression") whose value is greater than or equal to zero: 

  * If the value of the constant expression is greater than implementation-resource-count, the resource-count is still the implementation-resource-count. 
  * Otherwise, the resource-count becomes the value of the constant expression. 


    
    
    constexpr unsigned char sound_signature[] =
    {
    // a hypothetical resource capable of expanding to four or more elements
    #embed <sdk/jump.wav> limit(2 + 2)
    };
     
    static_assert(sizeof(sound_signature) == 4);
     
    // equivalent to #embed <data.dat> limit(10)
    #define DATA_LIMIT 10
    #embed <data.dat> limit(DATA_LIMIT)
     
    // ill-formed
    #embed <data.dat> limit(__has_include("a.h"))

#### `prefix` parameter

An embed parameter of the form `**prefix**` `**(**` balanced-pp-tokens ﻿(optional) `**)**` can only appear at most once in each #embed directive. 

If the resource is empty, this embed parameter is ignored. Otherwise, balanced-pp-tokens is placed immediately before the comma-delimited list of integral literals. 

#### `suffix` parameter

An embed parameter of the form `**suffix**` `**(**` balanced-pp-tokens ﻿(optional) `**)**` can only appear at most once in each #embed directive. 

If the resource is empty, this embed parameter is ignored. Otherwise, balanced-pp-tokens is placed immediately after the comma-delimited list of integral literals. 
    
    
    constexpr unsigned char whl[] =
    {
    #embed "chess.glsl" \
        prefix(0xEF, 0xBB, 0xBF, ) /∗ a sequence of bytes ∗/ \
        suffix(,)
        0
    };
     
    // always null-terminated, contains the sequence if not empty
     
    constexpr bool is_empty = sizeof(whl) == 1 && whl[0] == '\0';
     
    constexpr bool is_not_empty = sizeof(whl) >= 4
        && whl[sizeof(whl) - 1] == '\0'
        && whl[0] == '\xEF' && whl[1] == '\xBB' && whl[2] == '\xBF';
     
    static_assert(is_empty || is_not_empty);

#### `if_empty` parameter

An embed parameter of the form `**if_empty**` `**(**` balanced-pp-tokens ﻿(optional) `**)**` can only appear at most once in each #embed directive. 

If the resource is **not** empty, this embed parameter is ignored. Otherwise, the #embed directive is replaced by balanced-pp-tokens. 
    
    
    // always expands to 42203 regardless of the content of /owo/uwurandom
    #embed </owo/uwurandom> if_empty(42203) limit(0)

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_pp_embed`](../experimental/feature_test.html#cpp_pp_embed "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_pp_embed_202502L "cpp/compiler support/26") | (C++26) | The #embed directive   
  
### Example

Demonstrate the effect of #embed. If `data.dat` can be embedded as a resource in the translation environment, no assert in this program should fail. 

Run this code
    
    
    #include <cassert>
    #include <cstddef>
    #include <cstring>
    #include <fstream>
    #include <vector>
     
    int main()
    {
        constexpr unsigned char d[]
        {
    #embed <data.dat>
        };
     
        const [std::vector](../container/vector.html)<unsigned char> vec_d
        {
    #embed <data.dat>
        };
     
        constexpr [std::size_t](../types/size_t.html) expected_size = sizeof(d);
        // same file in execution environment as was embedded
        [std::ifstream](../io/basic_ifstream.html) f_source("data.dat", [std::ios_base::binary](../io/ios_base/openmode.html) | [std::ios_base::in](../io/ios_base/openmode.html));
        unsigned char runtime_d[expected_size];
     
        char* ifstream_ptr = reinterpret_cast<char*>(runtime_d);
        [assert](../error/assert.html)(!f_source.read(ifstream_ptr, expected_size));
     
        [std::size_t](../types/size_t.html) ifstream_size = f_source.gcount();
        [assert](../error/assert.html)(ifstream_size == expected_size);
     
        int is_same = [std::memcmp](../string/byte/memcmp.html)(&d[0], ifstream_ptr, ifstream_size);
        [assert](../error/assert.html)(is_same == 0);
     
        int is_same_vec = [std::memcmp](../string/byte/memcmp.html)(vec_d.data(), ifstream_ptr, ifstream_size);
        [assert](../error/assert.html)(is_same_vec == 0);
    }

### References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * 15.4 Resource inclusion [cpp.embed] 



### See also

  * [Source file inclusion](include.html "cpp/preprocessor/include")

[C documentation](../../c/preprocessor/embed.html "c/preprocessor/embed") for Binary resource inclusion (since C23)  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
