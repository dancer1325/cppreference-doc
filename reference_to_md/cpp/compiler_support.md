[C++](../cpp.html "cpp")

**Compiler support**  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


**Compiler support**

[C++11](compiler_support/11.html "cpp/compiler support/11")  
---  
[C++14](compiler_support/14.html "cpp/compiler support/14")  
[C++17](compiler_support/17.html "cpp/compiler support/17")  
[C++20](compiler_support/20.html "cpp/compiler support/20")  
[C++23](compiler_support/23.html "cpp/compiler support/23")  
[C++26](compiler_support/26.html "cpp/compiler support/26")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  This page is maintained as best-effort and may lag behind most recent compiler releases. If you see something is out-of-date, please help us by updating it!   
---|---  
  
  
The following tables present compiler support for new C++ features. These include accepted revisions to the standard, as well as various technical specifications: 



  * [C++26/2c core language features](compiler_support.html#cpp26)
  * [C++26/2c library features](compiler_support.html#C.2B.2B26_library_features)





  * [C++23 core language features](compiler_support.html#cpp23)
  * [C++23 library features](compiler_support.html#C.2B.2B23_library_features)





  * [C++20 core language features](compiler_support.html#cpp20)
  * [C++20 library features](compiler_support.html#C.2B.2B20_library_features)
  * [Older standards](compiler_support.html#Older_standards)
  * [Vendor compatibility checklists](compiler_support/vendors.html "cpp/compiler support/vendors")



## Contents

  * [1 Notes](compiler_support.html#Notes)
  * [2 C++26 features](compiler_support.html#C.2B.2B26_features)
    * [2.1 C++26 core language features](compiler_support.html#C.2B.2B26_core_language_features)
    * [2.2 C++26 library features](compiler_support.html#C.2B.2B26_library_features)
  * [3 C++23 features](compiler_support.html#C.2B.2B23_features)
    * [3.1 C++23 core language features](compiler_support.html#C.2B.2B23_core_language_features)
    * [3.2 C++23 library features](compiler_support.html#C.2B.2B23_library_features)
  * [4 C++20 features](compiler_support.html#C.2B.2B20_features)
    * [4.1 C++20 core language features](compiler_support.html#C.2B.2B20_core_language_features)
    * [4.2 C++20 library features](compiler_support.html#C.2B.2B20_library_features)
  * [5 Older standards](compiler_support.html#Older_standards)
    * [5.1 See also](compiler_support.html#See_also)

  
---  
  
#### Notes

* \- hover over a cell marked with the star * to see additional pop-up notes.  
DR _nn_ \- the number _nn_ after "DR" denotes target C++ revision the Defect Report is applied to, e.g., DR20 → C++20.

## C++26 features

Note that this list may change, as the draft C++26/2c standard evolves. 



### C++26 core language features

C++26 feature  
  
| Paper(s)  
  
| GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray |   
---|---|---|---|---|---|---|---|---|---|---|---  
DR98: Removing undefined behavior from lexing  | [P2621R3](https://wg21.link/P2621R3) | Yes  | 3.3  |  | 16.0.0* |  |  |  |  |   
DR98: Making non-encodable string literals ill-formed  | [P1854R4](https://wg21.link/P1854R4) | 14  | 14  |  | 16.0.0* |  |  |  |  |   
[Unevaluated strings](language/string_literal.html#Unevaluated_strings "cpp/language/string literal") | [P2361R6](https://wg21.link/P2361R6) | 14  | 17 (partial)*  
18  |  | 16.0.0* |  |  |  |  |   
Adding `**@**`, `**$**`, and `**`**` to the [basic character set](language/charset.html#Basic_character_set "cpp/language/charset") | [P2558R2](https://wg21.link/P2558R2) | 15  | Yes  |  | 16.0.0* |  |  |  |  |   
constexpr cast from void* ([FTM](experimental/feature_test.html#cpp_constexpr "cpp/feature test"))* | [P2738R1](https://wg21.link/P2738R1) | 14  | 17  |  |  |  |  |  |  |   
DR20: On the ignorability of standard attributes  | [P2552R3](https://wg21.link/P2552R3) | 15  | Yes  |  |  |  |  |  |  |   
DR11: Static storage for braced initializers  | [P2752R3](https://wg21.link/P2752R3) | 14  |  |  |  |  |  |  |  |   
User-generated [`static_assert`](language/static_assert.html "cpp/language/static assert") messages ([FTM](experimental/feature_test.html#cpp_static_assert "cpp/feature test"))* | [P2741R3](https://wg21.link/P2741R3) | 14  | 17  |  |  |  |  |  |  |   
[Placeholder variables with no name](language/conflicting_declarations.html#Potentially-conflict_declarations "cpp/language/conflicting declarations") ([FTM](experimental/feature_test.html#cpp_placeholder_variables "cpp/feature test"))* | [P2169R4](https://wg21.link/P2169R4) | 14  | 18  |  |  |  |  |  |  |   
[Pack indexing](language/pack_indexing.html "cpp/language/pack indexing") ([FTM](experimental/feature_test.html#cpp_pack_indexing "cpp/feature test"))* | [P2662R3](https://wg21.link/P2662R3) | 15  | 19  |  |  |  |  |  |  |   
Removing deprecated arithmetic conversion on enumerations  | [P2864R2](https://wg21.link/P2864R2) | 14  | 18  |  |  |  |  |  |  |   
DR11/20: Template parameter initialization  | [P2308R1](https://wg21.link/P2308R1) | 9  | 18  |  |  |  |  |  |  |   
Disallow binding a returned reference to a [temporary](language/reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization") | [P2748R5](https://wg21.link/P2748R5) | 14  | 19  |  |  |  |  |  |  |   
Attributes for [structured bindings](language/structured_binding.html "cpp/language/structured binding") ([FTM](experimental/feature_test.html#cpp_structured_bindings "cpp/feature test"))* | [P0609R3](https://wg21.link/P0609R3) | 15  | 19  |  |  |  |  |  |  |   
Erroneous behavior for [uninitialized reads](language/default_initialization.html#Read_from_an_indeterminate_byte "cpp/language/default initialization"), `[[[indeterminate](language/attributes/indeterminate.html "cpp/language/attributes/indeterminate")]]` attribute  | [P2795R5](https://wg21.link/P2795R5) |  |  |  |  |  |  |  |  |   
= delete("reason"); ([FTM](experimental/feature_test.html#cpp_deleted_function "cpp/feature test"))* | [P2573R2](https://wg21.link/P2573R2) | 15  | 19  |  |  |  |  |  |  |   
[Variadic](language/parameter_pack.html "cpp/language/parameter pack") [friends](language/friend.html "cpp/language/friend") ([FTM](experimental/feature_test.html#cpp_variadic_friend "cpp/feature test"))* | [P2893R3](https://wg21.link/P2893R3) | 15  | 20  |  |  |  |  |  |  |   
DR98: Clarifying rules for brace elision in [aggregate initialization](language/aggregate_initialization.html "cpp/language/aggregate initialization") | [P3106R1](https://wg21.link/P3106R1) | Yes  | 17  |  |  |  |  |  |  |   
DR20: Disallow module declarations to be macros  | [P3034R1](https://wg21.link/P3034R1) | 15  |  |  |  |  |  |  |  |   
DR11: Trivial infinite loops are not undefined behavior  | [P2809R3](https://wg21.link/P2809R3) | 14  | 19  |  |  |  |  |  |  |   
constexpr placement new ([FTM](experimental/feature_test.html#cpp_constexpr "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_new "cpp/feature test"))* | [P2747R2](https://wg21.link/P2747R2) | 15  | 20  |  |  |  |  |  |  |   
[Structured binding](language/structured_binding.html "cpp/language/structured binding") declaration as a condition ([FTM](experimental/feature_test.html#cpp_structured_bindings "cpp/feature test"))* | [P0963R3](https://wg21.link/P0963R3) | 15  | 6 (partial)*  
21  |  |  |  |  |  |  |   
Ordering of [constraints](language/constraints.html "cpp/language/constraints") involving [fold expressions](language/fold.html "cpp/language/fold") ([FTM](experimental/feature_test.html#cpp_fold_expressions "cpp/feature test"))* | [P2963R3](https://wg21.link/P2963R3) |  | 19  |  |  |  |  |  |  |   
[Deleting](language/delete.html "cpp/language/delete") a pointer to an incomplete type should be ill-formed  | [P3144R2](https://wg21.link/P3144R2) | 15  | 19  |  |  | 6.7  |  |  |  |   
[Structured bindings](language/structured_binding.html "cpp/language/structured binding") can introduce a [pack](language/parameter_pack.html "cpp/language/pack") ([FTM](experimental/feature_test.html#cpp_structured_bindings "cpp/feature test"))* | [P1061R10](https://wg21.link/P1061R10) |  | 21  |  |  |  |  |  |  |   
constexpr [structured bindings](language/structured_binding.html "cpp/language/structured binding") and references to constexpr variables  | [P2686R5](https://wg21.link/P2686R5) |  |  |  |  | 6.7  |  |  |  |   
constexpr [exceptions](language/exceptions.html "cpp/language/exceptions"): [[1]](language/constant_expression.html#P3068_1 "cpp/language/constant expression"), [[2]](language/constant_expression.html#P3068_2 "cpp/language/constant expression") ([FTM](experimental/feature_test.html#cpp_constexpr_exceptions "cpp/feature test"))* | [P3068R6](https://wg21.link/P3068R6) |  |  |  |  |  |  |  |  |   
Oxford variadic comma  | [P3176R1](https://wg21.link/P3176R1) | 15  | 20  |  |  |  |  |  |  |   
Removing deprecated array comparisons  | [P2865R6](https://wg21.link/P2865R6) | 15  | 20  |  |  |  |  |  |  |   
[`#embed`](preprocessor/embed.html "cpp/preprocessor/embed") ([FTM](experimental/feature_test.html#cpp_pp_embed "cpp/feature test"))* | [P1967R14](https://wg21.link/P1967R14) | 15  | 19* |  |  |  |  |  |  |   
Concept and variable-template template-parameters ([FTM](experimental/feature_test.html#cpp_template_parameters "cpp/feature test"))* | [P2841R7](https://wg21.link/P2841R7) |  |  |  |  |  |  |  |  |   
[Trivial relocatability](language/class_property_specifiers.html#Trivial_relocatability "cpp/language/class property specifiers") ([FTM](experimental/feature_test.html#cpp_trivial_relocatability "cpp/feature test"))* | [P2786R13](https://wg21.link/P2786R13) |  | 21* |  |  |  |  |  |  |   
Trivial unions ([FTM](experimental/feature_test.html#cpp_trivial_union "cpp/feature test"))* | [P3074R7](https://wg21.link/P3074R7) |  |  |  |  |  |  |  |  |   
Observable checkpoints  | [P1494R5](https://wg21.link/P1494R5) |  |  |  |  |  |  |  |  |   
[Contracts](language/contracts.html "cpp/language/contracts") ([FTM](experimental/feature_test.html#cpp_contracts "cpp/feature test"))* | [P2900R14](https://wg21.link/P2900R14) |  |  |  |  |  |  |  |  |   
  
  
C++26 feature  |    
  
Paper(s)  | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray  
  
### C++26 library features

C++26 feature  
  
| Paper(s)  
  
| GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang* |   
---|---|---|---|---|---|---  
Testing for success or failure of [`<charconv>`](header/charconv.html "cpp/header/charconv") functions ([FTM](experimental/feature_test.html#cpp_lib_to_chars "cpp/feature test"))* | [P2497R0](https://wg21.link/P2497R0) | 14  | 18  |  | 16.0.0*  
std::text_encoding: text encodings identification ([FTM](experimental/feature_test.html#cpp_lib_text_encoding "cpp/feature test"))* | [P1885R12](https://wg21.link/P1885R12)  
[P2862R1](https://wg21.link/P2862R1) | 14  |  |  |   
Arithmetic overloads of [`std::to_string`](string/basic_string/to_string.html "cpp/string/basic string/to string") and [`std::to_wstring`](string/basic_string/to_wstring.html "cpp/string/basic string/to wstring") use [`std::format`](utility/format/format.html "cpp/utility/format/format") ([FTM](experimental/feature_test.html#cpp_lib_to_string "cpp/feature test"))* | [P2587R3](https://wg21.link/P2587R3) | 14  |  |  |   
Type checking format args ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P2757R3](https://wg21.link/P2757R3) | 15  |  |  |   
Formatting pointers ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P2510R3](https://wg21.link/P2510R3) | 14* | 17* | 19.40** |   
[Hashing](utility/hash.html "cpp/utility/hash") support for [`std::chrono`](chrono.html "cpp/chrono") value classes ([FTM](experimental/feature_test.html#cpp_lib_chrono "cpp/feature test"))* | [P2592R3](https://wg21.link/P2592R3) |  |  |  |   
[`<rcu>`](header/rcu.html "cpp/header/rcu"): [Read-Copy Update](atomic.html#Read-Copy-Update_mechanism "cpp/thread") ([FTM](experimental/feature_test.html#cpp_lib_rcu "cpp/feature test"))* | [P2545R4](https://wg21.link/P2545R4) |  |  |  |   
[`<hazard_pointer>`](header/hazard_pointer.html "cpp/header/hazard pointer"): [Hazard pointers](atomic.html#Hazard_pointers "cpp/thread") ([FTM](experimental/feature_test.html#cpp_lib_hazard_pointer "cpp/feature test"))* | [P2530R3](https://wg21.link/P2530R3) |  |  |  |   
ADL-proof [`std::projected`](iterator/projected.html "cpp/iterator/projected") | [P2538R1](https://wg21.link/P2538R1) | 14* | 18* | 19.38** | 16.0.0*  
constexpr stable sorting ([FTM](experimental/feature_test.html#cpp_lib_constexpr_algorithms "cpp/feature test"))* | [P2562R1](https://wg21.link/P2562R1) | 15  | 21  |  |   
Member [`std::basic_format_arg::visit()`](utility/format/basic_format_arg.html#visit "cpp/utility/format/basic format arg") ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P2637R3](https://wg21.link/P2637R3) | 15  | 19  |  |   
Member [`std::variant::visit()`](utility/variant/visit.html "cpp/utility/variant/visit") ([FTM](experimental/feature_test.html#cpp_lib_variant "cpp/feature test"))* | [P2637R3](https://wg21.link/P2637R3) | 15  | 18  |  |   
std::is_within_lifetime ([FTM](experimental/feature_test.html#cpp_lib_is_within_lifetime "cpp/feature test"))* | [P2641R4](https://wg21.link/P2641R4) |  |  |  |   
Extending associative containers with the remaining heterogeneous overloads ([FTM](experimental/feature_test.html#cpp_lib_associative_heterogeneous_insertion "cpp/feature test"))* | [P2363R5](https://wg21.link/P2363R5) |  |  |  |   
Enabling the use of [`std::weak_ptr`](memory/weak_ptr.html "cpp/memory/weak ptr") as keys in unordered associative containers ([FTM](experimental/feature_test.html#cpp_lib_smart_ptr_owner_equality "cpp/feature test"))* | [P1901R2](https://wg21.link/P1901R2) |  |  |  |   
Native handles in file streams ([FTM](experimental/feature_test.html#cpp_lib_fstream_native_handle "cpp/feature test"))* | [P1759R6](https://wg21.link/P1759R6) | 14  | 18  |  | 16.0.0*  
Interfacing string streams with [`std::string_view`](string/basic_string_view.html "cpp/string/basic string view") ([FTM](experimental/feature_test.html#cpp_lib_sstream_from_string_view "cpp/feature test"))* | [P2495R3](https://wg21.link/P2495R3) |  | 19  |  |   
Interfacing [`std::bitset`](utility/bitset.html "cpp/utility/bitset") with [`std::string_view`](string/basic_string_view.html "cpp/string/basic string view") ([FTM](experimental/feature_test.html#cpp_lib_bitset "cpp/feature test"))* | [P2697R1](https://wg21.link/P2697R1) |  | 18  |  | 16.0.0*  
More constexpr for [`<cmath>`](header/cmath.html "cpp/header/cmath") and [`<complex>`](header/complex.html "cpp/header/complex") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_cmath "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_complex "cpp/feature test"))* | [P1383R2](https://wg21.link/P1383R2) | 4.6 (partial)* |  |  |   
Adding the new 2022 SI prefixes on ratios: std::quecto, std::ronto, std::ronna, and std::quetta ([FTM](experimental/feature_test.html#cpp_lib_ratio "cpp/feature test"))* | [P2734R0](https://wg21.link/P2734R0) | 14  | 17* |  |   
std::function_ref: type-erased callable reference ([FTM](experimental/feature_test.html#cpp_lib_function_ref "cpp/feature test"))* | [P0792R14](https://wg21.link/P0792R14) |  |  |  |   
std::copyable_function ([FTM](experimental/feature_test.html#cpp_lib_copyable_function "cpp/feature test"))* | [P2548R6](https://wg21.link/P2548R6) | 16  |  |  |   
[`std::bind_front`](utility/functional/bind_front.html "cpp/utility/functional/bind front"), [`std::bind_back`](utility/functional/bind_front.html "cpp/utility/functional/bind front"), and [`std::not_fn`](utility/functional/not_fn.html "cpp/utility/functional/not fn") to NTTP callables ([FTM](experimental/feature_test.html#cpp_lib_bind_front "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_bind_back "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_not_fn "cpp/feature test"))* | [P2714R1](https://wg21.link/P2714R1) |  |  |  |   
std::submdspan() ([FTM](experimental/feature_test.html#cpp_lib_submdspan "cpp/feature test"))* | [P2630R4](https://wg21.link/P2630R4)  
[P3355R1](https://wg21.link/P3355R1) |  |  |  |   
Freestanding language: Optional [` ::operator new`](memory/new/operator_new.html "cpp/memory/new/operator new") | [P2013R5](https://wg21.link/P2013R5) |  |  |  N/A |   
Freestanding [std::char_traits](string/char_traits.html "cpp/string/char traits"), [std::errc](error/errc.html "cpp/error/errc") and facilities in: [`<charconv>`](header/charconv.html "cpp/header/charconv"), [`<cstdlib>`](header/cstdlib.html "cpp/header/cstdlib"), [`<cstring>`](header/cstring.html "cpp/header/cstring"), [`<cwchar>`](header/cwchar.html "cpp/header/cwchar") ([FTM](experimental/feature_test.html#cpp_lib_freestanding_char_traits "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_charconv "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_cstdlib "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_cstring "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_cwchar "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_errc "cpp/feature test"))* | [P2338R4](https://wg21.link/P2338R4) |  |  |  N/A |   
More freestanding facilities ([FTM](experimental/feature_test.html#cpp_lib_freestanding_feature_test_macros "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_functional "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_iterator "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_memory "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_ranges "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_ratio "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_tuple "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_utility "cpp/feature test"))* | [P2198R7](https://wg21.link/P2198R7) |  |  |  N/A |   
[Saturation arithmetic](numeric.html#Saturation_arithmetic "cpp/numeric") ([FTM](experimental/feature_test.html#cpp_lib_saturation_arithmetic "cpp/feature test"))* | [P0543R3](https://wg21.link/P0543R3) | 14  | 18  |  | 16.0.0*  
[`<debugging>`](header/debugging.html "cpp/header/debugging"): [Debugging support](utility.html#Debugging_support "cpp/utility") ([FTM](experimental/feature_test.html#cpp_lib_debugging "cpp/feature test"))* | [P2546R5](https://wg21.link/P2546R5)  
[P2810R4](https://wg21.link/P2810R4) |  |  |  |   
[`<linalg>`](header/linalg.html "cpp/header/linalg"): A free function linear algebra interface based on the BLAS ([FTM](experimental/feature_test.html#cpp_lib_linalg "cpp/feature test"))* | [P1673R13](https://wg21.link/P1673R13)  
[P3050R2](https://wg21.link/P3050R2)  
[P3222R0](https://wg21.link/P3222R0) |  |  |  |   
Making [assert()](error/assert.html "cpp/error/assert") macro user friendly  | [P2264R7](https://wg21.link/P2264R7) |  |  |  |   
Runtime format strings ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P2918R2](https://wg21.link/P2918R2) | 14  | 18  |  | 16.0.0*  
std::span over an initializer list ([FTM](experimental/feature_test.html#cpp_lib_span_initializer_list "cpp/feature test"))* | [P2447R6](https://wg21.link/P2447R6) | 15  | 18  |  | 16.0.0*  
std::span::at() ([FTM](experimental/feature_test.html#cpp_lib_span "cpp/feature test"))* | [P2821R5](https://wg21.link/P2821R5) | 14  | 18  |  | 16.0.0*  
Added tuple protocol to [std::complex](numeric/complex.html "cpp/numeric/complex") ([FTM](experimental/feature_test.html#cpp_lib_tuple_like "cpp/feature test"))* | [P2819R2](https://wg21.link/P2819R2) | 15  | 19  |  |   
A new specification for [std::generate_canonical](numeric/random/generate_canonical.html "cpp/numeric/random/generate canonical") | [P0952R2](https://wg21.link/P0952R2) |  |  | 19.42* |   
Removing deprecated typedef std::allocator::is_always_equal | [P2868R3](https://wg21.link/P2868R3) | 15  | 18  |  | 16.0.0*  
Removing function overload of [std::basic_string::reserve()](string/basic_string/reserve.html "cpp/string/basic string/reserve") that takes no argument  | [P2870R3](https://wg21.link/P2870R3) |  | 18  |  | 16.0.0*  
Removing deprecated Unicode conversion facets ([`<codecvt>`](header/codecvt.html "cpp/header/codecvt"))  | [P2871R3](https://wg21.link/P2871R3) |  | 18  |  | 16.0.0*  
Freestanding: removing [std::strtok](string/byte/strtok.html "cpp/string/byte/strtok") ([FTM](experimental/feature_test.html#cpp_lib_freestanding_cstring "cpp/feature test"))* | [P2937R0](https://wg21.link/P2937R0) | 14  |  | 19.40* |   
Freestanding library: partial classes ([FTM](experimental/feature_test.html#cpp_lib_freestanding_algorithm "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_array "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_optional "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_string_view "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_variant "cpp/feature test"))* | [P2407R5](https://wg21.link/P2407R5) | 14  |  | 19.42* |   
Freestanding library: std::inout, std::expected, std::span ([FTM](experimental/feature_test.html#cpp_lib_freestanding_expected "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_mdspan "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_out_ptr "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_span "cpp/feature test"))* | [P2833R2](https://wg21.link/P2833R2) | 14  |  | 19.42* |   
DR23: std::basic_const_iterator should follow its underlying type’s convertibility ([FTM](experimental/feature_test.html#cpp_lib_ranges_as_const "cpp/feature test"))* | [P2836R1](https://wg21.link/P2836R1)  
[P2950R0](https://wg21.link/P2950R0) | 14  |  | 19.40* |   
DR20: [std::make_format_args](utility/format/make_format_args.html "cpp/utility/format/make format args") now accepts only lvalue references instead of forwarding references  | [P2905R2](https://wg21.link/P2905R2) | 14  | 18  | 19.40* | 16.0.0*  
DR20: Fix formatting of code units as integers ([FTM](experimental/feature_test.html#cpp_lib_format_uchar "cpp/feature test"))* | [P2909R4](https://wg21.link/P2909R4) | 13.3  | 18  | 19.40* | 16.0.0*  
views::concat ([FTM](experimental/feature_test.html#cpp_lib_ranges_concat "cpp/feature test"))* | [P2542R8](https://wg21.link/P2542R8) | 15  |  |  |   
Concatenation of [strings](string/basic_string.html "cpp/string/basic string") and [string views](string/basic_string_view.html "cpp/string/basic string view") ([FTM](experimental/feature_test.html#cpp_lib_string_view "cpp/feature test"))* | [P2591R5](https://wg21.link/P2591R5) | 15  | 19  |  |   
Enabling list-initialization for [algorithms](algorithm.html "cpp/algorithm") ([FTM](experimental/feature_test.html#cpp_lib_algorithm_default_value_type "cpp/feature test"))* | [P2248R8](https://wg21.link/P2248R8)  
[P3217R0](https://wg21.link/P3217R0) | 15  |  |  |   
std::ranges::generate_random ([FTM](experimental/feature_test.html#cpp_lib_ranges_generate_random "cpp/feature test"))* | [P1068R11](https://wg21.link/P1068R11) |  |  |  |   
[Comparisons](utility/functional/reference_wrapper/operator_cmp.html "cpp/utility/functional/reference wrapper/operator cmp") for [std::reference_wrapper](utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper"), and constraints for comparisons of [`std::pair`](utility/pair/operator_cmp.html "cpp/utility/pair/operator cmp"), [`std::tuple`](utility/tuple/operator_cmp.html "cpp/utility/tuple/operator cmp"), [`std::optional`](utility/optional/operator_cmp.html "cpp/utility/optional/operator cmp"), and [`std::variant`](utility/variant/operator_cmp.html "cpp/utility/variant/operator cmp") ([FTM](experimental/feature_test.html#cpp_lib_constrained_equality "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_reference_wrapper "cpp/feature test"))* | [P2944R3](https://wg21.link/P2944R3) | 14  | 19 (partial)* |  |   
Padded mdspan layouts ([FTM](experimental/feature_test.html#cpp_lib_submdspan "cpp/feature test"))* | [P2642R6](https://wg21.link/P2642R6) |  |  |  |   
New CTAD for std::span and std::mdspan with integral constants  | [P3029R1](https://wg21.link/P3029R1) |  | 19  |  |   
Atomic maximum and minimum ([FTM](experimental/feature_test.html#cpp_lib_atomic_min_max "cpp/feature test"))* | [P0493R5](https://wg21.link/P0493R5) |  |  |  |   
std::formatter<std::filesystem::path> ([FTM](experimental/feature_test.html#cpp_lib_format_path "cpp/feature test"))* | [P2845R8](https://wg21.link/P2845R8) |  |  |  |   
Printing Blank Lines with std::println() ([FTM](experimental/feature_test.html#cpp_lib_print "cpp/feature test"))* | [P3142R0](https://wg21.link/P3142R0) | 14* | 19* | 19.41** |   
Undeprecate std::polymorphic_allocator::destroy | [P2875R4](https://wg21.link/P2875R4) |  | 15  | 19.41* |   
Removing deprecated strstreams  | [P2867R2](https://wg21.link/P2867R2) |  | 19  |  |   
Removing deprecated [std::shared_ptr](memory/shared_ptr.html "cpp/memory/shared ptr") Atomic Access APIs  | [P2869R4](https://wg21.link/P2869R4) |  |  |  |   
Removing [std::wstring_convert](locale/wstring_convert.html "cpp/locale/wstring convert") | [P2872R3](https://wg21.link/P2872R3) |  | 19  |  |   
DR23: Permit an efficient implementation of std::print ([FTM](experimental/feature_test.html#cpp_lib_print "cpp/feature test"))* | [P3107R5](https://wg21.link/P3107R5)  
[P3235R3](https://wg21.link/P3235R3) |  |  | 19.43* |   
[Execution control library](experimental/execution.html "cpp/execution") ([FTM](experimental/feature_test.html#cpp_lib_senders "cpp/feature test"))* | [P2300R10](https://wg21.link/P2300R10)  
[P3396R0](https://wg21.link/P3396R0) |  |  |  |   
std::inplace_vector: dynamically-resizable vector with fixed capacity ([FTM](experimental/feature_test.html#cpp_lib_inplace_vector "cpp/feature test"))* | [P0843R14](https://wg21.link/P0843R14) |  |  |  |   
std::philox_engine: counter-based random number engine ([FTM](experimental/feature_test.html#cpp_lib_philox_engine "cpp/feature test"))* | [P2075R6](https://wg21.link/P2075R6) |  |  |  |   
[std::optional](utility/optional.html "cpp/utility/optional") range support ([FTM](experimental/feature_test.html#cpp_lib_optional_range_support "cpp/feature test"))* | [P3168R2](https://wg21.link/P3168R2) |  |  |  |   
std::is_virtual_base_of: type trait for detecting virtual base classes ([FTM](experimental/feature_test.html#cpp_lib_is_virtual_base_of "cpp/feature test"))* | [P2985R0](https://wg21.link/P2985R0) | 15  | 20  |  |   
std::dims for std::mdspan ([FTM](experimental/feature_test.html#cpp_lib_mdspan "cpp/feature test"))* | [P2389R2](https://wg21.link/P2389R2) |  | 19  |  |   
DR11: Formal specification of the type of [std::ignore](utility/tuple/ignore.html "cpp/utility/tuple/ignore") | [P2968R2](https://wg21.link/P2968R2) | 15  | 19  | 19.42* |   
DR20: Removing the common reference requirement from the indirectly invocable concepts ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P2997R1](https://wg21.link/P2997R1) | 15  | 19  | 19.42* |   
Deprecating [std::is_trivial](types/is_trivial.html "cpp/types/is trivial") and [std::is_trivial_v](types/is_trivial.html "cpp/types/is trivial") | [P3247R2](https://wg21.link/P3247R2) | 15  | 21  |  |   
DR20: Algorithm function objects  | [P3136R1](https://wg21.link/P3136R1) | Yes  | 14  | 19.39* | 14.0.3*  
[`std::ranges::cache_latest_view`](ranges/cache_latest_view.html "cpp/ranges/cache latest view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_cache_latest "cpp/feature test"))* | [P3138R5](https://wg21.link/P3138R5) | 15  |  |  |   
Constraining std::expected [equality operators](utility/expected/operator_cmp.html "cpp/utility/expected/operator cmp") ([FTM](experimental/feature_test.html#cpp_lib_constrained_equality "cpp/feature test"))* | [P3379R0](https://wg21.link/P3379R0) | 15  |  |  |   
std::aligned_accessor: an std::mdspan accessor expressing pointer over-alignment ([FTM](experimental/feature_test.html#cpp_lib_aligned_accessor "cpp/feature test"))* | [P2897R7](https://wg21.link/P2897R7) |  | 21  |  |   
std::is_sufficiently_aligned: checks a pointer’s alignment precondition ([FTM](experimental/feature_test.html#cpp_lib_is_sufficiently_aligned "cpp/feature test"))* | [P2897R7](https://wg21.link/P2897R7) |  | 21  |  |   
std::atomic_ref::address() ([FTM](experimental/feature_test.html#cpp_lib_atomic_ref "cpp/feature test"))* | [P2835R7](https://wg21.link/P2835R7) |  |  |  |   
DR11/20: cv-qualified types in [std::atomic](atomic/atomic.html "cpp/atomic/atomic") and std::atomic_ref | [P3323R1](https://wg21.link/P3323R1) |  |  | 19.44* |   
constexpr [std::atomic](atomic/atomic.html "cpp/atomic/atomic") and std::atomic_ref ([FTM](experimental/feature_test.html#cpp_lib_constexpr_atomic "cpp/feature test"))* | [P3309R3](https://wg21.link/P3309R3) |  |  |  |   
constexpr for [specialized memory algorithms](memory.html#Uninitialized_memory_algorithms "cpp/memory") ([FTM](experimental/feature_test.html#cpp_lib_raw_memory_algorithms "cpp/feature test"))* | [P3508R0](https://wg21.link/P3508R0)  
[P3369R0](https://wg21.link/P3369R0) | 15  |  |  |   
[`<stdbit.h>`](header/stdbit.h.html "cpp/header/stdbit.h") and [`<stdckdint.h>`](header/stdckdint.h.html "cpp/header/stdckdint.h") | [P3370R1](https://wg21.link/P3370R1) | 15  |  |  |   
[`<simd>`](header/simd.html "cpp/header/simd"): [data-parallel types](numeric/simd.html "cpp/numeric/simd") ([FTM](experimental/feature_test.html#cpp_lib_simd "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_simd_complex "cpp/feature test"))* | [P1928R15](https://wg21.link/P1928R15)  
[P3430R3](https://wg21.link/P3430R3)  
[P3441R2](https://wg21.link/P3441R2)  
[P3287R3](https://wg21.link/P3287R3)  
[P2663R7](https://wg21.link/P2663R7)  
[P2933R4](https://wg21.link/P2933R4) |  |  |  |   
A utility for creating [execution environments](experimental/execution.html#Environments "cpp/execution") | [P3325R5](https://wg21.link/P3325R5) |  |  |  |   
constexpr for exception types, e.g. [std::bad_alloc](memory/new/bad_alloc.html "cpp/memory/new/bad alloc"), [std::bad_cast](types/bad_cast.html "cpp/types/bad cast") etc. ([FTM](experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test"))* | [P3068R6](https://wg21.link/P3068R6)  
[P3378R2](https://wg21.link/P3378R2) |  |  |  |   
Trivial relocatability traits and operations ([FTM](experimental/feature_test.html#cpp_lib_trivially_relocatable "cpp/feature test"))* | [P2786R13](https://wg21.link/P2786R13) |  |  |  |   
Defang and deprecate [`std::memory_order::consume`](atomic/memory_order.html "cpp/atomic/memory order") | [P3475R1](https://wg21.link/P3475R1) |  |  |  |   
Put [std::monostate](utility/variant/monostate.html "cpp/utility/variant/monostate") in [`<utility>`](header/utility.html "cpp/header/utility") | [P0472R3](https://wg21.link/P0472R3) | 15  | 21  | 19.50* |   
std::indirect ([FTM](experimental/feature_test.html#cpp_lib_indirect "cpp/feature test"))* | [P3019R14](https://wg21.link/P3019R14) |  |  |  |   
std::polymorphic ([FTM](experimental/feature_test.html#cpp_lib_polymorphic "cpp/feature test"))* | [P3019R14](https://wg21.link/P3019R14) |  |  |  |   
More constexpr for containers and container adaptors: [std::deque](container/deque.html "cpp/container/deque"), std::flat_map, std::flat_multimap, std::flat_set, std::flat_multiset, [std::forward_list](container/forward_list.html "cpp/container/forward list"), [std::list](container/list.html "cpp/container/list"), [std::map](container/map.html "cpp/container/map"), [std::multimap](container/multimap.html "cpp/container/multimap"), [std::queue](container/queue.html "cpp/container/queue"), [std::priority_queue](container/priority_queue.html "cpp/container/priority queue"), [std::set](container/set.html "cpp/container/set"), [std::multiset](container/multiset.html "cpp/container/multiset"), [std::stack](container/stack.html "cpp/container/stack"), [std::unordered_map](container/unordered_map.html "cpp/container/unordered map"), [std::unordered_multimap](container/unordered_multimap.html "cpp/container/unordered multimap"), [std::unordered_set](container/unordered_set.html "cpp/container/unordered set"), and [std::unordered_multiset](container/unordered_multiset.html "cpp/container/unordered multiset")  
([FTM](experimental/feature_test.html#cpp_lib_constexpr_deque "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_flat_map "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_flat_set "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_forward_list "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_list "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_map "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_queue "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_set "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_stack "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_unordered_map "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_unordered_set "cpp/feature test"))* | [P3372R3](https://wg21.link/P3372R3) |  |  |  |   
constexpr std::inplace_vector for non-trivial types ([FTM](experimental/feature_test.html#cpp_lib_constexpr_inplace_vector "cpp/feature test"))* | [P3074R7](https://wg21.link/P3074R7) |  |  |  |   
[`std::ranges::to_input_view`](ranges/to_input_view.html "cpp/ranges/to input view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_to_input "cpp/feature test"))* | [P3137R3](https://wg21.link/P3137R3) | 15  |  |  |   
[`std::ranges::approximately_sized_range`](ranges/approximately_sized_range.html "cpp/ranges/approximately sized range") and [`std::ranges::reserve_hint`](ranges/reserve_hint.html "cpp/ranges/reserve hint") ([FTM](experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test"))* | [P2846R6](https://wg21.link/P2846R6) |  |  |  |   
[`<hive>`](header/hive.html "cpp/header/hive"): A bucket-based container that re-uses memory locations from erased elements ([FTM](experimental/feature_test.html#cpp_lib_hive "cpp/feature test"))* | [P0447R28](https://wg21.link/P0447R28) |  |  |  |   
[`<contracts>`](header/contracts.html "cpp/header/contracts"): Contract-violation handling support ([FTM](experimental/feature_test.html#cpp_lib_contracts "cpp/feature test"))* | [P2900R14](https://wg21.link/P2900R14) |  |  |  |   
Standard library hardening ([FTM](experimental/feature_test.html#cpp_lib_hardened_array "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_basic_string "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_basic_string_view "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_bitset "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_deque "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_expected "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_forward_list "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_inplace_vector "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_list "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_mdspan "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_optional "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_span "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_valarray "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_hardened_vector "cpp/feature test"))* | [P3471R4](https://wg21.link/P3471R4) | 15 (partial)* |  | 19.44* (partial)* |   
Freestanding library: [`<algorithm>`](header/algorithm.html "cpp/header/algorithm"), [`<numeric>`](header/numeric.html "cpp/header/numeric"), [`<random>`](header/random.html "cpp/header/random"), ([`<execution>`](header/execution.html "cpp/header/execution"), [`<memory>`](header/memory.html "cpp/header/memory"))  
([FTM](experimental/feature_test.html#cpp_lib_freestanding_algorithm "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_execution "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_memory "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_numeric "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_freestanding_random "cpp/feature test"))* | [P2976R1](https://wg21.link/P2976R1) |  |  |  |   
DR20: Converting contiguous iterators to pointers  | [P3349R0](https://wg21.link/P3349R0) | 15  |  |  |   
  
  
C++26 feature  |    
  
Paper(s)  | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang*  
  
## C++23 features



### C++23 core language features

C++23 feature  
  
| Paper(s)  
  
| GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray |   
---|---|---|---|---|---|---|---|---|---|---|---  
[Literal suffix](language/integer_literal.html#The_type_of_the_literal "cpp/language/integer literal") for (signed) [`size_t`](types/size_t.html "cpp/types/size t") ([FTM](experimental/feature_test.html#cpp_size_t_suffix "cpp/feature test"))* | [P0330R8](https://wg21.link/P0330R8) | 11  | 13  | 19.43* | 13.1.6* | 6.5  | 2022.2  | 23.9  |  |   
Make `**()**` more optional for [lambdas](language/lambda.html "cpp/language/lambda") | [P1102R2](https://wg21.link/P1102R2) | 11  | 13  | 19.44* | 13.1.6* | 6.3  | 2022.2  | 22.5  |  |   
[`if consteval`](language/if.html#Consteval_if "cpp/language/if") ([FTM](experimental/feature_test.html#cpp_if_consteval "cpp/feature test"))* | [P1938R3](https://wg21.link/P1938R3) | 12  | 14  | 19.44* | 14.0.0* | 6.3  | 2022.2  | 24.1  |  |   
Removing Garbage Collection Support  | [P2186R2](https://wg21.link/P2186R2) | 12  |  N/A | 19.30* |  |  N/A |  |  N/A |  |   
Narrowing contextual conversions in [`static_assert`](language/static_assert.html "cpp/language/static assert") and [constexpr if](language/if.html#Constexpr_if "cpp/language/if") | [P1401R5](https://wg21.link/P1401R5) | 9  | 13 (partial)*  
14  |  | 14.0.0* |  | 2022.2  | 20.7  |  |   
Trimming whitespaces before line splicing  | [P2223R2](https://wg21.link/P2223R2) | Yes  | Yes  |  | Yes  | 6.7  | 2022.2  | Yes  |  |   
Make declaration order layout mandated  | [P1847R4](https://wg21.link/P1847R4) | Yes  | Yes  | Yes  | Yes  |  | 2022.2  | Yes  |  |   
Removing mixed wide string literal [concatenation](language/string_literal.html#Concatenation "cpp/language/string literal") | [P2201R1](https://wg21.link/P2201R1) | Yes  | Yes  | Yes  | Yes  | Yes  | Yes  | Yes  |  |   
[Explicit object member functions](language/member_functions.html#Explicit_object_member_functions "cpp/language/member functions") (deducing this) ([FTM](experimental/feature_test.html#cpp_explicit_this_parameter "cpp/feature test"))* | [P0847R7](https://wg21.link/P0847R7) | 14  | 18  
19* | 19.32*  
(partial)*  
19.43* |  | 6.3  |  | 22.5  |  |   
[`auto(x)` and `auto{x}`](language/explicit_cast.html "cpp/language/explicit cast") ([FTM](experimental/feature_test.html#cpp_auto_cast "cpp/feature test"))* | [P0849R8](https://wg21.link/P0849R8) | 12  | 15  |  | 14.0.3* | 6.4  | 2022.2  | 23.3  |  |   
[`#elifdef` and `#elifndef`](preprocessor/conditional.html "cpp/preprocessor/conditional") | [P2334R1](https://wg21.link/P2334R1) | 12  | 13  | 19.40* | 13.1.6* | 6.5  | 2022.2  | 23.9  |  |   
Non-literal variables (and labels and gotos) in [`constexpr`](language/constexpr.html "cpp/language/constexpr") functions ([FTM](experimental/feature_test.html#cpp_constexpr "cpp/feature test"))* | [P2242R3](https://wg21.link/P2242R3) | 12  | 15  | 19.43* | 14.0.3* | 6.3  | 2022.2  | 22.5  |  |   
Consistent character literal encoding  | [P2316R2](https://wg21.link/P2316R2) | Yes  | Yes  | 19.30* | Yes  | Yes  | 2022.2  | Yes  |  |   
[Character sets and encodings](language/charset.html "cpp/language/charset") | [P2314R4](https://wg21.link/P2314R4) | 10  | Yes  |  | Yes  | Yes  | 2022.2  | Yes  |  |   
Extend init-statement (of [`for` loop](language/for.html#Syntax "cpp/language/for")) to allow [alias-declaration](language/type_alias.html "cpp/language/type alias") | [P2360R0](https://wg21.link/P2360R0) | 12  | 14  |  | 14.0.0* |  | 2022.2  |  |  |   
Multidimensional [subscript operator](language/operators.html#Array_subscript_operator "cpp/language/operators") ([FTM](experimental/feature_test.html#cpp_multidimensional_subscript "cpp/feature test"))* | [P2128R6](https://wg21.link/P2128R6) | 12  | 15  | 19.42* | 14.0.3* |  | 2022.2  |  |  |   
Attributes on [lambdas](language/lambda.html "cpp/language/lambda") | [P2173R1](https://wg21.link/P2173R1) | 9  | 13  | 19.44* | 13.1.6* | 6.6  | 2022.2  | 22.5  |  |   
[`#warning`](preprocessor/warning.html "cpp/preprocessor/error") | [P2437R1](https://wg21.link/P2437R1) | Yes* | Yes  |  | 15.0.0* | 6.5  | 2023.2  | Yes  |  |   
Remove non-encodable wide character literals and multicharacter wide character literals  | [P2362R3](https://wg21.link/P2362R3) | 13  | 14  |  | 15.0.0* | 6.7  | 2023.2  |  |  |   
Labels at the end of compound statements  | [P2324R2](https://wg21.link/P2324R2) | 13  | 16  |  | 16.0.0* | 6.5  | 2023.2  | 23.9  |  |   
[Delimited escape sequences](language/escape.html "cpp/language/escape") | [P2290R3](https://wg21.link/P2290R3) | 13  | 15  |  | 15.0.0* | 6.7  | 2023.2  |  |  |   
[Named universal character escapes](language/escape.html#Named_universal_character_escapes "cpp/language/escape") ([FTM](experimental/feature_test.html#cpp_named_character_escapes "cpp/feature test"))* | [P2071R2](https://wg21.link/P2071R2) | 13  | 15  |  | 15.0.0* | 6.7  | 2023.2  |  |  |   
Relaxing some constexpr restrictions ([FTM](experimental/feature_test.html#cpp_constexpr "cpp/feature test"))* | [P2448R2](https://wg21.link/P2448R2) | 13  | 17 (partial)  
19  |  |  |  | 2024.0 (partial)  |  |  |   
Simpler implicit move ([FTM](experimental/feature_test.html#cpp_implicit_move "cpp/feature test"))* | [P2266R3](https://wg21.link/P2266R3) | 13  | 13  |  |  | 6.7  | 2022.2  |  |  |   
static operator() ([FTM](experimental/feature_test.html#cpp_static_call_operator "cpp/feature test"))* | [P1169R4](https://wg21.link/P1169R4) | 13  | 16  | 19.44* | 16.0.0* | 6.7  | 2023.2  |  |  |   
Requirements for optional [extended floating-point types](types/floating-point.html "cpp/types/floating-point") | [P1467R9](https://wg21.link/P1467R9) | 13  |  |  N/A |  | 6.4  |  |  |  |   
Class template argument deduction from inherited constructors  | [P2582R1](https://wg21.link/P2582R1) | 14  |  |  |  |  |  |  |  |   
Attribute `[[[assume](language/attributes/assume.html "cpp/language/attributes/assume")]]` | [P1774R8](https://wg21.link/P1774R8) | 13  | 19  |  |  |  |  |  |  |   
Support for [UTF-8 as a portable source file encoding](language/translation_phases.html#Phase_1 "cpp/language/translation phases") | [P2295R6](https://wg21.link/P2295R6) | 13* | 15* | 19.0 (Update 2)** | 15.0.0* |  | 2023.2  |  |  |   
static operator[] ([FTM](experimental/feature_test.html#cpp_multidimensional_subscript "cpp/feature test"))* | [P2589R1](https://wg21.link/P2589R1) | 13  | 16  | 19.44* | 16.0.0* | 6.7  | 2023.2  |  |  |   
Permitting static constexpr variables in constexpr functions ([FTM](experimental/feature_test.html#cpp_constexpr "cpp/feature test"))* | [P2647R1](https://wg21.link/P2647R1) | 13  | 16  |  | 16.0.0* |  | 2023.2  |  |  |   
Extending the lifetime of temporaries in range-based for loop initializer ([FTM](experimental/feature_test.html#cpp_range_based_for "cpp/feature test"))* | [P2644R1](https://wg21.link/P2644R1)  
[P2718R0](https://wg21.link/P2718R0)  
[CWG2659](https://wg21.link/CWG2659) | 15  | 19  |  |  |  |  |  |  |   
Declarations and where to find them  | [P1787R6](https://wg21.link/P1787R6) |  |  |  |  |  |  |  |  |   
DR11: Change scope of [lambda](language/lambda.html#Syntax "cpp/language/lambda") trailing-return-type  | [P2036R3](https://wg21.link/P2036R3)  
[P2579R0](https://wg21.link/P2579R0) |  | 17  |  |  |  | 2023.2  |  |  |   
DR20: Meaningful exports  | [P2615R1](https://wg21.link/P2615R1) | 15  | 17 (partial)  |  |  |  |  |  |  |   
DR20: consteval needs to propagate up ([FTM](experimental/feature_test.html#cpp_consteval "cpp/feature test"))* | [P2564R3](https://wg21.link/P2564R3) | 14  | 17  |  | 16.0.0* | 6.7  | 2024.0  |  |  |   
DR98: C++ Identifier Syntax using Unicode Standard Annex 31  | [P1949R7](https://wg21.link/P1949R7) | 12  | 14  |  | 14.0.0* | 6.4  | 2022.2  |  |  |   
DR11: Allow duplicate [attributes](language/attributes.html#Syntax "cpp/language/attributes") | [P2156R1](https://wg21.link/P2156R1) | 11  | 13  |  | 13.1.6* | 6.5  |  | 23.9  |  |   
DR20: Adjusting the value of feature-test macro [`__cpp_concepts`](experimental/feature_test.html#Language_features "cpp/feature test") | [P2493R0](https://wg21.link/P2493R0) | 12  |  | 19.32* |  | 6.4  |  | 23.3  |  |   
DR98: [Relax requirements on wchar_t](language/types.html#Defect_reports "cpp/language/types") to match existing practices  | [P2460R2](https://wg21.link/P2460R2) | Yes  | Yes  | Yes  | 15.0.0* |  N/A | 2023.2  |  |  |   
DR11: Using unknown pointers and references in constant expressions  | [P2280R4](https://wg21.link/P2280R4) | 14  | 20* |  |  |  |  |  |  |   
DR20: The Equality Operator You Are Looking For  | [P2468R2](https://wg21.link/P2468R2) | 13  | 16  |  | 16.0.0* |  | 2023.2  |  |  |   
DR20: char8_t Compatibility and Portability Fix ([FTM](experimental/feature_test.html#cpp_char8_t "cpp/feature test"))* | [P2513R4](https://wg21.link/P2513R4) | 13  | 16  | 19.34* | 16.0.0* |  | 2023.2  |  |  |   
DR98/11: Clarify reporting of [diagnostic directives](preprocessor/warning.html "cpp/preprocessor/error") and allow static_assert of non-value-dependent expressions in a template context  | [CWG2518](https://wg21.link/CWG2518) | 13  | 17  | 16.0*  
(partial)*  
19.40* |  |  |  |  |  |   
  
  
C++23 feature  |    
  
Paper(s)  | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray  
  
### C++23 library features

C++23 feature  
  
| Paper(s)  
  
| GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang* |   
---|---|---|---|---|---|---  
[Stacktrace library](error.html#Stacktrace "cpp/error") ([FTM](experimental/feature_test.html#cpp_lib_stacktrace "cpp/feature test"))* | [P0881R7](https://wg21.link/P0881R7)  
[P2301R1](https://wg21.link/P2301R1) | 12 (partial)*  
14* |  | 19.34* |   
[`<stdatomic.h>`](header/stdatomic.h.html "cpp/header/stdatomic.h") ([FTM](experimental/feature_test.html#cpp_lib_stdatomic_h "cpp/feature test"))* | [P0943R6](https://wg21.link/P0943R6) | 12  | 15  | 19.31* | 14.0.3*  
[`std::is_scoped_enum`](types/is_scoped_enum.html "cpp/types/is scoped enum") ([FTM](experimental/feature_test.html#cpp_lib_is_scoped_enum "cpp/feature test"))* | [P1048R1](https://wg21.link/P1048R1) | 11  | 12  | 19.30* | 13.0.0*  
[`std::basic_string::contains()`](string/basic_string/contains.html "cpp/string/basic string/contains"), [`std::basic_string_view::contains()`](string/basic_string_view/contains.html "cpp/string/basic string view/contains") ([FTM](experimental/feature_test.html#cpp_lib_string_contains "cpp/feature test"))* | [P1679R3](https://wg21.link/P1679R3) | 11  | 12  | 19.30* | 13.0.0*  
[`std::to_underlying`](utility/to_underlying.html "cpp/utility/to underlying") ([FTM](experimental/feature_test.html#cpp_lib_to_underlying "cpp/feature test"))* | [P1682R3](https://wg21.link/P1682R3) | 11  | 13  | 19.30* | 13.1.6*  
Relaxing requirements for [time_point<>::clock](chrono/time_point.html "cpp/chrono/time point") | [P2212R2](https://wg21.link/P2212R2) |  N/A |  N/A |  N/A |  N/A  
[Providing size feedback](memory/allocator_traits/allocate_at_least.html "cpp/memory/allocator traits/allocate at least") in the Allocator interface ([FTM](experimental/feature_test.html#cpp_lib_allocate_at_least "cpp/feature test"))* | [P0401R6](https://wg21.link/P0401R6) |  | 15  | 19.30* | 14.0.3*  
[`<spanstream>`](header/spanstream.html "cpp/header/spanstream"): string-stream with [`std::span`](container/span.html "cpp/container/span")-based buffer ([FTM](experimental/feature_test.html#cpp_lib_spanstream "cpp/feature test"))* | [P0448R4](https://wg21.link/P0448R4) | 12  |  | 19.31* |   
[`std::out_ptr()`](memory/out_ptr_t/out_ptr.html "cpp/memory/out ptr t/out ptr"), [`std::inout_ptr()`](memory/inout_ptr_t/inout_ptr.html "cpp/memory/inout ptr t/inout ptr") ([FTM](experimental/feature_test.html#cpp_lib_out_ptr "cpp/feature test"))* | [P1132R8](https://wg21.link/P1132R8) | 14  | 19  | 19.30* |   
constexpr [`type_info::operator==()`](types/type_info/operator_cmp.html "cpp/types/type info/operator cmp") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_typeinfo "cpp/feature test"))* | [P1328R1](https://wg21.link/P1328R1) | 12  | 17  | 19.33**  
19.34* | 15.0.0*  
Iterator pair constructors for [`std::stack`](container/stack/stack.html "cpp/container/stack/stack") and [`std::queue`](container/queue/queue.html "cpp/container/queue/queue") ([FTM](experimental/feature_test.html#cpp_lib_adaptor_iterator_pair_constructor "cpp/feature test"))* | [P1425R4](https://wg21.link/P1425R4) | 12  | 14  | 19.31* | 14.0.3*  
Non-deduction context for allocators in container deduction guides  | [P1518R2](https://wg21.link/P1518R2) | 12* | 13* | 19.31** | 13.1.6**  
[`ranges::starts_with()`](algorithm/ranges/starts_with.html "cpp/algorithm/ranges/starts with") and [`ranges::ends_with()`](algorithm/ranges/ends_with.html "cpp/algorithm/ranges/ends with") ([FTM](experimental/feature_test.html#cpp_lib_ranges_starts_ends_with "cpp/feature test"))* | [P1659R3](https://wg21.link/P1659R3) |  | 17 (partial)*  
18  | 19.31* | 16.0.0*  
Prohibiting [std::basic_string](string/basic_string.html "cpp/string/basic string") and [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view") construction from [`nullptr`](language/nullptr.html "cpp/language/nullptr") | [P2166R1](https://wg21.link/P2166R1) | 12  | 13  | 19.30* | 13.1.6*  
[`std::invoke_r()`](utility/functional/invoke.html "cpp/utility/functional/invoke") ([FTM](experimental/feature_test.html#cpp_lib_invoke_r "cpp/feature test"))* | [P2136R3](https://wg21.link/P2136R3) | 12  | 17  | 19.31* | 15.0.0*  
Range [constructor](string/basic_string_view/basic_string_view.html "cpp/string/basic string view/basic string view") for [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view") | [P1989R2](https://wg21.link/P1989R2) | 11  | 14  | 19.30* | 14.0.3*  
Default template arguments for [std::pair](utility/pair.html "cpp/utility/pair")'s forwarding [constructor](utility/pair/pair.html "cpp/utility/pair/pair") | [P1951R1](https://wg21.link/P1951R1) | 14  | 14  | 19.30* | 14.0.3*  
Remove Garbage Collection and Reachability-Based Leak Detection ([library support](memory.html#Garbage_collector_support "cpp/memory"))  | [P2186R2](https://wg21.link/P2186R2) | 12  | 14  | 19.30* | 14.0.3*  
zip: [`views::zip`](ranges/zip_view.html "cpp/ranges/zip view"), [`views::zip_transform`](ranges/zip_transform_view.html "cpp/ranges/zip transform view"), [`views::adjacent`](ranges/adjacent_view.html "cpp/ranges/adjacent view"), and [`views::adjacent_transform`](ranges/adjacent_transform_view.html "cpp/ranges/adjacent transform view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_zip "cpp/feature test"))* | [P2321R2](https://wg21.link/P2321R2) | 13  | 15 (partial)* | 19.33*(partial)***  
19.37* | 14.0.3*  
Heterogeneous erasure overloads for associative containers ([FTM](experimental/feature_test.html#cpp_lib_associative_heterogeneous_erasure "cpp/feature test"))* | [P2077R3](https://wg21.link/P2077R3) |  |  | 19.32* |   
[`std::byteswap()`](numeric/byteswap.html "cpp/numeric/byteswap") ([FTM](experimental/feature_test.html#cpp_lib_byteswap "cpp/feature test"))* | [P1272R4](https://wg21.link/P1272R4) | 12  | 14  | 19.31* | 14.0.3*  
[Printing](io/basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt") volatile T* | [P1147R1](https://wg21.link/P1147R1) | 11.3  | 14  | 19.31* | 14.0.3*  
[`basic_string::resize_and_overwrite()`](string/basic_string/resize_and_overwrite.html "cpp/string/basic string/resize and overwrite") ([FTM](experimental/feature_test.html#cpp_lib_string_resize_and_overwrite "cpp/feature test"))* | [P1072R10](https://wg21.link/P1072R10) | 12  | 14  | 19.31* | 14.0.3*  
Monadic operations for [std::optional](utility/optional.html "cpp/utility/optional") ([FTM](experimental/feature_test.html#cpp_lib_optional "cpp/feature test"))* | [P0798R8](https://wg21.link/P0798R8) | 12  | 14  | 19.32* | 14.0.3*  
[`std::move_only_function`](utility/functional/move_only_function.html "cpp/utility/functional/move only function") ([FTM](experimental/feature_test.html#cpp_lib_move_only_function "cpp/feature test"))* | [P0288R9](https://wg21.link/P0288R9) | 12  |  | 19.32* |   
Add a conditional noexcept specification to [std::exchange](utility/exchange.html "cpp/utility/exchange") | [P2401R0](https://wg21.link/P2401R0) | 12  | 14  | 19.25* | 14.0.3*  
Require [`std::span`](container/span.html "cpp/container/span") & [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view") to be [TriviallyCopyable](named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") | [P2251R1](https://wg21.link/P2251R1) | Yes  | Yes  | Yes  | Yes   
Clarifying the status of the “C headers”  | [P2340R1](https://wg21.link/P2340R1) | Yes  | Yes  | Yes  | Yes   
[`<expected>`](header/expected.html "cpp/header/expected") ([FTM](experimental/feature_test.html#cpp_lib_expected "cpp/feature test"))* | [P0323R12](https://wg21.link/P0323R12)  
[P2549R1](https://wg21.link/P2549R1) | 12  | 16  | 19.33* | 15.0.0*  
constexpr for [`<cmath>`](header/cmath.html "cpp/header/cmath") and [`<cstdlib>`](header/cstdlib.html "cpp/header/cstdlib") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_cmath "cpp/feature test"))* | [P0533R9](https://wg21.link/P0533R9) | 4.6 (partial)* |  |  |   
[`std::unreachable()`](utility/unreachable.html "cpp/utility/unreachable") ([FTM](experimental/feature_test.html#cpp_lib_unreachable "cpp/feature test"))* | [P0627R6](https://wg21.link/P0627R6) | 12  | 15  | 19.32* | 14.0.3*  
Deprecating [std::aligned_storage](types/aligned_storage.html "cpp/types/aligned storage") and [std::aligned_union](types/aligned_union.html "cpp/types/aligned union") | [P1413R3](https://wg21.link/P1413R3) | 13  | 16  | 19.33* |   
[`std::reference_constructs_from_temporary`](types/reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary") & [`std::reference_converts_from_temporary`](types/reference_converts_from_temporary.html "cpp/types/reference converts from temporary") ([FTM](experimental/feature_test.html#cpp_lib_reference_from_temporary "cpp/feature test"))* | [P2255R2](https://wg21.link/P2255R2) | 13 (partial)*  
14  | 21 (partial)* |  |   
constexpr [std::unique_ptr](memory/unique_ptr.html "cpp/memory/unique ptr") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_memory "cpp/feature test"))* | [P2273R3](https://wg21.link/P2273R3) | 12  | 16  | 19.33* | 15.0.0*  
Constructing containers and strings from ranges with [`ranges::to()`](ranges/to.html "cpp/ranges/to"), tagged constructors, insert and assign member functions ([FTM](experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_ranges_to_container "cpp/feature test"))* | [P1206R7](https://wg21.link/P1206R7) | 14 (partial)*  
15  | 17  | 19.34* | 15.0.0*  
Pipe support for user-defined range adaptors ([`ranges::range_adaptor_closure`](ranges/range_adaptor_closure.html "cpp/ranges/range adaptor closure"), [`std::bind_back`](utility/functional/bind_front.html "cpp/utility/functional/bind front")) ([FTM](experimental/feature_test.html#cpp_lib_bind_back "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P2387R3](https://wg21.link/P2387R3) | 13 (partial)*  
14  | 19  | 19.34* |   
[`ranges::iota()`](algorithm/ranges/iota.html "cpp/algorithm/ranges/iota"), [`ranges::shift_left()`](algorithm/ranges/shift.html "cpp/algorithm/ranges/shift"), and [`ranges::shift_right()`](algorithm/ranges/shift.html "cpp/algorithm/ranges/shift") ([FTM](experimental/feature_test.html#cpp_lib_ranges_iota "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_shift "cpp/feature test"))* | [P2440R1](https://wg21.link/P2440R1) | 13 (partial)* |  | 19.34* |   
[`views::join_with`](ranges/join_with_view.html "cpp/ranges/join with view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_join_with "cpp/feature test"))* | [P2441R2](https://wg21.link/P2441R2) | 13  |  | 19.34* |   
[`views::chunk`](ranges/chunk_view.html "cpp/ranges/chunk view") and [`views::slide`](ranges/slide_view.html "cpp/ranges/slide view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_chunk "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_ranges_slide "cpp/feature test"))* | [P2442R1](https://wg21.link/P2442R1) | 13  |  | 19.33* |   
[`views::chunk_by`](ranges/chunk_by_view.html "cpp/ranges/chunk by view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_chunk_by "cpp/feature test"))* | [P2443R1](https://wg21.link/P2443R1) | 13  | 18  | 19.33* | 16.0.0*  
[`std::mdspan`](container/mdspan.html "cpp/container/mdspan"): a non-owning multidimensional array reference ([FTM](experimental/feature_test.html#cpp_lib_mdspan "cpp/feature test"))* | [P0009R18](https://wg21.link/P0009R18)  
[P2599R2](https://wg21.link/P2599R2)  
[P2604R0](https://wg21.link/P2604R0)  
[P2613R1](https://wg21.link/P2613R1)  
[P2763R1](https://wg21.link/P2763R1) |  | 17 (partial)*  
18  | 19.39* | 15.0.0*  
[`<flat_map>`](header/flat_map.html "cpp/header/flat map") ([FTM](experimental/feature_test.html#cpp_lib_flat_map "cpp/feature test"))* | [P0429R9](https://wg21.link/P0429R9) | 15  | 20  |  |   
[`<flat_set>`](header/flat_set.html "cpp/header/flat set") ([FTM](experimental/feature_test.html#cpp_lib_flat_set "cpp/feature test"))* | [P1222R4](https://wg21.link/P1222R4) | 15  | 21  |  |   
[`ranges::find_last()`](algorithm/ranges/find_last.html "cpp/algorithm/ranges/find last"), [`ranges::find_last_if()`](algorithm/ranges/find_last.html "cpp/algorithm/ranges/find last"), and [`ranges::find_last_if_not()`](algorithm/ranges/find_last.html "cpp/algorithm/ranges/find last") ([FTM](experimental/feature_test.html#cpp_lib_ranges_find_last "cpp/feature test"))* | [P1223R5](https://wg21.link/P1223R5) | 13  | 19  | 19.36* |   
Freestanding Library: Easy [`<utility>`](header/utility.html "cpp/header/utility"), [`<ranges>`](header/ranges.html "cpp/header/ranges"), and [`<iterator>`](header/iterator.html "cpp/header/iterator") | [P1642R11](https://wg21.link/P1642R11) | 13* |  |  N/A |   
[`views::stride`](ranges/stride_view.html "cpp/ranges/stride view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_stride "cpp/feature test"))* | [P1899R3](https://wg21.link/P1899R3) | 13  |  | 19.34* |   
Compatibility between [std::tuple](utility/tuple.html "cpp/utility/tuple") and tuple-like objects ([FTM](experimental/feature_test.html#cpp_lib_tuple_like "cpp/feature test"))* | [P2165R4](https://wg21.link/P2165R4) | 14  | 2.9 (partial)* | 19.36* (partial)*  
19.37* | partial*  
Rectifying constant iterators, sentinels, and ranges. [views::as_const](ranges/as_const_view.html) ([FTM](experimental/feature_test.html#cpp_lib_ranges_as_const "cpp/feature test"))* | [P2278R4](https://wg21.link/P2278R4) | 13  |  | 19.35* (partial)*  
19.36* |   
[Formatting](utility/format.html "cpp/utility/format") Ranges ([FTM](experimental/feature_test.html#cpp_lib_format_ranges "cpp/feature test"))* | [P2286R8](https://wg21.link/P2286R8) | 15 (partial)*  
15.2  | 16  | 19.37*(partial)*  
19.39*(partial)*  
19.41*(partial)*  
19.42* | 15.0.0*  
Improve default container [formatting](utility/format.html "cpp/utility/format") ([FTM](experimental/feature_test.html#cpp_lib_format_ranges "cpp/feature test"))* | [P2585R1](https://wg21.link/P2585R1) | 15  | 16 (partial)*  
17  | 19.42* | 15.0.0*  
Formatted output library [`<print>`](header/print.html "cpp/header/print") ([FTM](experimental/feature_test.html#cpp_lib_print "cpp/feature test"))* | [P2093R14](https://wg21.link/P2093R14)  
[P2539R4](https://wg21.link/P2539R4) | 14  | 17 (partial)*  
18  | 19.37* | 15.0.0**  
16.0.0*  
[Formatting](utility/format.html "cpp/utility/format") [std::thread::id](thread/thread/id.html "cpp/thread/thread/id") and [`std::stacktrace`](utility/basic_stacktrace.html "cpp/utility/basic stacktrace") ([FTM](experimental/feature_test.html#cpp_lib_formatters "cpp/feature test"))* | [P2693R1](https://wg21.link/P2693R1) | 14  | 17 (partial)* | 19.38* | 15.0.0*  
constexpr for integral overloads of [`std::to_chars()`](utility/to_chars.html "cpp/utility/to chars") and [`std::from_chars()`](utility/from_chars.html "cpp/utility/from chars") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_charconv "cpp/feature test"))* | [P2291R3](https://wg21.link/P2291R3) | 13  | 16  | 19.34* | 15.0.0*  
[`ranges::contains()`](algorithm/ranges/contains.html "cpp/algorithm/ranges/contains") and [`ranges::contains_subrange()`](algorithm/ranges/contains.html "cpp/algorithm/ranges/contains") ([FTM](experimental/feature_test.html#cpp_lib_ranges_contains "cpp/feature test"))* | [P2302R4](https://wg21.link/P2302R4) | 13  | 18 (partial)*  
19  | 19.34* | 16.0.0**  
[Ranges fold algorithms](algorithm/ranges.html#Constrained_fold_operations "cpp/algorithm/ranges") ([FTM](experimental/feature_test.html#cpp_lib_ranges_fold "cpp/feature test"))* | [P2322R6](https://wg21.link/P2322R6) | 13  |  | 19.35* |   
[`views::cartesian_product`](ranges/cartesian_product_view.html "cpp/ranges/cartesian product view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_cartesian_product "cpp/feature test"))* | [P2374R4](https://wg21.link/P2374R4)  
[P2540R1](https://wg21.link/P2540R1) | 13  |  | 19.37* |   
Adding move-only types support for comparison concepts ([`equality_comparable`](concepts/equality_comparable.html "cpp/concepts/equality comparable"), [`totally_ordered`](concepts/totally_ordered.html "cpp/concepts/totally ordered"), [`three_way_comparable`](utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")) ([FTM](experimental/feature_test.html#cpp_lib_concepts "cpp/feature test"))* | [P2404R3](https://wg21.link/P2404R3) |  |  | 19.36* |   
Ranges iterators as inputs to non-ranges algorithms ([FTM](experimental/feature_test.html#cpp_lib_algorithm_iterator_requirements "cpp/feature test"))* | [P2408R5](https://wg21.link/P2408R5) |  |  | 19.34* |   
constexpr [std::bitset](utility/bitset.html "cpp/utility/bitset") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_bitset "cpp/feature test"))* | [P2417R2](https://wg21.link/P2417R2) | 13  | 16  | 19.34* | 15.0.0*  
[`basic_string::substr()`](string/basic_string/substr.html "cpp/string/basic string/substr") `&&` | [P2438R2](https://wg21.link/P2438R2) |  | 16  | 19.34* | 15.0.0*  
[`views::as_rvalue`](ranges/as_rvalue_view.html "cpp/ranges/as rvalue view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_as_rvalue "cpp/feature test"))* | [P2446R2](https://wg21.link/P2446R2) | 13  | 16  | 19.34* | 15.0.0*  
Standard Library Modules ([FTM](experimental/feature_test.html#cpp_lib_modules "cpp/feature test"))* | [P2465R3](https://wg21.link/P2465R3) | 15* | 17 (partial)* | 19.35*  
(partial)*  
19.36* |   
[`std::forward_like()`](utility/forward_like.html "cpp/utility/forward like") ([FTM](experimental/feature_test.html#cpp_lib_forward_like "cpp/feature test"))* | [P2445R1](https://wg21.link/P2445R1) | 14  | 16  | 19.34* | 15.0.0*  
Support exclusive mode for [std::fstream](io/basic_fstream.html "cpp/io/basic fstream") ([FTM](experimental/feature_test.html#cpp_lib_ios_noreplace "cpp/feature test"))* | [P2467R1](https://wg21.link/P2467R1) | 12  | 18  | 19.36* | 16.0.0*  
[`views::repeat`](ranges/repeat_view.html "cpp/ranges/repeat view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_repeat "cpp/feature test"))* | [P2474R2](https://wg21.link/P2474R2) | 13  | 17  | 19.36* | 15.0.0*  
Relaxing range adaptors to allow for move-only types ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P2494R2](https://wg21.link/P2494R2) | 14  | 17  | 19.34* | 15.0.0*  
[std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view") range [constructor](string/basic_string_view/basic_string_view.html "cpp/string/basic string view/basic string view") should be explicit  | [P2499R0](https://wg21.link/P2499R0) | 12.2  | 16  | 19.34* | 15.0.0*  
[`std::generator`](coroutine/generator.html "cpp/coroutine/generator"): synchronous coroutine generator for ranges ([FTM](experimental/feature_test.html#cpp_lib_generator "cpp/feature test"))* | [P2502R2](https://wg21.link/P2502R2)  
[P2787R0](https://wg21.link/P2787R0) | 14  |  | 19.43* |   
Add a conditional noexcept specification to [std::apply](utility/apply.html "cpp/utility/apply") | [P2517R1](https://wg21.link/P2517R1) | 10  | 18  | 19.34* | 16.0.0*  
Explicit lifetime management ([`std::start_lifetime_as`](memory/start_lifetime_as.html "cpp/memory/start lifetime as")) ([FTM](experimental/feature_test.html#cpp_lib_start_lifetime_as "cpp/feature test"))* | [P2590R2](https://wg21.link/P2590R2)  
[P2679R2](https://wg21.link/P2679R2) |  |  |  |   
Clarify handling of encodings in localized formatting of chrono types ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P2419R2](https://wg21.link/P2419R2) | 15* |  | 19.34** |   
[std::move_iterator](iterator/move_iterator.html "cpp/iterator/move iterator") should not always be [`input_iterator`](iterator/input_iterator.html "cpp/iterator/input iterator") ([FTM](experimental/feature_test.html#cpp_lib_move_iterator_concept "cpp/feature test"))* | [P2520R0](https://wg21.link/P2520R0) | 12.3* | 17* | 19.34** | 15.0.0*  
Deduction guides update for [explicit object parameter](language/member_functions.html#Explicit_object_parameter "cpp/language/member functions") call operators  | [LWG3617](https://wg21.link/LWG3617) | 14  |  | 19.34* |   
Deduction guides update for static operator() | [P1169R4](https://wg21.link/P1169R4) | 13  | 16  | 19.39* | 15.0.0*  
Standard names and library support for [extended floating-point types](header/stdfloat.html "cpp/header/stdfloat") | [P1467R9](https://wg21.link/P1467R9) | 13  |  | 19.37** |   
Monadic operations for [`std::expected`](utility/expected.html "cpp/utility/expected") ([FTM](experimental/feature_test.html#cpp_lib_expected "cpp/feature test"))* | [P2505R5](https://wg21.link/P2505R5) | 13  | 17  | 19.36* | 15.0.0*  
[`views::enumerate`](ranges/enumerate_view.html "cpp/ranges/enumerate view") ([FTM](experimental/feature_test.html#cpp_lib_ranges_enumerate "cpp/feature test"))* | [P2164R9](https://wg21.link/P2164R9) | 13  |  | 19.37* |   
[`std::is_implicit_lifetime`](types/is_implicit_lifetime.html "cpp/types/is implicit lifetime") ([FTM](experimental/feature_test.html#cpp_lib_is_implicit_lifetime "cpp/feature test"))* | [P2674R1](https://wg21.link/P2674R1) |  | 20  |  |   
std::common_reference_t of [std::reference_wrapper](utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper") should be a reference type ([FTM](experimental/feature_test.html#cpp_lib_common_reference "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_common_reference_wrapper "cpp/feature test"))* | [P2655R3](https://wg21.link/P2655R3) |  |  | 19.37* |   
Disallowing user specialization of [std::allocator_traits](memory/allocator_traits.html "cpp/memory/allocator traits") | [P2652R2](https://wg21.link/P2652R2) |  | 19  | 19.37* |   
Deprecating [std::numeric_limits::has_denorm](types/numeric_limits/has_denorm.html "cpp/types/numeric limits/has denorm") | [P2614R2](https://wg21.link/P2614R2) |  | 18  | 19.37* | 16.0.0*  
Making Multi-Param Constructors Of [`view`s](ranges/view.html "cpp/ranges/view") [`explicit`](language/explicit.html "cpp/language/explicit") | [P2711R1](https://wg21.link/P2711R1) |  | 17 (partial)* | 19.36** | 15.0.0*  
DR20: Relaxing Ranges Just A Smidge ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P2609R3](https://wg21.link/P2609R3) | 15  | 20  | 19.37* |   
DR20: Stashing Stashing Iterators For Proper Flattening  | [P2770R0](https://wg21.link/P2770R0) | 14  | 18  | 19.37* |   
DR17: [std::visit()](utility/variant/visit.html "cpp/utility/variant/visit") for classes derived from [std::variant](utility/variant.html "cpp/utility/variant") ([FTM](experimental/feature_test.html#cpp_lib_variant "cpp/feature test"))* | [P2162R2](https://wg21.link/P2162R2) | 11.3  | 13  | 19.20**  
19.30* | 13.1.6*  
DR20: Conditionally borrowed ranges  | [P2017R1](https://wg21.link/P2017R1) | 11  | 16  | 19.30* |   
DR20: Repairing [input range adaptors](ranges.html#Views "cpp/ranges") and [std::counted_iterator](iterator/counted_iterator.html "cpp/iterator/counted iterator") | [P2259R1](https://wg21.link/P2259R1) | 12  |  | 19.30*(partial)*  
19.31* |   
DR20: [`views::join`](ranges/join_view.html "cpp/ranges/join view") should join all views of ranges  | [P2328R1](https://wg21.link/P2328R1) | 11.2  | 15  | 19.30* | 14.0.3*  
DR20: [`view`](ranges/view.html "cpp/ranges/view") does not require [`default_initializable`](concepts/default_initializable.html "cpp/concepts/default initializable") ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P2325R3](https://wg21.link/P2325R3) | 11.3  | 16  | 19.30* | 15.0.0*  
DR20: Range adaptor objects bind arguments by value  | [P2281R1](https://wg21.link/P2281R1) | 11  | 14  | 19.29 (16.10)*  
(partial)*  
19.31* | 14.0.3*  
DR20: [`constexpr`](language/constexpr.html "cpp/language/constexpr") for [std::optional](utility/optional.html "cpp/utility/optional") and [std::variant](utility/variant.html "cpp/utility/variant") ([FTM](experimental/feature_test.html#cpp_lib_optional "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_variant "cpp/feature test"))* | [P2231R1](https://wg21.link/P2231R1) | 11.3 (partial)*  
12  | 13 (partial)*  
19  | 19.31* | 13.1.6* (partial)   
DR20: [`views::lazy_split`](ranges/lazy_split_view.html "cpp/ranges/lazy split view") and redesigned [`views::split`](ranges/split_view.html "cpp/ranges/split view") | [P2210R2](https://wg21.link/P2210R2) | 12  | 16  | 19.31* | 15.0.0*  
DR20: Fix [ranges::istream_view](ranges/basic_istream_view.html "cpp/ranges/basic istream view") | [P2432R1](https://wg21.link/P2432R1) | 12  | 16  | 19.31* | 15.0.0*  
DR20: [`view`](ranges/view.html "cpp/ranges/view") with ownership ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P2415R2](https://wg21.link/P2415R2) | 12  | 14  | 19.31* | 14.0.3*  
DR20: Fixing locale handling in chrono formatters ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P2372R3](https://wg21.link/P2372R3)  
[P2418R2](https://wg21.link/P2418R2) | 13  |  | 19.31* |   
DR20: Cleaning up integer-class types  | [P2393R1](https://wg21.link/P2393R1) |  |  | 19.32* |   
DR20: Compile-time format string checks; Reducing binary code size of [`std::format()`](utility/format/format.html "cpp/utility/format/format") family ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P2216R3](https://wg21.link/P2216R3) | 13  | 14 (partial)*  
15  | 19.32* | 14.0.3*  
DR20: Add support for non-const-formattable types to [std::format](utility/format/format.html "cpp/utility/format/format") | [P2418R2](https://wg21.link/P2418R2) | 13  | 15  | 19.32* | 14.0.3*  
DR20: [`std::basic_format_string`](utility/format/basic_format_string.html "cpp/utility/format/basic format string") | [P2508R1](https://wg21.link/P2508R1) | 13  | 15  | 19.35* | 14.0.3*  
DR20: Poison Pills are Too Toxic ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P2602R2](https://wg21.link/P2602R2) | 14  | 19  | 19.36* |   
DR20: [std::format](utility/format/format.html "cpp/utility/format/format") fill character allowances  | [P2572R1](https://wg21.link/P2572R1) | 14  | 17  | 19.37* |   
DR20: Improving [std::format](utility/format/format.html "cpp/utility/format/format")'s width estimation  | [P2675R1](https://wg21.link/P2675R1) | 14  | 17  | 19.38* |   
DR20: [std::barrier](thread/barrier.html "cpp/thread/barrier")'s phase completion guarantees ([FTM](experimental/feature_test.html#cpp_lib_barrier "cpp/feature test"))* | [P2588R3](https://wg21.link/P2588R3) |  |  | 19.28 (16.8)**  
19.36* |   
  
  
C++23 feature  |    
  
Paper(s)  | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang*  
  
## C++20 features



### C++20 core language features

C++20 feature  
  
| Paper(s)  
  
| GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray |   
---|---|---|---|---|---|---|---|---|---|---|---  
Allow [Lambda capture](language/lambda.html#Lambda_capture "cpp/language/lambda") [=, this] | [P0409R2](https://wg21.link/P0409R2) | 8  | 6  | 19.22* | 10.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[`__VA_OPT__`](preprocessor/replace.html#Function-like_macros "cpp/preprocessor/replace") | [P0306R4](https://wg21.link/P0306R4)  
[P1042R1](https://wg21.link/P1042R1) | 8 (partial)*  
10 (partial)*  
12  | 9  | 19.25* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[Designated initializers](language/aggregate_initialization.html#Designated_initializers "cpp/language/aggregate initialization") ([FTM](experimental/feature_test.html#cpp_designated_initializers "cpp/feature test"))* | [P0329R4](https://wg21.link/P0329R4) | 4.7 (partial)*  
8  | 3.0 (partial)*  
10  | 19.21* | 12.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[template-parameter-list for generic lambdas](language/lambda.html#Syntax "cpp/language/lambda") ([FTM](experimental/feature_test.html#cpp_generic_lambdas "cpp/feature test"))* | [P0428R2](https://wg21.link/P0428R2) | 8  | 9  | 19.22* | 11.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[Default member initializers for bit-fields](language/bit_field.html#Cpp20_Default_member_initializers_for_bit_fields "cpp/language/bit field") | [P0683R1](https://wg21.link/P0683R1) | 8  | 6  | 19.25* | 10.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Initializer list constructors in class template argument deduction  | [P0702R1](https://wg21.link/P0702R1) | 8  | 6  | 19.14* | Yes  | 5.0  | 2021.1  | 20.7  | 12.0  | 11.0   
const&-qualified pointers to members  | [P0704R1](https://wg21.link/P0704R1) | 8  | 6  | 19.0 (2015)* | 10.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[Concepts](language/constraints.html "cpp/language/constraints") ([FTM](experimental/feature_test.html#cpp_concepts "cpp/feature test"))* | [P0734R0](https://wg21.link/P0734R0) | 5*  
10  | 10  | 19.23* (partial)*  
19.30* | 12.0.0* (partial)  | 6.1  | 2023.1* | 20.11  | 12.0  | 11.0   
[Lambdas in unevaluated contexts](language/lambda.html#Lambdas_in_unevaluated_contexts "cpp/language/lambda") | [P0315R4](https://wg21.link/P0315R4) | 9  | 13 (partial)*  
14 (partial)*  
17  | 19.28 (16.8)* | 13.1.6* (partial)  | 6.2  | 2023.1 (partial)  
2024.0  | 20.7  | 12.0  |   
[Three-way comparison](language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") operator ([FTM](experimental/feature_test.html#cpp_impl_three_way_comparison "cpp/feature test"))* | [P0515R3](https://wg21.link/P0515R3) | 10  | 8 (partial)  
10  | 19.20* | 12.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
DR11: Simplifying implicit lambda capture  | [P0588R1](https://wg21.link/P0588R1) | 8  |  | 19.24* |  | 5.1  | 2021.1  | 20.7  | 12.0  |   
[init-statements for range-based for](language/range-for.html#Syntax "cpp/language/range-for") | [P0614R1](https://wg21.link/P0614R1) | 9  | 8  | 19.25* | 11.0.0* | 6.0  | 2021.7  | 20.11  | 12.0  | 11.0   
Default constructible and assignable stateless [lambdas](language/lambda.html "cpp/language/lambda") | [P0624R2](https://wg21.link/P0624R2) | 9  | 8  | 19.22* | 10.0.1* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Type mismatch of defaulted special member functions  | [P0641R2](https://wg21.link/P0641R2) | 9 (partial)* | 8  | 19.0 (2015)* (partial)* | 10.0.1* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Access checking on specializations  | [P0692R1](https://wg21.link/P0692R1) | Yes  | 8 (partial)  
14  | 19.26* | 14.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  |   
ADL and function templates that are not visible  | [P0846R0](https://wg21.link/P0846R0) | 9  | 9  | 19.21* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
DR11: Specify when constexpr function definitions are [needed for constant evaluation](language/constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression") ([FTM](experimental/feature_test.html#cpp_constexpr_in_decltype "cpp/feature test"))* | [P0859R0](https://wg21.link/P0859R0) | 5.2 (partial)*  
9  | 8  | 19.27* (partial)*  
19.31** | 11.0.0* | (partial)  |  |  | 12.0  | 11.0   
Attributes `[[[likely](language/attributes/likely.html "cpp/language/attributes/likely")]]` and `[[[unlikely](language/attributes/likely.html "cpp/language/attributes/likely")]]` | [P0479R5](https://wg21.link/P0479R5) | 9  | 12  | 19.26* | 13.0.0* | 5.1  | 2021.7  | 20.7  | 12.0  |   
Make [`typename`](keywords/typename.html "cpp/keywords/typename") more optional  | [P0634R3](https://wg21.link/P0634R3) | 9  | 16  | 19.29 (16.10)* | 16.0.0* | 5.1  | 2023.1  | 20.7  | 12.0  |   
[`Pack-expansions`](language/parameter_pack.html "cpp/language/parameter pack") in [lambda init-captures](language/lambda.html#Lambda_capture "cpp/language/lambda") ([FTM](experimental/feature_test.html#cpp_init_captures "cpp/feature test"))* | [P0780R2](https://wg21.link/P0780R2) | 9  | 9  | 19.22* | 11.0.3* | 6.1  | 2021.7  | 20.11  | 12.0  | 11.0   
Attribute `[[[no_unique_address](language/attributes/no_unique_address.html "cpp/language/attributes/no unique address")]]` | [P0840R2](https://wg21.link/P0840R2) | 9  | 9  | 19.28 (16.9)** | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Conditionally trivial special member functions ([FTM](experimental/feature_test.html#cpp_concepts "cpp/feature test"))* | [P0848R3](https://wg21.link/P0848R3) | 10  | 16  | 19.28 (16.8)* |  | 6.1  | 2021.7  | 20.11  | 12.0  |   
DR17: Relaxing the [structured bindings](language/structured_binding.html "cpp/language/structured binding") customization point finding rules  | [P0961R1](https://wg21.link/P0961R1) | 8  | 8  | 19.20* | 10.0.1* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
DR11: Relaxing the [range-for](language/range-for.html "cpp/language/range-for") loop customization point finding rules  | [P0962R1](https://wg21.link/P0962R1) | 8  | 8  | 19.25* | 11.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
DR17: Allow structured bindings to accessible members  | [P0969R0](https://wg21.link/P0969R0) | 8  | 8  | 19.20* | 10.0.1* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[Destroying `operator delete`](memory/new/operator_delete.html "cpp/memory/new/operator delete") ([FTM](experimental/feature_test.html#cpp_impl_destroying_delete "cpp/feature test"))* | [P0722R3](https://wg21.link/P0722R3) | 9  | 6  | 19.27* | 10.0.0* | 6.1  | 2023.1  | 20.11  | 12.0  | 11.0   
Class types in [Constant template parameters](language/template_parameters.html#Constant_template_parameter "cpp/language/template parameters") | [P0732R2](https://wg21.link/P0732R2) | 9  | 12 (partial)  | 19.26*(partial)*  
19.28 (16.9)* | 13.0.0* (partial)  | 6.2  | 2023.1 (partial)  | 21.3  | 12.0  |   
Deprecate implicit [capture](language/lambda.html#Lambda_capture "cpp/language/lambda") of this via `[=]` | [P0806R2](https://wg21.link/P0806R2) | 9  | 7  | 19.22* | 10.0.1* | 5.1  |  | 20.7  | 12.0  | 11.0   
[`explicit(bool)`](language/explicit.html "cpp/language/explicit") ([FTM](experimental/feature_test.html#cpp_conditional_explicit "cpp/feature test"))* | [P0892R2](https://wg21.link/P0892R2) | 9  | 9  | 19.24* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Integrating [feature-test macros](experimental/feature_test.html "cpp/feature test") | [P0941R2](https://wg21.link/P0941R2) | 5  | 3.4  | 19.15* (partial)  
19.20* | Yes  | 5.0  | 2021.1  | 20.7  | 12.0  | 11.0   
Prohibit aggregates with user-declared constructors  | [P1008R1](https://wg21.link/P1008R1) | 9  | 8  | 19.20* | 10.0.1* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
constexpr [virtual function](language/virtual.html "cpp/language/virtual") ([FTM](experimental/feature_test.html#cpp_constexpr "cpp/feature test"))* | [P1064R0](https://wg21.link/P1064R0) | 9  | 9  | 19.28 (16.9)* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Consistency improvements for comparisons  | [P1120R0](https://wg21.link/P1120R0) | 10  | 8 (partial)  
10  | 19.22* | 12.0.0* | 5.1  | 2023.1  | 20.7  | 12.0  | 11.0   
`[char8_t](language/types.html#char8_t "cpp/language/types")` ([FTM](experimental/feature_test.html#cpp_char8_t "cpp/feature test"))* | [P0482R6](https://wg21.link/P0482R6) | 9  | 7* | 19.22* | 10.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[`std::is_constant_evaluated()`](types/is_constant_evaluated.html "cpp/types/is constant evaluated") ([FTM](experimental/feature_test.html#cpp_lib_is_constant_evaluated "cpp/feature test"))* | [P0595R2](https://wg21.link/P0595R2) | 9  | 9  | 19.25* | 11.0.3* | 5.1  | 19.1  | 21.1  | 12.0  | 11.0   
constexpr try-catch blocks  | [P1002R1](https://wg21.link/P1002R1) | 9  | 8  | 19.25* | 10.0.1* | 5.1  | 2023.1  | 20.7  | 12.0  | 11.0   
[Immediate functions](language/consteval.html "cpp/language/consteval") (consteval) ([FTM](experimental/feature_test.html#cpp_consteval "cpp/feature test"))* | [P1073R3](https://wg21.link/P1073R3) | 10 (partial)*  
11  | 11 (partial)  
14 (partial)*  
17  | 19.28 (16.8)*  
(partial)*  
19.29 (16.10)* | 11.0.3* (partial)  
15.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  |   
[Nested inline namespaces](language/namespace.html "cpp/language/namespace") | [P1094R2](https://wg21.link/P1094R2) | 9  | 8  | 19.27* | 10.0.1* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Yet another approach for [constrained](language/template_parameters.html#Type_template_parameter "cpp/language/template parameters") [declarations](language/auto.html "cpp/language/auto") | [P1141R2](https://wg21.link/P1141R2) | 10  | 10  | 19.26* (partial)  
19.28 (16.9)* | 12.0.5* | 6.1  | 2023.1  | 20.11  | 12.0  | 11.0   
Signed integers are two's complement  | [P1236R1](https://wg21.link/P1236R1) | 9  | 9  | Yes  | 11.0.3* |  N/A | 2023.1* | yes* | 12.0  | 11.0   
[`dynamic_cast`](language/dynamic_cast.html "cpp/language/dynamic cast") and polymorphic [`typeid`](language/typeid.html "cpp/language/typeid") in [constant expressions](language/constant_expression.html "cpp/language/constant expression") | [P1327R1](https://wg21.link/P1327R1) | 10  | 9  | 19.28 (16.9)* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Changing the active member of a union inside constexpr ([FTM](experimental/feature_test.html#cpp_constexpr "cpp/feature test"))* | [P1330R0](https://wg21.link/P1330R0) | 9  | 9  | 19.10* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[Coroutines](language/coroutines.html "cpp/language/coroutines") ([FTM](experimental/feature_test.html#cpp_impl_coroutine "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_coroutine "cpp/feature test"))* | [P0912R5](https://wg21.link/P0912R5)  
[LWG3393](https://wg21.link/LWG3393) | 10  | 8 (partial)  
17 (partial)* | 19.0 (2015)* (partial)  
19.10**  
19.28 (16.8)* | 10.0.1* (partial)  | 5.1  | 2021.1  | 23.3* | 12.0 (host code only)  |   
Parenthesized [initialization of aggregates](language/aggregate_initialization.html "cpp/language/aggregate initialization") ([FTM](experimental/feature_test.html#cpp_aggregate_paren_init "cpp/feature test"))* | [P0960R3](https://wg21.link/P0960R3) | 10  | 16  | 19.28 (16.8)* | 16.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  |   
DR11: Array size deduction in [`new`-expressions](language/new.html "cpp/language/new") | [P1009R2](https://wg21.link/P1009R2) | 11  | 9  | 19.27* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
[Modules](language/modules.html "cpp/language/modules") ([FTM](experimental/feature_test.html#cpp_modules "cpp/feature test"))* | [P1103R3](https://wg21.link/P1103R3) | 11 (partial)  | 8 (partial)  | 19.0 (2015)* (partial)  
19.10**  
19.28 (16.8)* | 10.0.1* (partial)  |  | 2023.1 (partial)  |  |  |   
Stronger Unicode requirements  | [P1041R4](https://wg21.link/P1041R4)  
[P1139R2](https://wg21.link/P1139R2) | 10  | Yes  | 19.0 (2015)**  
19.26** | Yes  |  N/A | 2023.1* | Yes  | 12.0  | 11.0   
`<=> != ==` | [P1185R2](https://wg21.link/P1185R2) | 10  | 10  | 19.22* | 12.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
DR11: Explicitly defaulted functions with different exception specifications  | [P1286R2](https://wg21.link/P1286R2) | 10  | 9  | 19.28 (16.8)* | 11.0.3* | 5.1  | 2021.1  | 20.7  | 12.0  | 11.0   
Lambda capture and storage class specifiers of structured bindings  | [P1091R3](https://wg21.link/P1091R3)  
[P1381R1](https://wg21.link/P1381R1) | 10  | 8 (partial)  
16  | 19.11**  
19.24** | 16.0.0* | 5.1  | 2021.1  | 20.7  | 12.0  |   
Permit conversions to arrays of unknown bound  | [P0388R4](https://wg21.link/P0388R4) | 10  | 14  | 19.27* | 14.0.0* | 6.0  | 2021.5  | 20.11  | 12.0  |   
constexpr container operations ([FTM](experimental/feature_test.html#cpp_constexpr_dynamic_alloc "cpp/feature test"))* | [P0784R7](https://wg21.link/P0784R7) | 10  | 10  | 19.28 (16.9)* | 12.0.0* | 6.0  | 2021.5  | 20.11  | 12.0  | 11.0   
Deprecating some uses of [`volatile`](language/cv.html#Notes "cpp/language/cv") | [P1152R4](https://wg21.link/P1152R4) | 10  | 10  | 19.27* | 12.0.0* | 6.0  | 2021.5  | 20.11  | 12.0  | 11.0   
[`constinit`](language/constinit.html "cpp/language/constinit") ([FTM](experimental/feature_test.html#cpp_constinit "cpp/feature test"))* | [P1143R2](https://wg21.link/P1143R2) | 10  | 10  | 19.29 (16.10)* | 12.0.0* | 6.1  | 2021.7  | 20.11  | 12.0  | 11.0   
[Deprecate comma operator in subscripts](language/operator_other.html#Built-in_comma_operator "cpp/language/operator other") | [P1161R3](https://wg21.link/P1161R3) | 10  | 9  | 19.25* | 11.0.3* | 6.0  | 2021.7  | 20.11  | 12.0  | 11.0   
`[[[nodiscard](language/attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]` with message  | [P1301R4](https://wg21.link/P1301R4) | 10  | 9  | 19.25* | 11.0.3* | 6.0  | 2021.5  | 20.11  | 12.0  | 11.0   
Trivial default initialization in constexpr functions  | [P1331R2](https://wg21.link/P1331R2) | 10  | 10  | 19.27* | 12.0.0* | 6.1  | 2021.7  | 20.11  | 12.0  | 11.0   
Unevaluated asm-declaration in constexpr functions  | [P1668R1](https://wg21.link/P1668R1) | 10  | 10  | 19.28 (16.9)* | 12.0.0* | 6.1  | 2021.7  | 20.11  | 12.0  | 11.0   
[`using enum`](language/enum.html#Using-enum-declaration "cpp/language/enum") ([FTM](experimental/feature_test.html#cpp_using_enum "cpp/feature test"))* | [P1099R5](https://wg21.link/P1099R5) | 11  | 13  | 19.24* | 13.1.6* | 6.3  | 2023.1  | 22.5  | 12.0  |   
Synthesizing [Three-way comparison](language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") for specified comparison category  | [P1186R3](https://wg21.link/P1186R3) | 11  | 10  | 19.24* | 12.0.0* | 6.0  | 2021.5  | 20.11  | 12.0  | 11.0   
DR17: `[[[nodiscard](language/attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]` for constructors  | [P1771R1](https://wg21.link/P1771R1) | 10  | 9  | 19.24* | 11.0.3* | 6.0  | 2021.5  | 20.11  | 12.0  | 11.0   
[class template argument deduction](language/ctad.html "cpp/language/class template argument deduction") for alias templates ([FTM](experimental/feature_test.html#cpp_deduction_guides "cpp/feature test"))* | [P1814R0](https://wg21.link/P1814R0) | 10  | 19  | 19.27* |  | 6.5  |  | 23.9  | 12.0  |   
[class template argument deduction](language/ctad.html "cpp/language/class template argument deduction") for aggregates ([FTM](experimental/feature_test.html#cpp_deduction_guides "cpp/feature test"))* | [P1816R0](https://wg21.link/P1816R0)  
[P2082R1](https://wg21.link/P2082R1) | 10*  
11* | 17  | 19.27* |  | 6.3  | 2023.1 (partial)*  
2024.1  | 23.3  | 12.0  |   
DR11: [Implicit move](language/return.html "cpp/language/return") for more local objects and rvalue references  | [P1825R0](https://wg21.link/P1825R0) | 11* | 13  | 19.24* | 13.1.6* | 6.0  | 2021.5  | 20.11  | 12.0  |   
Allow defaulting comparisons by value  | [P1946R0](https://wg21.link/P1946R0) | 10  | 10  | 19.25* | 12.0.0* | 6.1  | 2021.7  | 20.11  | 12.0  | 11.0   
Remove `std::weak_equality` and `std::strong_equality` | [P1959R0](https://wg21.link/P1959R0) | 10  | 10  | 19.25* | 12.0.0* | 6.1  | 2021.7  | 20.11  | 12.0  | 11.0   
Inconsistencies with constant template parameters ([FTM](experimental/feature_test.html#cpp_nontype_template_args "cpp/feature test"))* | [P1907R1](https://wg21.link/P1907R1) | 10 (partial)  
11  | 18 (partial)* | 19.26* | 13.1.6* (partial)  | 6.2  | 2023.1 (partial)  | 21.3  | 12.0  |   
DR98: Pseudo-destructors end object lifetimes  | [P0593R6](https://wg21.link/P0593R6) | 11  | 11  | Yes  | 12.0.5* |  N/A | 2023.1* | Yes  | 12.0  | 11.0   
DR11: Converting from T* to bool should be considered narrowing  | [P1957R2](https://wg21.link/P1957R2) | 10*  
11* | 11  | 19.27* | 12.0.5* | 6.1  |  |  | 12.0  | 11.0   
  
  
C++20 feature  |    
  
Paper(s)  | GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray  
  
### C++20 library features

C++20 feature  
  
| Paper(s)  
  
| GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang* |   
---|---|---|---|---|---|---  
[`std::endian`](types/endian.html "cpp/types/endian") ([FTM](experimental/feature_test.html#cpp_lib_endian "cpp/feature test"))* | [P0463R1](https://wg21.link/P0463R1) | 8  | 7  | 19.22* | 10.0.0*  
Extending [std::make_shared()](memory/shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared") to support arrays ([FTM](experimental/feature_test.html#cpp_lib_shared_ptr_arrays "cpp/feature test"))* | [P0674R1](https://wg21.link/P0674R1) | 12  | 15  | 19.27* | 14.0.3*  
[Floating-point atomic](atomic/atomic.html#Specializations_for_floating-point_types "cpp/atomic/atomic") ([FTM](experimental/feature_test.html#cpp_lib_atomic_float "cpp/feature test"))* | [P0020R6](https://wg21.link/P0020R6) | 10  | 18  | 19.22* | 16.0.0*  
[Synchronized buffered](io/basic_syncbuf.html "cpp/io/basic syncbuf") ([`std::basic_osyncstream`](io/basic_osyncstream.html "cpp/io/basic osyncstream")) ([FTM](experimental/feature_test.html#cpp_lib_syncbuf "cpp/feature test"))* | [P0053R7](https://wg21.link/P0053R7) | 11  | 18  | 19.29 (16.10)* |   
constexpr for [`<algorithm>`](header/algorithm.html "cpp/header/algorithm") and [`<utility>`](header/utility.html "cpp/header/utility") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_algorithms "cpp/feature test"))* | [P0202R3](https://wg21.link/P0202R3) | 10  | 8 (partial)  
12  | 19.26* | 10.0.1* (partial)  
13.0.0*  
More constexpr for [`<complex>`](header/complex.html "cpp/header/complex") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_complex "cpp/feature test"))* | [P0415R1](https://wg21.link/P0415R1) | 9  | 7 (partial)  
16  | 19.27* | 10.0.0* (partial)  
15.0.0*  
Make [std::memory_order](atomic/memory_order.html "cpp/atomic/memory order") a scoped enumeration  | [P0439R0](https://wg21.link/P0439R0) | 9  | 9  | 19.25* | 11.0.3*  
[String](string/basic_string.html "cpp/string/basic string") [prefix](string/basic_string/starts_with.html "cpp/string/basic string/starts with") and [suffix](string/basic_string/ends_with.html "cpp/string/basic string/ends with") checking: [`string`](string/basic_string/starts_with.html "cpp/string/basic string/starts with")[`(_view)`](string/basic_string_view/starts_with.html "cpp/string/basic string view/starts with")[` ::starts_with`](string/basic_string/starts_with.html "cpp/string/basic string/starts with") / [`ends_with`](string/basic_string_view/ends_with.html "cpp/string/basic string view/ends with") ([FTM](experimental/feature_test.html#cpp_lib_starts_ends_with "cpp/feature test"))* | [P0457R2](https://wg21.link/P0457R2) | 9  | 6  | 19.21* | 10.0.0*  
Library support for [`operator<=>`](language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") [`<compare>`](header/compare.html "cpp/header/compare") ([FTM](experimental/feature_test.html#cpp_lib_three_way_comparison "cpp/feature test"))* | [P0768R1](https://wg21.link/P0768R1) | 10  | 7 (partial)  
12 (partial)*  
17  | 19.20* (partial)  
19.28 (16.9)* | 13.0.0*  
[`std::remove_cvref`](types/remove_cvref.html "cpp/types/remove cvref") ([FTM](experimental/feature_test.html#cpp_lib_remove_cvref "cpp/feature test"))* | [P0550R2](https://wg21.link/P0550R2) | 9  | 6  | 19.20* | 10.0.0*  
`[[[nodiscard](language/attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]` in the [standard library](language/attributes/nodiscard.html#Standard_library "cpp/language/attributes/nodiscard") | [P0600R1](https://wg21.link/P0600R1) | 9  | 7 (partial)  
16  | 19.13* (partial)  
19.22* | 10.0.0* (partial)  
15.0.0*  
Using [`std::move`](utility/move.html "cpp/utility/move") in [numeric algorithms](algorithm.html#Numeric_operations "cpp/algorithm") | [P0616R0](https://wg21.link/P0616R0) | 9  | 12  | 19.23* | 13.0.0*  
[Utility](memory/to_address.html "cpp/memory/to address") to convert a pointer to a raw pointer ([FTM](experimental/feature_test.html#cpp_lib_to_address "cpp/feature test"))* | [P0653R2](https://wg21.link/P0653R2) | 8  | 6  | 19.22* | Yes   
Atomic [`std::shared_ptr`](memory/shared_ptr/atomic2.html "cpp/memory/shared ptr/atomic2") and [`std::weak_ptr`](memory/weak_ptr/atomic2.html "cpp/memory/weak ptr/atomic2") ([FTM](experimental/feature_test.html#cpp_lib_atomic_shared_ptr "cpp/feature test"))* | [P0718R2](https://wg21.link/P0718R2) | 12  |  | 19.27* |   
[`std::span`](container/span.html "cpp/container/span") ([FTM](experimental/feature_test.html#cpp_lib_span "cpp/feature test"))* | [P0122R7](https://wg21.link/P0122R7) | 10  | 7  | 19.26* | 10.0.0*  
[Calendar](chrono.html#Calendar "cpp/chrono") and [Time zone](chrono.html#Time_zone "cpp/chrono") ([FTM](experimental/feature_test.html#cpp_lib_chrono "cpp/feature test"))* | [P0355R7](https://wg21.link/P0355R7) | 11 (partial)*  
13 (partial)*  
14  | 7 (partial)  
19 ([partial](https://libcxx.llvm.org/Status/Cxx20.html#note-p0355))* | 19.29 (16.10)* | 10.0.0* (partial)   
[`<version>`](header/version.html "cpp/header/version") | [P0754R2](https://wg21.link/P0754R2) | 9  | 7  | 19.22* | 10.0.0*  
Comparing unordered containers  | [P0809R0](https://wg21.link/P0809R0) | Yes  | Yes  | 16.0* | Yes   
[ConstexprIterator](named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator") requirements ([FTM](experimental/feature_test.html#cpp_lib_string_view "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_array_constexpr "cpp/feature test"))* | [P0858R0](https://wg21.link/P0858R0) | 9  | 12  | 19.11* | 13.0.0*  
[std::basic_string::reserve()](string/basic_string/reserve.html "cpp/string/basic string/reserve") should not shrink  | [P0966R1](https://wg21.link/P0966R1) | 11  | 8  | 19.25* | 10.0.1*  
[Atomic Compare-And-Exchange](atomic/atomic/compare_exchange.html "cpp/atomic/atomic/compare exchange") with padding bits  | [P0528R3](https://wg21.link/P0528R3) | 13  |  | 19.28 (16.8)* |   
[`std::atomic_ref`](atomic/atomic_ref.html "cpp/atomic/atomic ref") ([FTM](experimental/feature_test.html#cpp_lib_atomic_ref "cpp/feature test"))* | [P0019R8](https://wg21.link/P0019R8) | 10  | 19  | 19.28 (16.8)* |   
contains() member function of associative containers, e.g. [`std::map::contains()`](container/map/contains.html "cpp/container/map/contains") | [P0458R2](https://wg21.link/P0458R2) | 9  | 13  | 19.21* | 13.1.6*  
DR11: Guaranteed copy elision for [piecewise construction](memory/scoped_allocator_adaptor/construct.html "cpp/memory/scoped allocator adaptor/construct") | [P0475R1](https://wg21.link/P0475R1) | 9  | Yes  | 19.29 (16.10)* | Yes   
[`std::bit_cast()`](numeric/bit_cast.html "cpp/numeric/bit cast") ([FTM](experimental/feature_test.html#cpp_lib_bit_cast "cpp/feature test"))* | [P0476R2](https://wg21.link/P0476R2) | 11  | 14  | 19.27* | 14.0.3*  
[Integral power-of-2 operations](utility/bit.html "cpp/utility/bit"): [`std::bit_ceil()`](numeric/bit_ceil.html "cpp/numeric/bit ceil"), [`std::bit_floor()`](numeric/bit_floor.html "cpp/numeric/bit floor"), [`std::bit_width()`](numeric/bit_width.html "cpp/numeric/bit width"), [`std::has_single_bit()`](numeric/has_single_bit.html "cpp/numeric/has single bit") ([FTM](experimental/feature_test.html#cpp_lib_int_pow2 "cpp/feature test"))* | [P0556R3](https://wg21.link/P0556R3)  
[P1956R1](https://wg21.link/P1956R1) | 9*  
10* | 9*  
12* | 19.25**  
19.27**  
19.28 (16.8)* | 11.0.3**  
13.0.0**  
Improving the return value of erase-like algorithms ([FTM](experimental/feature_test.html#cpp_lib_list_remove_return_type "cpp/feature test"))* | [P0646R1](https://wg21.link/P0646R1) | 9  | 10  | 19.21* | 12.0.0*  
[`std::destroying_delete_t`](memory/new/destroying_delete_t.html "cpp/memory/new/destroying delete t") ([FTM](experimental/feature_test.html#cpp_lib_destroying_delete "cpp/feature test"))* | [P0722R3](https://wg21.link/P0722R3) | 9  | 9  | 19.27* | 11.0.3*  
[`std::is_convertible`](types/is_convertible.html "cpp/types/is convertible") ([FTM](experimental/feature_test.html#cpp_lib_is_nothrow_convertible "cpp/feature test"))* | [P0758R1](https://wg21.link/P0758R1) | 9  | 9  | 19.23* | 11.0.3*  
Add [`std::shift_left/right`](algorithm/shift.html "cpp/algorithm/shift") to [`<algorithm>`](header/algorithm.html "cpp/header/algorithm") ([FTM](experimental/feature_test.html#cpp_lib_shift "cpp/feature test"))* | [P0769R2](https://wg21.link/P0769R2) | 10  | 12  | 19.21* | 13.0.0*  
Constexpr for [std::swap()](utility/swap.html "cpp/algorithm/swap") and `swap` related functions  | [P0879R0](https://wg21.link/P0879R0) | 10  | 13  | 19.26* | 13.1.6*  
[`std::type_identity`](types/type_identity.html "cpp/types/type identity") ([FTM](experimental/feature_test.html#cpp_lib_type_identity "cpp/feature test"))* | [P0887R1](https://wg21.link/P0887R1) | 9  | 8  | 19.21* | 10.0.1*  
[Concepts library](concepts.html "cpp/concepts") ([FTM](experimental/feature_test.html#cpp_lib_concepts "cpp/feature test"))* | [P0898R3](https://wg21.link/P0898R3) | 10  | 13  | 19.23* | 13.1.6*  
`constexpr` [comparison operators](container/array/operator_cmp.html "cpp/container/array/operator cmp") for [std::array](container/array.html "cpp/container/array") | [P1023R0](https://wg21.link/P1023R0) | 10  | 8  | 19.27* | 10.0.1*  
[`std::unwrap_ref_decay` and `std::unwrap_reference`](utility/functional/unwrap_reference.html "cpp/utility/functional/unwrap reference") ([FTM](experimental/feature_test.html#cpp_lib_unwrap_ref "cpp/feature test"))* | [P0318R1](https://wg21.link/P0318R1) | 9  | 8  | 19.21* | 10.0.1*  
[`std::bind_front()`](utility/functional/bind_front.html "cpp/utility/functional/bind front") ([FTM](experimental/feature_test.html#cpp_lib_bind_front "cpp/feature test"))* | [P0356R5](https://wg21.link/P0356R5) | 9  | 13  | 19.25* | 13.1.6*  
[std::reference_wrapper](utility/functional/reference_wrapper.html "cpp/utility/functional/reference wrapper") for incomplete types  | [P0357R3](https://wg21.link/P0357R3) | 9  | 8  | 19.26* | 10.0.1*  
Fixing [`operator>>(basic_istream&, CharT*)`](io/basic_istream/operator_gtgt2.html "cpp/io/basic istream/operator gtgt2") | [P0487R1](https://wg21.link/P0487R1) | 11  | 8  | 19.23* | 10.0.1*  
Library support for `[char8_t](language/types.html#char8_t "cpp/language/types")` ([FTM](experimental/feature_test.html#cpp_lib_char8_t "cpp/feature test"))* | [P0482R6](https://wg21.link/P0482R6) | 9  | 8 (partial)  
16  | 19.22* | 10.0.1* (partial)  
15.0.0*  
[Utility functions](memory/uses_allocator_construction_args.html "cpp/memory/uses allocator construction args") to implement [uses-allocator](memory/make_obj_using_allocator.html "cpp/memory/make obj using allocator") [construction](memory/uninitialized_construct_using_allocator.html "cpp/memory/uninitialized construct using allocator") | [P0591R4](https://wg21.link/P0591R4) | 9  | 16  | 19.29 (16.10)* | 15.0.0*  
DR17: [std::variant](utility/variant.html "cpp/utility/variant") and [std::optional](utility/optional.html "cpp/utility/optional") should propagate copy/move triviality  | [P0602R4](https://wg21.link/P0602R4) | 8.3  | 8  | 19.11* | 10.0.1*  
DR17: A sane [std::variant](utility/variant.html "cpp/utility/variant") converting constructor  | [P0608R3](https://wg21.link/P0608R3) | 10  | 9  | 19.29 (16.10)**  
19.42** | 11.0.3*  
[std::function](utility/functional/function.html "cpp/utility/functional/function")'s move constructor should be [`noexcept`](language/noexcept.html "cpp/language/noexcept") | [P0771R1](https://wg21.link/P0771R1) | 7.2  | 6  | 19.22* | Yes   
The [One](iterator.html "cpp/iterator") [Ranges](ranges.html "cpp/ranges") [Proposal](algorithm/ranges.html "cpp/algorithm/ranges") ([FTM](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test"))* | [P0896R4](https://wg21.link/P0896R4) | 10  | 13 (partial)  
15* | 19.29 (16.10)* | 14.0.3*  
Heterogeneous lookup for [unordered associative containers](container.html#Unordered_associative_containers "cpp/container") ([FTM](experimental/feature_test.html#cpp_lib_generic_unordered_lookup "cpp/feature test"))* | [P0919R3](https://wg21.link/P0919R3)  
[P1690R1](https://wg21.link/P1690R1) | 11  | 12  | 19.23* (P0919R3)  
19.25* (P1690R1)  | 13.0.0*  
[`<chrono>`](header/chrono.html "cpp/header/chrono") `zero()`, `min()`, and `max()` should be [`noexcept`](language/noexcept.html "cpp/language/noexcept") | [P0972R0](https://wg21.link/P0972R0) | 9  | 8  | 19.14* | 10.0.1*  
constexpr in [std::pointer_traits](memory/pointer_traits.html "cpp/memory/pointer traits") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_memory "cpp/feature test"))* | [P1006R1](https://wg21.link/P1006R1) | 9  | 8  | 19.26* | 10.0.1*  
[`std::assume_aligned()`](memory/assume_aligned.html "cpp/memory/assume aligned") ([FTM](experimental/feature_test.html#cpp_lib_assume_aligned "cpp/feature test"))* | [P1007R3](https://wg21.link/P1007R3) | 9*  
11  | 15  | 19.28 (16.9)* | 14.0.3*  
Smart pointer creation with default initialization (e.g. [`make_unique_for_overwrite`](memory/unique_ptr/make_unique.html "cpp/memory/unique ptr/make unique")) ([FTM](experimental/feature_test.html#cpp_lib_smart_ptr_for_overwrite "cpp/feature test"))* | [P1020R1](https://wg21.link/P1020R1)  
[P1973R1](https://wg21.link/P1973R1) | 11*  
12* | 16  | 19.28 (16.9)* | 15.0.0*  
Misc constexpr bits ([FTM](experimental/feature_test.html#cpp_lib_array_constexpr "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_functional "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_iterator "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_tuple "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_utility "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_constexpr_string_view "cpp/feature test"))* | [P1032R1](https://wg21.link/P1032R1) | 10  | 13  | 19.28 (16.8)* | 13.1.6*  
Remove comparison operators of [`std::span`](container/span.html "cpp/container/span") | [P1085R2](https://wg21.link/P1085R2) | 10  | 8  | 19.26* | 10.0.1*  
Make stateful allocator propagation more consistent for [`operator+(basic_string)`](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B "cpp/string/basic string/operator+") | [P1165R1](https://wg21.link/P1165R1) | 10  | 15  | 19.26* | 14.0.3*  
Consistent container erasure, e.g. [`std::erase(std::vector)`](container/vector/erase2.html "cpp/container/vector/erase2"), or [`std::erase_if(std::map)`](container/map/erase_if.html "cpp/container/map/erase if") ([FTM](experimental/feature_test.html#cpp_lib_erase_if "cpp/feature test"))* | [P1209R0](https://wg21.link/P1209R0)  
[P1115R3](https://wg21.link/P1115R3) | 9*  
10* | 8*  
11* | 19.25**  
19.27** | 10.0.1**  
12.0.5**  
Standard library header units  | [P1502R1](https://wg21.link/P1502R1) | 11  |  | 19.29 (16.10)* |   
[`polymorphic_allocator<>`](memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator") as a vocabulary type ([FTM](experimental/feature_test.html#cpp_lib_polymorphic_allocator "cpp/feature test"))* | [P0339R6](https://wg21.link/P0339R6) | 9  | 16  | 19.28 (16.9)* | 15.0.0*  
[`std::execution::unseq`](algorithm/execution_policy_tag.html "cpp/algorithm/execution policy tag") ([FTM](experimental/feature_test.html#cpp_lib_execution "cpp/feature test"))* | [P1001R2](https://wg21.link/P1001R2) | 9  | 17  | 19.28 (16.8)* |   
[`std::lerp()`](numeric/lerp.html "cpp/numeric/lerp") and [`std::midpoint()`](numeric/midpoint.html "cpp/numeric/midpoint") ([FTM](experimental/feature_test.html#cpp_lib_interpolate "cpp/feature test"))* | [P0811R3](https://wg21.link/P0811R3) | 9  | 9  | 19.23* (partial)  
19.28 (16.8)* | 11.0.3*  
Usability enhancements for [`std::span`](container/span.html "cpp/container/span") | [P1024R3](https://wg21.link/P1024R3) | 10  | 9*  
14  | 19.26* | 11.0.3*  
DR17: Make [`std::create_directory()`](filesystem/create_directory.html "cpp/filesystem/create directory") intuitive  | [P1164R1](https://wg21.link/P1164R1) | 8.3  | 12  | 19.20* | 13.0.0*  
[`std::ssize()`](iterator/size.html "cpp/iterator/size") and unsigned extent for [`std::span`](container/span.html "cpp/container/span") ([FTM](experimental/feature_test.html#cpp_lib_ssize "cpp/feature test"))* | [P1227R2](https://wg21.link/P1227R2) | 10  | 9  | 19.25* | 11.0.3*  
Traits for ([un](types/is_unbounded_array.html "cpp/types/is unbounded array"))[bounded](types/is_bounded_array.html "cpp/types/is bounded array") arrays ([FTM](experimental/feature_test.html#cpp_lib_bounded_array_traits "cpp/feature test"))* | [P1357R1](https://wg21.link/P1357R1) | 9  | 9  | 19.25* | 11.0.3*  
[`std::to_array()`](container/array/to_array.html "cpp/container/array/to array") ([FTM](experimental/feature_test.html#cpp_lib_to_array "cpp/feature test"))* | [P0325R4](https://wg21.link/P0325R4) | 10  | 10  | 19.25* | 12.0.0*  
Efficient access to [std::basic_stringbuf](io/basic_stringbuf.html "cpp/io/basic stringbuf")’s buffer  | [P0408R7](https://wg21.link/P0408R7) | 11  | 17  | 19.29 (16.10)* | 15.0.0*  
[Layout](types/is_layout_compatible.html "cpp/types/is layout compatible")-[compatibility](types/is_corresponding_member.html "cpp/types/is corresponding member") and [pointer](types/is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")-[interconvertibility](types/is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class") traits ([FTM](experimental/feature_test.html#cpp_lib_is_layout_compatible "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_is_pointer_interconvertible "cpp/feature test"))* | [P0466R5](https://wg21.link/P0466R5) | 12  |  | 19.29 (16.10)** |   
[Bit operations](utility/bit.html "cpp/utility/bit"): std:: [`rotl()`](numeric/rotl.html "cpp/numeric/rotl"), [`rotr()`](numeric/rotr.html "cpp/numeric/rotr"), [`countl_zero()`](numeric/countl_zero.html "cpp/numeric/countl zero"), [`countl_one()`](numeric/countl_one.html "cpp/numeric/countl one"), [`countr_zero()`](numeric/countr_zero.html "cpp/numeric/countr zero"), [`countr_one()`](numeric/countr_one.html "cpp/numeric/countr one"), [`popcount()`](numeric/popcount.html "cpp/numeric/popcount") ([FTM](experimental/feature_test.html#cpp_lib_bitops "cpp/feature test"))* | [P0553R4](https://wg21.link/P0553R4) | 9  | 9  | 19.25**  
19.28 (16.8)* | 11.0.3*  
[Mathematical constants](numeric/constants.html "cpp/numeric/constants") ([FTM](experimental/feature_test.html#cpp_lib_math_constants "cpp/feature test"))* | [P0631R8](https://wg21.link/P0631R8) | 10  | 11  | 19.25* | 12.0.5*  
[Text formatting](utility/format.html "cpp/utility/format") ([FTM](experimental/feature_test.html#cpp_lib_format "cpp/feature test"))* | [P0645R10](https://wg21.link/P0645R10) | 13  | 14**  
17  | 19.29 (16.10)* | 15.0.0*  
[`std::stop_token`](thread/stop_token.html "cpp/thread/stop token") and [`std::jthread`](thread/jthread.html "cpp/thread/jthread") ([FTM](experimental/feature_test.html#cpp_lib_jthread "cpp/feature test"))* | [P0660R10](https://wg21.link/P0660R10) | 10  | 17  
(partial)*  
20* | 19.28 (16.9)* |   
constexpr [std::allocator](memory/allocator.html "cpp/memory/allocator") and related utilities ([FTM](experimental/feature_test.html#cpp_lib_constexpr_dynamic_alloc "cpp/feature test"))* | [P0784R7](https://wg21.link/P0784R7) | 10  | 12  | 19.29 (16.10)* | 13.0.0*  
constexpr [std::string](string/basic_string.html "cpp/string/basic string") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_string "cpp/feature test"))* | [P0426R1](https://wg21.link/P0426R1)  
[P1032R1](https://wg21.link/P1032R1)  
[P0980R1](https://wg21.link/P0980R1) | 12  | 15  | 19.29 (16.10)*  
19.30** | 14.0.3*  
constexpr [std::vector](container/vector.html "cpp/container/vector") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_vector "cpp/feature test"))* | [P1004R2](https://wg21.link/P1004R2) | 12  | 15  | 19.29 (16.10)*  
19.30** | 14.0.3*  
Input [range adaptors](ranges.html "cpp/ranges") | [P1035R7](https://wg21.link/P1035R7) | 10  | 16  | 19.29 (16.10)* | 15.0.0*  
constexpr [std::invoke()](utility/functional/invoke.html "cpp/utility/functional/invoke") and related utilities  | [P1065R2](https://wg21.link/P1065R2) | 10  | 12  | 19.28 (16.8)* | 13.0.0*  
Atomic waiting and notifying, [`std::counting_semaphore`](thread/counting_semaphore.html "cpp/thread/counting semaphore"), [`std::latch`](thread/latch.html "cpp/thread/latch") and [`std::barrier`](thread/barrier.html "cpp/thread/barrier") ([FTM](experimental/feature_test.html#cpp_lib_atomic_flag_test "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_atomic_lock_free_type_aliases "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_atomic_wait "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_barrier "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_latch "cpp/feature test"))* ([FTM](experimental/feature_test.html#cpp_lib_semaphore "cpp/feature test"))* | [P1135R6](https://wg21.link/P1135R6) | 11  | 11  | 19.28 (16.9)* | 13.1.6*  
[`std::source_location`](utility/source_location.html "cpp/utility/source location") ([FTM](experimental/feature_test.html#cpp_lib_source_location "cpp/feature test"))* | [P1208R6](https://wg21.link/P1208R6) | 11  | 15*  
(partial)  
16  | 19.29 (16.10)* | 15.0.0*  
Adding [`<=>`](language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") to the standard library  | [P1614R2](https://wg21.link/P1614R2) | 10  | 14*  
(partial)  
17*  
(partial)  
19  | 19.29 (16.10)* | 13.1.6* (partial)   
constexpr default constructor of [std::atomic](atomic/atomic.html "cpp/atomic/atomic") and [std::atomic_flag](atomic/atomic_flag.html "cpp/atomic/atomic flag") ([FTM](experimental/feature_test.html#cpp_lib_atomic_value_initialization "cpp/feature test"))* | [P0883R2](https://wg21.link/P0883R2) | 10  | 13  | 19.26* | 13.1.6*  
constexpr for [numeric algorithms](numeric.html#Numeric_operations "cpp/numeric") ([FTM](experimental/feature_test.html#cpp_lib_constexpr_numeric "cpp/feature test"))* | [P1645R1](https://wg21.link/P1645R1) | 10  | 12  | 19.26* | 13.0.0*  
[Safe integral comparisons](utility.html#Integer_comparison_functions "cpp/utility") ([FTM](experimental/feature_test.html#cpp_lib_integer_comparison_functions "cpp/feature test"))* | [P0586R2](https://wg21.link/P0586R2) | 10  | 13  | 19.27* | 13.1.6*  
  
  
C++20 feature  |    
  
Paper(s)  | GCC libstdc++ | Clang libc++ | MSVC STL | Apple Clang*  
  
## Older standards



  * [C++17 core language features](compiler_support/17.html "cpp/compiler support/17")
  * [C++17 library features](compiler_support/17.html#C.2B.2B17_library_features "cpp/compiler support/17")





  * [C++14 core language features](compiler_support/14.html "cpp/compiler support/14")
  * [C++14 library features](compiler_support/14.html#C.2B.2B14_library_features "cpp/compiler support/14")





  * [C++11 core language features](compiler_support/11.html "cpp/compiler support/11")
  * [C++11 library features](compiler_support/11.html#C.2B.2B11_library_features "cpp/compiler support/11")



### See also

[**Feature testing**](experimental/feature_test.html "cpp/feature test") (C++20) |  A set of preprocessor macros to test the corresponding to C++ language and library features   
---|---  
[C documentation](../c/compiler_support.html "c/compiler support") for compiler support
