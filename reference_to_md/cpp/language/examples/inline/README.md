# inline function
* [inline_function.cpp](inline_function.cpp)

# implicit inline function
* TODO:

# inline variable
* TODO:

# TODO:
* TODO:

# example
* [example.h](example.h) & [file1.cpp](file1.cpp) & [file2.cpp](file2.cpp)
* compile & run it
    ```c++
    clang++ -std=c++17 -c file1.cpp -o file1.o
    
    clang++ -std=c++17 -c file2.cpp -o file2.o
    
    clang++ -std=c++17 -c main.cpp -o main.o
    
    clang++ -std=c++17 file1.o file2.o main.o -o inline_test
    
    ./inline_test
    ```
    * check
      * inline variable (`counter`) is shared (== SAME instance) cross ALL files
      * inline function (`sum()`) is shared (== SAME instance) cross ALL files