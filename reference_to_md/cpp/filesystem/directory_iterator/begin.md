[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Filesystem library](../../filesystem.html "cpp/filesystem")

[Classes](../../filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](../path.html "cpp/filesystem/path")  
---  
[filesystem::filesystem_error](../filesystem_error.html "cpp/filesystem/filesystem error")  
[filesystem::directory_entry](../directory_entry.html "cpp/filesystem/directory entry")  
[filesystem::directory_iterator](../directory_iterator.html "cpp/filesystem/directory iterator")  
[filesystem::recursive_directory_iterator](../recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator")` `  
[filesystem::file_status](../file_status.html "cpp/filesystem/file status")  
[filesystem::space_info](../space_info.html "cpp/filesystem/space info")  
  
| [filesystem::file_type](../file_type.html "cpp/filesystem/file type")  
---  
[filesystem::file_time_type](../file_time_type.html "cpp/filesystem/file time type")  
[filesystem::perms](../perms.html "cpp/filesystem/perms")  
[filesystem::perm_options](../perm_options.html "cpp/filesystem/perm options")  
[filesystem::copy_options](../copy_options.html "cpp/filesystem/copy options")  
[filesystem::directory_options](../directory_options.html "cpp/filesystem/directory options")  
  
[Functions](../../filesystem.html#Non-member_functions "cpp/filesystem")  
| [filesystem::absolute](../absolute.html "cpp/filesystem/absolute")  
---  
[filesystem::canonicalfilesystem::weakly_canonical](../canonical.html "cpp/filesystem/canonical")  
[filesystem::relativefilesystem::proximate](../relative.html "cpp/filesystem/relative")  
[filesystem::copy](../copy.html "cpp/filesystem/copy")  
[filesystem::copy_file](../copy_file.html "cpp/filesystem/copy file")  
[filesystem::copy_symlink](../copy_symlink.html "cpp/filesystem/copy symlink")  
[filesystem::create_directory  
filesystem::create_directories](../create_directory.html "cpp/filesystem/create directory")  
[filesystem::create_hard_link](../create_hard_link.html "cpp/filesystem/create hard link")  
[filesystem::create_symlink  
filesystem::create_directory_symlink](../create_symlink.html "cpp/filesystem/create symlink")  
[filesystem::current_path](../current_path.html "cpp/filesystem/current path")  
[filesystem::temp_directory_path](../temp_directory_path.html "cpp/filesystem/temp directory path")  
  
| [filesystem::exists](../exists.html "cpp/filesystem/exists")  
---  
[filesystem::equivalent](../equivalent.html "cpp/filesystem/equivalent")  
[filesystem::file_size](../file_size.html "cpp/filesystem/file size")  
[filesystem::hard_link_count](../hard_link_count.html "cpp/filesystem/hard link count")  
[filesystem::last_write_time](../last_write_time.html "cpp/filesystem/last write time")  
[filesystem::permissions](../permissions.html "cpp/filesystem/permissions")  
[filesystem::read_symlink](../read_symlink.html "cpp/filesystem/read symlink")  
[filesystem::remove  
filesystem::remove_all](../remove.html "cpp/filesystem/remove")  
[filesystem::rename](../rename.html "cpp/filesystem/rename")  
[filesystem::resize_file](../resize_file.html "cpp/filesystem/resize file")  
[filesystem::space](../space.html "cpp/filesystem/space")  
[filesystem::status  
filesystem::symlink_status](../status.html "cpp/filesystem/status")  
  
[File types](../../filesystem.html#File_types "cpp/filesystem")  
| [filesystem::is_block_file](../is_block_file.html "cpp/filesystem/is block file")  
---  
[filesystem::is_character_file](../is_character_file.html "cpp/filesystem/is character file")  
[filesystem::is_directory](../is_directory.html "cpp/filesystem/is directory")  
[filesystem::is_empty](../is_empty.html "cpp/filesystem/is empty")  
[filesystem::status_known](../status_known.html "cpp/filesystem/status known")  
  
| [filesystem::is_fifo](../is_fifo.html "cpp/filesystem/is fifo")  
---  
[filesystem::is_other](../is_other.html "cpp/filesystem/is other")  
[filesystem::is_regular_file](../is_regular_file.html "cpp/filesystem/is regular file")  
[filesystem::is_socket](../is_socket.html "cpp/filesystem/is socket")  
[filesystem::is_symlink](../is_symlink.html "cpp/filesystem/is symlink")  
  


[`std::filesystem::directory_iterator`](../directory_iterator.html "cpp/filesystem/directory iterator")

Member functions  
---  
[directory_iterator::directory_iterator](directory_iterator.html "cpp/filesystem/directory iterator/directory iterator")  
[directory_iterator::operator*directory_iterator::operator->](operator*.html "cpp/filesystem/directory iterator/operator*")  
[directory_iterator::operator=](operator=.html "cpp/filesystem/directory iterator/operator=")  
[incrementoperator++](increment.html "cpp/filesystem/directory iterator/increment")  
Non-member functions  
**begin(std::filesystem::directory_iterator)end(std::filesystem::directory_iterator)**  
  


Defined in header `[<filesystem>](../../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
directory_iterator begin( directory_iterator iter ) noexcept; |  (1)  |  (since C++17)  
directory_iterator end( directory_iterator ) noexcept; |  (2)  |  (since C++17)  
| |   
  
1) Returns iter unchanged.

2) Returns a default-constructed [`directory_iterator`](../directory_iterator.html "cpp/filesystem/directory iterator"), which serves as the end iterator. The argument is ignored.

These non-member functions enable the use of `directory_iterator`s with range-based for loops and make `directory_iterator` a [`range`](../../ranges/range.html "cpp/ranges/range") type(since C++20). 

## Contents

  * [1 Parameters](begin.html#Parameters)
  * [2 Return value](begin.html#Return_value)
  * [3 Example](begin.html#Example)
  * [4 Defect reports](begin.html#Defect_reports)
  * [5 See also](begin.html#See_also)

  
---  
  
### Parameters

iter  |  \-  |  a `directory_iterator`  
---|---|---  
  
### Return value

1) iter unchanged.

2) End iterator (default-constructed `directory_iterator`).

### Example

Run this code
    
    
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    namespace fs = std::filesystem;
     
    int main()
    {
        fs::create_directories("sandbox/a/b");
        [std::ofstream](../../io/basic_ofstream.html)("sandbox/file1.txt");
        [std::ofstream](../../io/basic_ofstream.html)("sandbox/file2.txt");
        for (auto& p : fs::directory_iterator("sandbox"))
            [std::cout](../../io/cout.html) << p << '\n';
        fs::remove_all("sandbox");
    }

Possible output: 
    
    
    "sandbox/a"
    "sandbox/file1.txt"
    "sandbox/file2.txt"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3480](https://cplusplus.github.io/LWG/issue3480) | C++17  | `end` took the argument by reference  | takes the argument by value   
  
### See also

[ begin(std::filesystem::recursive_directory_iterator)end(std::filesystem::recursive_directory_iterator)](../recursive_directory_iterator/begin.html "cpp/filesystem/recursive directory iterator/begin") |  range-based for loop support   
(function)   
---|---
