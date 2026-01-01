[C++](../../cpp.html "cpp")

[Symbol Index](../symbol_index.html "cpp/symbol index")

[`std`](../symbol_index.html "cpp/symbol index")  
---  
[std::chrono](chrono.html "cpp/symbol index/chrono")(C++11)  
[std::contracts](contracts.html "cpp/symbol index/contracts")(C++26)  
[std::execution](execution.html "cpp/symbol index/execution")(C++17)  
[std::filesystem](filesystem.html "cpp/symbol index/filesystem")(C++17)  
[std::linalg](linalg.html "cpp/symbol index/linalg")(C++26)  
[std::literals](literals.html "cpp/symbol index/literals")(C++14)  
[std::numbers](numbers.html "cpp/symbol index/numbers")(C++20)  
[std::placeholders](placeholders.html "cpp/symbol index/placeholders")(C++11)  
[std::pmr](pmr.html "cpp/symbol index/pmr")(C++17)  
[std::ranges](ranges.html "cpp/symbol index/ranges")(C++20)  
[std::regex_constants](regex_constants.html "cpp/symbol index/regex constants")(C++11)  
[std::rel_ops](rel_ops.html "cpp/symbol index/rel ops")(deprecated in C++20)  
[std::this_thread](this_thread.html "cpp/symbol index/this thread")(C++11)  
[Macros](macro.html "cpp/symbol index/macro")  
[Removed symbols (Zombie names)](zombie_names.html "cpp/symbol index/zombie names")  
[Exposition-only symbols](expos.html "cpp/symbol index/expos")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/symbol_index/navbar_content&action=edit)

[`std::literals`](literals.html "cpp/symbol index/literals")

**std::literals::chrono_literals**(C++14)  
---  
[std::literals::complex_literals](complex_literals.html "cpp/symbol index/complex literals")(C++14)  
[std::literals::string_literals](string_literals.html "cpp/symbol index/string literals")(C++14)  
[std::literals::string_view_literals](string_view_literals.html "cpp/symbol index/string view literals")(C++17)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/symbol_index/literals/navbar_content&action=edit)

This page tries to list all the symbols that are available from the [standard library](../standard_library.html "cpp/standard library") ([date and time library](../chrono.html "cpp/chrono")) in the namespace std::literals::chrono_literals. The symbols are written as follows: 

  * Function names with `()`. 
  * Templates with `<>`. 



## Contents

  * [1 Notes](chrono_literals.html#Notes)
  * [2 D H M N S U Y](chrono_literals.html#D_H_M_N_S_U_Y)
    * [2.1 D](chrono_literals.html#D)
    * [2.2 H](chrono_literals.html#H)
    * [2.3 M](chrono_literals.html#M)
    * [2.4 N](chrono_literals.html#N)
    * [2.5 S](chrono_literals.html#S)
    * [2.6 U](chrono_literals.html#U)
    * [2.7 Y](chrono_literals.html#Y)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=1 "Edit section: Notes")] Notes

These operators are declared in the namespace std::literals::chrono_literals, where both literals and chrono_literals are [inline namespaces](../language/namespace.html#Inline_namespaces "cpp/language/namespace"). Access to these operators can be gained with: 

  * using namespace std::literals, 
  * using namespace std::chrono_literals, or 
  * using namespace std::literals::chrono_literals. 



In addition, within the namespace std::chrono, the directive using namespace literals::chrono_literals; is provided by the [standard library](../standard_library.html "cpp/standard library"), so that if a programmer uses using namespace std::chrono; to gain access to the classes in the [chrono library](../chrono.html "cpp/chrono"), the corresponding literal operators become visible as well. 

## [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=2 "Edit section: D H M N S U Y")]

> `[D](chrono_literals.html#D) [H](chrono_literals.html#H) [M](chrono_literals.html#M) [N](chrono_literals.html#N) [S](chrono_literals.html#S) [U](chrono_literals.html#U) [Y](chrono_literals.html#Y) `

  


### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=3 "Edit section: D")] D

[`d`](../chrono/operator""d.html "cpp/chrono/operator""d") (since C++20)  


### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=4 "Edit section: H")] H

[`h`](../chrono/operator""h.html "cpp/chrono/operator""h") (since C++14)  


### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=5 "Edit section: M")] M

[`min`](../chrono/operator""min.html "cpp/chrono/operator""min") (since C++14)  
[`ms`](../chrono/operator""ms.html "cpp/chrono/operator""ms") (since C++14)  


### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=6 "Edit section: N")] N

[`ns`](../chrono/operator""ns.html "cpp/chrono/operator""ns") (since C++14)  


### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=7 "Edit section: S")] S

[`s`](../chrono/operator""s.html "cpp/chrono/operator""s") (since C++14)  


### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=8 "Edit section: U")] U

[`us`](../chrono/operator""us.html "cpp/chrono/operator""us") (since C++14)  


### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/symbol_index/chrono_literals&action=edit&section=9 "Edit section: Y")] Y

[`y`](../chrono/operator""y.html "cpp/chrono/operator""y") (since C++20)  

