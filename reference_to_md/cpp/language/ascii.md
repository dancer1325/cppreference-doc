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
  


The following chart contains all 128 ASCII decimal **(dec)** , octal **(oct)** , hexadecimal **(hex)** and character **(ch)** codes. 

`dec` | `oct` | `hex` | `ch` |  | `dec` | `oct` | `hex` | `ch` |  | `dec` | `oct` | `hex` | `ch` |  | `dec` | `oct` | `hex` | `ch`  
---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---  
`0` | `0` | `00` | `**NUL**` (null) | `32` | `40` | `20` | (space) | `64` | `100` | `40` | `**@**` | `96` | `140` | `60` | `**`**`  
`1` | `1` | `01` | `**SOH**` (start of header) | `33` | `41` | `21` | `**!**` | `65` | `101` | `41` | `**A**` | `97` | `141` | `61` | `**a**`  
`2` | `2` | `02` | `**STX**` (start of text) | `34` | `42` | `22` | `**"**` | `66` | `102` | `42` | `**B**` | `98` | `142` | `62` | `**b**`  
`3` | `3` | `03` | `**ETX**` (end of text) | `35` | `43` | `23` | `**#**` | `67` | `103` | `43` | `**C**` | `99` | `143` | `63` | `**c**`  
`4` | `4` | `04` | `**EOT**` (end of transmission) | `36` | `44` | `24` | `**$**` | `68` | `104` | `44` | `**D**` | `100` | `144` | `64` | `**d**`  
`5` | `5` | `05` | `**ENQ**` (enquiry) | `37` | `45` | `25` | `**%**` | `69` | `105` | `45` | `**E**` | `101` | `145` | `65` | `**e**`  
`6` | `6` | `06` | `**ACK**` (acknowledge) | `38` | `46` | `26` | `**&**` | `70` | `106` | `46` | `**F**` | `102` | `146` | `66` | `**f**`  
`7` | `7` | `07` | `**BEL**` (bell) | `39` | `47` | `27` | `**'**` | `71` | `107` | `47` | `**G**` | `103` | `147` | `67` | `**g**`  
`8` | `10` | `08` | `**BS**` (backspace) | `40` | `50` | `28` | `**(**` | `72` | `110` | `48` | `**H**` | `104` | `150` | `68` | `**h**`  
`9` | `11` | `09` | `**HT**` (horizontal tab) | `41` | `51` | `29` | `**)**` | `73` | `111` | `49` | `**I**` | `105` | `151` | `69` | `**i**`  
`10` | `12` | `0a` | `**LF**` (line feed - new line) | `42` | `52` | `2a` | `*****` | `74` | `112` | `4a` | `**J**` | `106` | `152` | `6a` | `**j**`  
`11` | `13` | `0b` | `**VT**` (vertical tab) | `43` | `53` | `2b` | `**+**` | `75` | `113` | `4b` | `**K**` | `107` | `153` | `6b` | `**k**`  
`12` | `14` | `0c` | `**FF**` (form feed - new page) | `44` | `54` | `2c` | `**,**` | `76` | `114` | `4c` | `**L**` | `108` | `154` | `6c` | `**l**`  
`13` | `15` | `0d` | `**CR**` (carriage return) | `45` | `55` | `2d` | `**-**` | `77` | `115` | `4d` | `**M**` | `109` | `155` | `6d` | `**m**`  
`14` | `16` | `0e` | `**SO**` (shift out) | `46` | `56` | `2e` | `**.**` | `78` | `116` | `4e` | `**N**` | `110` | `156` | `6e` | `**n**`  
`15` | `17` | `0f` | `**SI**` (shift in) | `47` | `57` | `2f` | `**/**` | `79` | `117` | `4f` | `**O**` | `111` | `157` | `6f` | `**o**`  
`16` | `20` | `10` | `**DLE**` (data link escape) | `48` | `60` | `30` | `**0**` | `80` | `120` | `50` | `**P**` | `112` | `160` | `70` | `**p**`  
`17` | `21` | `11` | `**DC1**` (device control 1) | `49` | `61` | `31` | `**1**` | `81` | `121` | `51` | `**Q**` | `113` | `161` | `71` | `**q**`  
`18` | `22` | `12` | `**DC2**` (device control 2) | `50` | `62` | `32` | `**2**` | `82` | `122` | `52` | `**R**` | `114` | `162` | `72` | `**r**`  
`19` | `23` | `13` | `**DC3**` (device control 3) | `51` | `63` | `33` | `**3**` | `83` | `123` | `53` | `**S**` | `115` | `163` | `73` | `**s**`  
`20` | `24` | `14` | `**DC4**` (device control 4) | `52` | `64` | `34` | `**4**` | `84` | `124` | `54` | `**T**` | `116` | `164` | `74` | `**t**`  
`21` | `25` | `15` | `**NAK**` (negative acknowledge) | `53` | `65` | `35` | `**5**` | `85` | `125` | `55` | `**U**` | `117` | `165` | `75` | `**u**`  
`22` | `26` | `16` | `**SYN**` (synchronous idle) | `54` | `66` | `36` | `**6**` | `86` | `126` | `56` | `**V**` | `118` | `166` | `76` | `**v**`  
`23` | `27` | `17` | `**ETB**` (end of transmission block) | `55` | `67` | `37` | `**7**` | `87` | `127` | `57` | `**W**` | `119` | `167` | `77` | `**w**`  
`24` | `30` | `18` | `**CAN**` (cancel) | `56` | `70` | `38` | `**8**` | `88` | `130` | `58` | `**X**` | `120` | `170` | `78` | `**x**`  
`25` | `31` | `19` | `**EM**` (end of medium) | `57` | `71` | `39` | `**9**` | `89` | `131` | `59` | `**Y**` | `121` | `171` | `79` | `**y**`  
`26` | `32` | `1a` | `**SUB**` (substitute) | `58` | `72` | `3a` | `**:**` | `90` | `132` | `5a` | `**Z**` | `122` | `172` | `7a` | `**z**`  
`27` | `33` | `1b` | `**ESC**` (escape) | `59` | `73` | `3b` | `**;**` | `91` | `133` | `5b` | `**[**` | `123` | `173` | `7b` | `**{**`  
`28` | `34` | `1c` | `**FS**` (file separator) | `60` | `74` | `3c` | `**<**` | `92` | `134` | `5c` | `**\**` | `124` | `174` | `7c` | `**|**`  
`29` | `35` | `1d` | `**GS**` (group separator) | `61` | `75` | `3d` | `**=**` | `93` | `135` | `5d` | `**]**` | `125` | `175` | `7d` | `**}**`  
`30` | `36` | `1e` | `**RS**` (record separator) | `62` | `76` | `3e` | `**>**` | `94` | `136` | `5e` | `**^**` | `126` | `176` | `7e` | `**~**`  
`31` | `37` | `1f` | `**US**` (unit separator) | `63` | `77` | `3f` | `**?**` | `95` | `137` | `5f` | `**_**` | `127` | `177` | `7f` | `**DEL**` (delete)   
  
Note: in Unicode, the ASCII character block is known as [`U+0000..U+007F` Basic Latin](https://www.unicode.org/charts/PDF/U0000.pdf). 

### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        [std::cout](../io/cout.html) << "Printable ASCII [32..126]:\n";
        for (char c{' '}; c <= '~'; ++c)
            [std::cout](../io/cout.html) << c << ((c + 1) % 32 ? ' ' : '\n');
        [std::cout](../io/cout.html) << '\n';
    }

Possible output: 
    
    
    Printable ASCII [32..126]:
      ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ?
    @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _
    ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~

### See also

[C documentation](../../c/language/ascii.html "c/language/ascii") for ASCII Chart  
---
