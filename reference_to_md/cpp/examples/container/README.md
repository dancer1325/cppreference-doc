# Containers library
## == generic collection of class templates + algorithms /
* [definition.cpp](definition.cpp)
  * get access -- to -- `#include <vector>` 
  * check the class templates defined
### enable programmers -- to -- easily implement common data structures
* [MinHeap](implement_structures.cpp)
  ```c++
  //       2                                                                                                                                                                                                                                                                                                                
  //      / \                                                                                                                                                                                                                                                                                                               
  //     5   8                                                                                                                                                                                                                                                                                                              
  //    / \ /                                                                                                                                                                                                                                                                                                               
  //   7  9 10   
  ```
### manages the storage space / allocated -- for -- its elements
* [storage_management.cpp](storage_management.cpp)
  * check source code
* run [storage_management.cpp](storage_management.cpp)
  * check logs
  * capacity is modified | add elements
### provides member functions -- to -- access its elements
* [element_access.cpp](element_access.cpp)
### MOST of them
#### have COMMON MULTIPLE member functions
* [common_functions.cpp](common_functions.cpp) 
  * check source code
  * [run](#how-to-run) using C++11
* requirements
  * C++11
#### share functionalities
* [shared_functionalities.cpp](shared_functionalities.cpp)
  * check source code
  * [run](#how-to-run) using C++11
* requirements
  * C++11
## classes


# Note
## how to run?
* -- via -- IDE
* -- via -- CLI
  * `clang++ -std=c++VersionRequired fileName.cpp -o fileName`
    * _Example:_ `clang++ -std=c++11 common_functions.cpp -o common_functions`