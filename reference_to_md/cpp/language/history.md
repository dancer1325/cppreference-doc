

  
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
  
| **History of C++**  
---  
  


## Contents

  * [1 Early C++](history.html#Early_C.2B.2B)
  * [2 Standard C++](history.html#Standard_C.2B.2B)
    * [2.1 C++98/03 period](history.html#C.2B.2B98.2F03_period)
    * [2.2 C++11 period](history.html#C.2B.2B11_period)
    * [2.3 C++14 period](history.html#C.2B.2B14_period)
    * [2.4 C++17 period](history.html#C.2B.2B17_period)
    * [2.5 C++20 period](history.html#C.2B.2B20_period)
    * [2.6 Future development](history.html#Future_development)
    * [2.7 See also](history.html#See_also)
    * [2.8 External links](history.html#External_links)

  
---  
  
## Early C++

  * 1979: C with Classes first implemented 


  1. New features: [classes](classes.html "cpp/language/classes"), [member functions](member_functions.html "cpp/language/member functions"), [derived classes](derived_class.html "cpp/language/derived class"), separate compilation, [public and private access control](access.html "cpp/language/access"), [friends](friend.html "cpp/language/friend"), type checking of function arguments, [default arguments](default_arguments.html "cpp/language/default arguments"), [inline functions](inline.html "cpp/language/inline"), [overloaded assignment operator](as_operator.html "cpp/language/copy assignment"), [constructors](initializer_list.html "cpp/language/constructor"), [destructors](destructor.html "cpp/language/destructor"), f() same as f(void), call-function and return-function (synchronization features, not in C++) 
  2. Libraries: the concurrent task library (not in C++) 


  * 1982: C with Classes reference manual published 
  * 1984: C84 implemented, reference manual published 
  * 1985: Cfront 1.0 


  1. New features: [virtual functions](virtual.html "cpp/language/virtual"), function and [operator overloading](operators.html "cpp/language/operators"), [references](reference.html "cpp/language/reference"), [`new`](../memory/new/operator_new.html "cpp/memory/new/operator new") and [`delete`](../memory/new/operator_delete.html "cpp/memory/new/operator delete") operators, [the keyword `const`](cv.html "cpp/language/cv"), scope resolution operator 
  2. Library additions: [complex number](../numeric/complex.html "cpp/numeric/complex"), `string` (AT&T version), [I/O stream](../header/iostream.html "cpp/header/iostream")


  * 1985: The C++ Programming Language, 1st edition 
  * 1986: The "whatis?" paper documenting the remaining design goals, including multiple inheritance, exception handling, and templates. 
  * 1987: C++ support in GCC 1.15.3 
  * 1989: Cfront 2.0 


  1. New features: [multiple inheritance](derived_class.html "cpp/language/derived class"), [pointers to members](pointer.html "cpp/language/pointer"), [protected access](access.html "cpp/language/access"), type-safe linkage, [abstract classes](abstract_class.html "cpp/language/abstract class"), [static](static.html#Static_member_functions "cpp/language/static") and [const-qualified](member_functions.html#const-_and_volatile-qualified_member_functions "cpp/language/member functions") member functions, class-specific [`new`](../memory/new/operator_new.html#Class-specific_overloads "cpp/memory/new/operator new") and [`delete`](../memory/new/operator_delete.html#Class-specific_overloads "cpp/memory/new/operator delete")
  2. Library additions: [I/O manipulators](../io/manip.html "cpp/io/manip")


  * 1990: The Annotated C++ Reference Manual 



This book described the language as designed, including some features that were not yet implemented. It served as the de-facto standard until the ISO. 

  1. New features: [namespaces](namespace.html "cpp/language/namespace"), [exception handling](exceptions.html "cpp/language/exceptions"), [nested classes](nested_classes.html "cpp/language/nested types"), [templates](templates.html "cpp/language/templates")


  * 1991: Cfront 3.0 
  * 1991: The C++ Programming Language, 2nd edition 



## Standard C++

  * 1990: ANSI C++ Committee founded 
  * 1991: ISO C++ Committee founded 
  * 1992: [STL](https://www.rrsd.com/software_development/stl/stl/) implemented in C++ 



### C++98/03 period

  * 1998: **C++98** (ISO/IEC 14882:1998) 


  1. New features: RTTI ([`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"), [`typeid`](typeid.html "cpp/language/typeid")), [covariant return types](virtual.html#Covariant_return_types "cpp/language/virtual"), [cast operators](cast_operator.html "cpp/language/cast operator"), [`mutable`](cv.html "cpp/language/cv"), [`bool`](types.html#Boolean_type "cpp/language/types"), declarations in conditions, [template instantiations](templates.html "cpp/language/templates"), [member templates](member_template.html "cpp/language/member template"), export 
  2. Library additions: [locales](../locale.html "cpp/locale"), [`bitset`](../utility/bitset.html "cpp/utility/bitset"), [`valarray`](../numeric/valarray.html "cpp/numeric/valarray"), [`auto_ptr`](../memory/auto_ptr.html "cpp/memory/auto ptr"), [templatized string](../string/basic_string.html "cpp/string/basic string"), [I/O streams](../io.html "cpp/io"), and [complex numbers](../numeric/complex.html "cpp/numeric/complex"). 
  3. Based on STL: [containers](../container.html "cpp/container"), [algorithms](../algorithm.html "cpp/algorithm"), [iterators](../iterator.html "cpp/iterator"), [function objects](../functional.html "cpp/utility/functional")


  * 1998: The C++ Programming Language, 3rd edition 
  * 1999: [Boost](https://www.boost.org) founded by the committee members to produce new high-quality candidate libraries for the standard. 
  * 2003: **C++03** (ISO/IEC 14882:2003) 



This was a minor revision, intended to be little more than a technical corrigendum. This revision introduces the definition of [value initialization](value_initialization.html "cpp/language/value initialization"). 

Defect Reports fixed in C++03 (92 core, 125 library)  
---  
  
  * [CWG#1](https://wg21.cmeerw.net/cwg/issue1)
  * [CWG#20](https://wg21.cmeerw.net/cwg/issue20)
  * [CWG#21](https://wg21.cmeerw.net/cwg/issue21)
  * [CWG#22](https://wg21.cmeerw.net/cwg/issue22)
  * [CWG#24](https://wg21.cmeerw.net/cwg/issue24)
  * [CWG#25](https://wg21.cmeerw.net/cwg/issue25)
  * [CWG#30](https://wg21.cmeerw.net/cwg/issue30)
  * [CWG#32](https://wg21.cmeerw.net/cwg/issue32)
  * [CWG#33](https://wg21.cmeerw.net/cwg/issue33)
  * [CWG#35](https://wg21.cmeerw.net/cwg/issue35)
  * [CWG#38](https://wg21.cmeerw.net/cwg/issue38)
  * [CWG#40](https://wg21.cmeerw.net/cwg/issue40)
  * [CWG#41](https://wg21.cmeerw.net/cwg/issue41)
  * [CWG#43](https://wg21.cmeerw.net/cwg/issue43)
  * [CWG#48](https://wg21.cmeerw.net/cwg/issue48)
  * [CWG#49](https://wg21.cmeerw.net/cwg/issue49)
  * [CWG#51](https://wg21.cmeerw.net/cwg/issue51)
  * [CWG#52](https://wg21.cmeerw.net/cwg/issue52)
  * [CWG#53](https://wg21.cmeerw.net/cwg/issue53)
  * [CWG#56](https://wg21.cmeerw.net/cwg/issue56)
  * [CWG#59](https://wg21.cmeerw.net/cwg/issue59)
  * [CWG#64](https://wg21.cmeerw.net/cwg/issue64)
  * [CWG#65](https://wg21.cmeerw.net/cwg/issue65)
  * [CWG#67](https://wg21.cmeerw.net/cwg/issue67)
  * [CWG#68](https://wg21.cmeerw.net/cwg/issue68)
  * [CWG#69](https://wg21.cmeerw.net/cwg/issue69)
  * [CWG#73](https://wg21.cmeerw.net/cwg/issue73)
  * [CWG#74](https://wg21.cmeerw.net/cwg/issue74)
  * [CWG#75](https://wg21.cmeerw.net/cwg/issue75)
  * [CWG#76](https://wg21.cmeerw.net/cwg/issue76)
  * [CWG#80](https://wg21.cmeerw.net/cwg/issue80)
  * [CWG#83](https://wg21.cmeerw.net/cwg/issue83)
  * [CWG#84](https://wg21.cmeerw.net/cwg/issue84)
  * [CWG#85](https://wg21.cmeerw.net/cwg/issue85)
  * [CWG#89](https://wg21.cmeerw.net/cwg/issue89)
  * [CWG#90](https://wg21.cmeerw.net/cwg/issue90)
  * [CWG#93](https://wg21.cmeerw.net/cwg/issue93)
  * [CWG#94](https://wg21.cmeerw.net/cwg/issue94)
  * [CWG#98](https://wg21.cmeerw.net/cwg/issue98)
  * [CWG#100](https://wg21.cmeerw.net/cwg/issue100)
  * [CWG#101](https://wg21.cmeerw.net/cwg/issue101)
  * [CWG#103](https://wg21.cmeerw.net/cwg/issue103)
  * [CWG#105](https://wg21.cmeerw.net/cwg/issue105)
  * [CWG#108](https://wg21.cmeerw.net/cwg/issue108)
  * [CWG#116](https://wg21.cmeerw.net/cwg/issue116)
  * [CWG#120](https://wg21.cmeerw.net/cwg/issue120)
  * [CWG#121](https://wg21.cmeerw.net/cwg/issue121)
  * [CWG#123](https://wg21.cmeerw.net/cwg/issue123)
  * [CWG#126](https://wg21.cmeerw.net/cwg/issue126)
  * [CWG#127](https://wg21.cmeerw.net/cwg/issue127)
  * [CWG#128](https://wg21.cmeerw.net/cwg/issue128)
  * [CWG#131](https://wg21.cmeerw.net/cwg/issue131)
  * [CWG#134](https://wg21.cmeerw.net/cwg/issue134)
  * [CWG#135](https://wg21.cmeerw.net/cwg/issue135)
  * [CWG#137](https://wg21.cmeerw.net/cwg/issue137)
  * [CWG#142](https://wg21.cmeerw.net/cwg/issue142)
  * [CWG#145](https://wg21.cmeerw.net/cwg/issue145)
  * [CWG#147](https://wg21.cmeerw.net/cwg/issue147)
  * [CWG#148](https://wg21.cmeerw.net/cwg/issue148)
  * [CWG#149](https://wg21.cmeerw.net/cwg/issue149)
  * [CWG#151](https://wg21.cmeerw.net/cwg/issue151)
  * [CWG#152](https://wg21.cmeerw.net/cwg/issue152)
  * [CWG#153](https://wg21.cmeerw.net/cwg/issue153)
  * [CWG#159](https://wg21.cmeerw.net/cwg/issue159)
  * [CWG#161](https://wg21.cmeerw.net/cwg/issue161)
  * [CWG#163](https://wg21.cmeerw.net/cwg/issue163)
  * [CWG#164](https://wg21.cmeerw.net/cwg/issue164)
  * [CWG#166](https://wg21.cmeerw.net/cwg/issue166)
  * [CWG#171](https://wg21.cmeerw.net/cwg/issue171)
  * [CWG#173](https://wg21.cmeerw.net/cwg/issue173)
  * [CWG#176](https://wg21.cmeerw.net/cwg/issue176)
  * [CWG#178](https://wg21.cmeerw.net/cwg/issue178)
  * [CWG#179](https://wg21.cmeerw.net/cwg/issue179)
  * [CWG#181](https://wg21.cmeerw.net/cwg/issue181)
  * [CWG#183](https://wg21.cmeerw.net/cwg/issue183)
  * [CWG#185](https://wg21.cmeerw.net/cwg/issue185)
  * [CWG#187](https://wg21.cmeerw.net/cwg/issue187)
  * [CWG#188](https://wg21.cmeerw.net/cwg/issue188)
  * [CWG#190](https://wg21.cmeerw.net/cwg/issue190)
  * [CWG#193](https://wg21.cmeerw.net/cwg/issue193)
  * [CWG#194](https://wg21.cmeerw.net/cwg/issue194)
  * [CWG#202](https://wg21.cmeerw.net/cwg/issue202)
  * [CWG#206](https://wg21.cmeerw.net/cwg/issue206)
  * [CWG#210](https://wg21.cmeerw.net/cwg/issue210)
  * [CWG#213](https://wg21.cmeerw.net/cwg/issue213)
  * [CWG#217](https://wg21.cmeerw.net/cwg/issue217)
  * [CWG#227](https://wg21.cmeerw.net/cwg/issue227)
  * [CWG#235](https://wg21.cmeerw.net/cwg/issue235)
  * [CWG#241](https://wg21.cmeerw.net/cwg/issue241)
  * [CWG#249](https://wg21.cmeerw.net/cwg/issue249)
  * [CWG#250](https://wg21.cmeerw.net/cwg/issue250)
  * [CWG#304](https://wg21.cmeerw.net/cwg/issue304)



  * [LWG#1](http://wg21.link/lwg1)
  * [LWG#3](http://wg21.link/lwg3)
  * [LWG#5](http://wg21.link/lwg5)
  * [LWG#7](http://wg21.link/lwg7)
  * [LWG#8](http://wg21.link/lwg8)
  * [LWG#9](http://wg21.link/lwg9)
  * [LWG#11](http://wg21.link/lwg11)
  * [LWG#13](http://wg21.link/lwg13)
  * [LWG#14](http://wg21.link/lwg14)
  * [LWG#15](http://wg21.link/lwg15)
  * [LWG#16](http://wg21.link/lwg16)
  * [LWG#17](http://wg21.link/lwg17)
  * [LWG#18](http://wg21.link/lwg18)
  * [LWG#19](http://wg21.link/lwg19)
  * [LWG#20](http://wg21.link/lwg20)
  * [LWG#21](http://wg21.link/lwg21)
  * [LWG#22](http://wg21.link/lwg22)
  * [LWG#24](http://wg21.link/lwg24)
  * [LWG#25](http://wg21.link/lwg25)
  * [LWG#26](http://wg21.link/lwg26)
  * [LWG#27](http://wg21.link/lwg27)
  * [LWG#28](http://wg21.link/lwg28)
  * [LWG#29](http://wg21.link/lwg29)
  * [LWG#30](http://wg21.link/lwg30)
  * [LWG#31](http://wg21.link/lwg31)
  * [LWG#32](http://wg21.link/lwg32)
  * [LWG#33](http://wg21.link/lwg33)
  * [LWG#34](http://wg21.link/lwg34)
  * [LWG#35](http://wg21.link/lwg35)
  * [LWG#36](http://wg21.link/lwg36)
  * [LWG#37](http://wg21.link/lwg37)
  * [LWG#38](http://wg21.link/lwg38)
  * [LWG#39](http://wg21.link/lwg39)
  * [LWG#40](http://wg21.link/lwg40)
  * [LWG#41](http://wg21.link/lwg41)
  * [LWG#42](http://wg21.link/lwg42)
  * [LWG#46](http://wg21.link/lwg46)
  * [LWG#47](http://wg21.link/lwg47)
  * [LWG#48](http://wg21.link/lwg48)
  * [LWG#50](http://wg21.link/lwg50)
  * [LWG#51](http://wg21.link/lwg51)
  * [LWG#52](http://wg21.link/lwg52)
  * [LWG#53](http://wg21.link/lwg53)
  * [LWG#54](http://wg21.link/lwg54)
  * [LWG#55](http://wg21.link/lwg55)
  * [LWG#56](http://wg21.link/lwg56)
  * [LWG#57](http://wg21.link/lwg57)
  * [LWG#59](http://wg21.link/lwg59)
  * [LWG#60](http://wg21.link/lwg60)
  * [LWG#61](http://wg21.link/lwg61)
  * [LWG#62](http://wg21.link/lwg62)
  * [LWG#63](http://wg21.link/lwg63)
  * [LWG#64](http://wg21.link/lwg64)
  * [LWG#66](http://wg21.link/lwg66)
  * [LWG#68](http://wg21.link/lwg68)
  * [LWG#69](http://wg21.link/lwg69)
  * [LWG#70](http://wg21.link/lwg70)
  * [LWG#71](http://wg21.link/lwg71)
  * [LWG#74](http://wg21.link/lwg74)
  * [LWG#75](http://wg21.link/lwg75)
  * [LWG#78](http://wg21.link/lwg78)
  * [LWG#79](http://wg21.link/lwg79)
  * [LWG#80](http://wg21.link/lwg80)
  * [LWG#83](http://wg21.link/lwg83)
  * [LWG#86](http://wg21.link/lwg86)
  * [LWG#90](http://wg21.link/lwg90)
  * [LWG#106](http://wg21.link/lwg106)
  * [LWG#108](http://wg21.link/lwg108)
  * [LWG#110](http://wg21.link/lwg110)
  * [LWG#112](http://wg21.link/lwg112)
  * [LWG#114](http://wg21.link/lwg114)
  * [LWG#115](http://wg21.link/lwg115)
  * [LWG#119](http://wg21.link/lwg119)
  * [LWG#122](http://wg21.link/lwg122)
  * [LWG#124](http://wg21.link/lwg124)
  * [LWG#125](http://wg21.link/lwg125)
  * [LWG#126](http://wg21.link/lwg126)
  * [LWG#127](http://wg21.link/lwg127)
  * [LWG#129](http://wg21.link/lwg129)
  * [LWG#132](http://wg21.link/lwg132)
  * [LWG#133](http://wg21.link/lwg133)
  * [LWG#134](http://wg21.link/lwg134)
  * [LWG#137](http://wg21.link/lwg137)
  * [LWG#139](http://wg21.link/lwg139)
  * [LWG#141](http://wg21.link/lwg141)
  * [LWG#142](http://wg21.link/lwg142)
  * [LWG#144](http://wg21.link/lwg144)
  * [LWG#146](http://wg21.link/lwg146)
  * [LWG#147](http://wg21.link/lwg147)
  * [LWG#148](http://wg21.link/lwg148)
  * [LWG#150](http://wg21.link/lwg150)
  * [LWG#151](http://wg21.link/lwg151)
  * [LWG#152](http://wg21.link/lwg152)
  * [LWG#154](http://wg21.link/lwg154)
  * [LWG#155](http://wg21.link/lwg155)
  * [LWG#156](http://wg21.link/lwg156)
  * [LWG#158](http://wg21.link/lwg158)
  * [LWG#159](http://wg21.link/lwg159)
  * [LWG#160](http://wg21.link/lwg160)
  * [LWG#161](http://wg21.link/lwg161)
  * [LWG#164](http://wg21.link/lwg164)
  * [LWG#168](http://wg21.link/lwg168)
  * [LWG#169](http://wg21.link/lwg169)
  * [LWG#170](http://wg21.link/lwg170)
  * [LWG#172](http://wg21.link/lwg172)
  * [LWG#173](http://wg21.link/lwg173)
  * [LWG#174](http://wg21.link/lwg174)
  * [LWG#175](http://wg21.link/lwg175)
  * [LWG#176](http://wg21.link/lwg176)
  * [LWG#181](http://wg21.link/lwg181)
  * [LWG#189](http://wg21.link/lwg189)
  * [LWG#193](http://wg21.link/lwg193)
  * [LWG#195](http://wg21.link/lwg195)
  * [LWG#199](http://wg21.link/lwg199)
  * [LWG#208](http://wg21.link/lwg208)
  * [LWG#209](http://wg21.link/lwg209)
  * [LWG#210](http://wg21.link/lwg210)
  * [LWG#211](http://wg21.link/lwg211)
  * [LWG#212](http://wg21.link/lwg212)
  * [LWG#217](http://wg21.link/lwg217)
  * [LWG#220](http://wg21.link/lwg220)
  * [LWG#222](http://wg21.link/lwg222)
  * [LWG#223](http://wg21.link/lwg223)
  * [LWG#224](http://wg21.link/lwg224)
  * [LWG#227](http://wg21.link/lwg227)

  
  
  * 2006: Performance TR (ISO/IEC TR 18015:2006) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=43351)) ([2006 draft](https://www.open-std.org/jtc1/sc22/wg21/docs/TR18015.pdf)) 



This TR discussed the costs of various C++ abstractions, provided implementation guidance, discussed use of C++ in embedded systems and introduced `<hardware>` interface to C's ISO/IEC TR 18037:2008 `<iohw.h>`. 

  * 2007: Library extension TR1 (ISO/IEC TR 19768:2007) ([ISO store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=43289)) ([2005 draft](https://wg21.link/n1745)). 



This TR is a C++ library extension, which adds the following to the C++ standard library: 

  1. From Boost: [`reference_wrapper`](../utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper"), [Smart pointers](../memory.html#Smart_pointers "cpp/memory"), [Member function](../utility/functional/mem_fn.html "cpp/utility/functional/mem fn"), [`result_of`](../types/result_of.html "cpp/types/result of"), [`bind`](../utility/functional/bind.html "cpp/utility/functional/bind"), [`function`](../utility/functional/function.html "cpp/utility/functional/function"), [Type Traits](../utility/rtti.html "cpp/types"), [Random](../numeric/random.html "cpp/numeric/random"), Mathematical Special Functions, [`tuple`](../utility/tuple.html "cpp/utility/tuple"), [`array`](../container/array.html "cpp/container/array"), [Unordered Containers](../container.html#Unordered_associative_containers "cpp/container") (including [`hash`](../utility/hash.html "cpp/utility/hash")), and [Regular Expressions](../regex.html "cpp/regex"). 
  2. From C99: mathematical functions from [`<math.h>`](../../c/numeric/math.html "c/numeric/math") that were new in C99, [blank character class](../string/byte/isblank.html "cpp/string/byte/isblank"), [Floating-point environment](../numeric/fenv.html "cpp/numeric/fenv"), [`hexfloat`](../io/manip/fixed.html "cpp/io/manip/fixed") I/O Manipulator, [fixed-size integral types](../types/integer.html "cpp/types/integer"), the [`long long`](types.html#Modifiers "cpp/language/types") type, [va_copy](../utility/variadic/va_copy.html "cpp/utility/variadic/va copy"), the [`snprintf()`](../io/c/snprintf.html "cpp/io/c/snprintf") and [`vfscanf()`](../io/c/vfscanf.html "cpp/io/c/vfscanf") families of functions, and the C99 conversion specifies for [`printf()`](../io/c/printf.html "cpp/io/c/printf") and [`scanf()`](../io/c/scanf.html "cpp/io/c/scanf") families of functions. 



All of TR1 except for the special functions was included in C++11, with minor changes. 

  * 2010: Mathematical special functions (ISO/IEC 29124:2010) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=50511)) ([2010 draft](https://wg21.link/n3060)) 



This international standard is a C++ standard library extension, which adds the special functions that were part of TR1, but were not included in C++11: elliptic integrals, exponential integral, Laguerre polynomials, Legendre polynomials, Hermite polynomials, Bessel functions, Neumann functions, beta function, and Riemann zeta function. This standard was [merged into C++17](../numeric/special_math.html "cpp/numeric/special functions"). 

### C++11 period

  * 2011: **C++11** (ISO/IEC 14882:2011) ([ISO Store](https://www.iso.org/iso/iso_catalogue/catalogue_tc/catalogue_detail.htm?csnumber=50372)) ([2012 post-publication draft](https://wg21.link/n3337)). 



[Main Article: C++11](../11.html "cpp/11")

A large number of changes were introduced to both standardize existing practices and improve the abstractions available to the C++ programmers 

  * 2011: Decimal floating-point TR (ISO/IEC TR 24733:2011) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=38843)) ([2009 draft](https://wg21.link/n2849)) 



This TR implements the decimal floating-point types from IEEE 754-2008 Standard for Floating-Point Arithmetic: `std::decimal::decimal32`, `std::decimal::decimal64`, and `std::decimal::decimal128`. 

  * 2012: [The Standard C++ Foundation](https://isocpp.org) founded 
  * 2013: The C++ Programming Language, 4th edition 



### C++14 period

  * 2014: **C++14** ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=64029)) ([ANSI Store](https://webstore.ansi.org/RecordDetail.aspx?sku=INCITS%2fISO%2fIEC+14882%3a2014+\(2016\))) ([2014 final draft](https://github.com/cplusplus/draft/blob/master/papers/n4140.pdf?raw=true)) 



[Main Article: C++14](../14.html "cpp/14")

Minor revision of the C++ standard 

  * 2015: Filesystem library TS (ISO/IEC TS 18822:2015) ([ISO Store](https://www.iso.org/iso/catalogue_detail.htm?csnumber=63483)) ([2014 draft](https://wg21.link/n4100)) 



This TS is an experimental C++ library extension that specifies a filesystem library based on boost.filesystem V3 (with some modifications and extensions). This TS was merged into C++17. 

  * 2015: Extensions for Parallelism TS (ISO/IEC TS 19570:2015) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=65241)) ([2015 draft](https://wg21.link/n4507)) 



This TS standardizes parallel and vector-parallel API for all standard library algorithms, as well as adds new algorithms such as `reduce`, `transform_reduce`, or `exclusive_scan`. This TS was merged into C++17. 

  * 2015: Extensions for Transactional Memory TS (ISO/IEC TS 19841:2015) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=66343)) ([[2015 draft](https://wg21.link/n4514)) 



This TS extends the C++ core language with synchronized and atomic blocks, as well as transaction-safe functions, which implement transactional memory semantics. 

  * 2015: Extensions for Library Fundamentals TS (ISO/IEC TS 19568:2015) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=65238)) ([2015 draft](https://wg21.link/n4480)) 



This TS adds several new components to the C++ standard library: [`optional`](../experimental/optional.html "cpp/experimental/optional"), [`any`](../experimental/any.html "cpp/experimental/any"), [`string_view`](../experimental/basic_string_view.html "cpp/experimental/basic string view"), [`sample`](../experimental/sample.html "cpp/experimental/sample"), [`search`](../experimental/search.html "cpp/experimental/search"), [`apply`](../experimental/apply.html "cpp/experimental/apply"), [polymorphic allocators](../experimental/memory.html#Type-erased_and_polymorphic_allocators "cpp/experimental/lib extensions"), and [variable templates](../experimental/memory.html "cpp/experimental/lib extensions") for type traits. This TS was merged into C++17. 

  * 2015: Extensions for Concepts TS (ISO/IEC TS 19217:2015) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=64031)) ([2015 draft](https://wg21.link/n4553)) 



This TS extends the C++ core language with concepts (named type requirements) and constraints (limits on the types allowed in template, function, and variable declarations), which aids metaprogramming and simplifies template instantiation diagnostics, see [concepts](../experimental/constraints.html "cpp/experimental/constraints"). This TS was merged into C++20, with some omissions. 

  * 2016: Extensions for Concurrency TS (ISO/IEC TS 19571:2016) ([ISO Store](https://www.iso.org/iso/home/store/catalogue_tc/catalogue_detail.htm?csnumber=65242)) ([2015 draft](https://wg21.link/p0159r0)) 



This TS extends the C++ library to include [several extensions](../experimental/concurrency.html "cpp/experimental/concurrency") to [std::future](../thread/future.html "cpp/thread/future"), [latches](../thread/latch.html "cpp/thread/latch") and [barriers](../thread/barrier.html "cpp/thread/barrier"), and atomic smart pointers. 

### C++17 period

  * 2017: **C++17** ([ISO Store](https://www.iso.org/standard/68564.html)) ([ANSI Store](https://webstore.ansi.org/RecordDetail.aspx?sku=INCITS%2fISO%2fIEC+14882%3a2017+\(2018\))) ([n4659 2017-03-21 final draft](https://wg21.link/n4659)) 



[Main Article: C++17](../17.html "cpp/17")

The major revision of the C++ standard after C++11 

  * 2017: Extensions for Ranges TS (ISO/IEC TS 21425:2017) ([ISO Store](https://www.iso.org/standard/70910.html)) ([2017 draft](https://wg21.link/n4685)) 



This TS extends the C++ library to include [ranges](../experimental/ranges.html "cpp/experimental/ranges"), a new, more powerful, abstraction to replace iterator pairs, along with range views, sentinel ranges, projections for on-the-fly transformations, new iterator adaptors and algorithms. This extension finally makes it possible to sort a vector with sort(v);

  * 2017: Extensions for Coroutines TS (ISO/IEC TS 22277:2017) ([ISO Store](https://www.iso.org/standard/73008.html)) ([2017 draft](https://wg21.link/n4680)) 



This TS extends the C++ core language and the standard library to include stackless coroutines (resumable functions). This adds the keywords [`co_await`](../keyword/co_await.html "cpp/keyword/co await"), [`co_yield`](../keyword/co_yield.html "cpp/keyword/co yield"), and [`co_return`](../keyword/co_return.html "cpp/keyword/co return"). 

  * 2018: Extensions for Networking TS (ISO/IEC TS 19216:2018) ([ISO Store](https://www.iso.org/standard/64030.html)) ([2017 draft](https://wg21.link/n4734)) 



This TS extends the C++ library to include TCP/IP networking based on [boost.asio](https://www.boost.org/doc/libs/1_67_0/doc/html/boost_asio.html). 

  * 2018: Extensions for modules TS (ISO/IEC TS 21544:2018) ([ISO Store](https://www.iso.org/standard/71051.html)) ([2018 draft](https://wg21.link/n4720)) 



This TS extends the C++ core language to include modules. This adds the special identifiers [`module`](../identifier_with_special_meaning/module.html "cpp/identifier with special meaning/module"), [`import`](../identifier_with_special_meaning/import.html "cpp/identifier with special meaning/import"), and reintroduces the keyword [`export`](../keyword/export.html "cpp/keyword/export") with a new meaning. 

  * 2018: Extensions for Parallelism version 2 TS (ISO/IEC TS 19570:2018) ([ISO Store](https://www.iso.org/standard/70588.html)) ([2018 draft](https://wg21.link/n4773)) 



This TS extends the C++ library to include two new execution policies (unseq and vec), additional parallel algorithms such as reduction_plus or for_loop_strided, task blocks for forking and joining parallel tasks, SIMD types and operations on those types. 

### C++20 period

  * 2020: **C++20** ([ISO Store](https://www.iso.org/standard/79358.html)) (final draft [n4860 2020-03-31](https://wg21.link/n4860)) 



[Main Article: C++20](../20.html "cpp/20")

The major revision of the C++ standard after C++17 

  * 2021: Reflection TS (ISO/IEC TS 23619:2021) ([ISO store](https://www.iso.org/standard/76425.html)) ([2020 draft](https://wg21.link/n4856)) 



This TS extends C++ with the facilities to inspect program entities such as variables, enumerations, classes and their members, lambdas and their captures, etc. 

### Future development

  * [Experimental technical specifications](../experimental.html "cpp/experimental")
  * 2026: **C++** latest draft [n5008 (2025-03-15)](https://wg21.link/n5008)



[Main Article: C++23](../23.html "cpp/23")

The next major revision of the C++ standard 

### See also

[C documentation](../../c/language/history.html "c/language/history") for History of C  
---  
  
### External links

1\.  | [A History of C++: 1979-1991](https://www.stroustrup.com/hopl2.pdf)  
---|---  
2\.  | [Evolving a language in and for the real world: C++ 1991-2006](https://www.stroustrup.com/hopl-almost-final.pdf)  
3\.  | [Thriving in a crowded and changing world: C++ 2006-2020](https://www.stroustrup.com/hopl20main-p5-p-bfc9cd4--final.pdf)  
4\.  | [Standard C++ foundation](https://isocpp.org)  
5\.  | [C++ on Wikipedia](https://en.wikipedia.org/wiki/C%2B%2B#History "enwiki:C++")  
6\.  | [C++ Standards Committee](https://www.open-std.org/jtc1/sc22/wg21/)
