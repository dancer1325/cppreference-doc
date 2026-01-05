[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](../execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Filesystem library](../fs.html "cpp/experimental/fs")

Classes  
---  
| [filesystem::path](path.html "cpp/experimental/fs/path")  
---  
[filesystem::filesystem_error](filesystem_error.html "cpp/experimental/fs/filesystem error")  
[filesystem::directory_entry](directory_entry.html "cpp/experimental/fs/directory entry")  
**filesystem::directory_iterator**  
[filesystem::recursive_directory_iterator](recursive_directory_iterator.html "cpp/experimental/fs/recursive directory iterator")  
[filesystem::file_status](file_status.html "cpp/experimental/fs/file status")  
  
| [filesystem::space_info](space_info.html "cpp/experimental/fs/space info")  
---  
[filesystem::file_type](file_type.html "cpp/experimental/fs/file type")  
[filesystem::perms](perms.html "cpp/experimental/fs/perms")  
[filesystem::copy_options](copy_options.html "cpp/experimental/fs/copy options")  
[filesystem::directory_options](directory_options.html "cpp/experimental/fs/directory options")  
[filesystem::file_time_type](file_time_type.html "cpp/experimental/fs/file time type")  
  
Functions  
| [filesystem::absolute  
filesystem::system_complete](absolute.html "cpp/experimental/fs/absolute")  
---  
[filesystem::canonical](canonical.html "cpp/experimental/fs/canonical")  
[filesystem::copy](copy.html "cpp/experimental/fs/copy")  
[filesystem::copy_file](copy_file.html "cpp/experimental/fs/copy file")  
[filesystem::copy_symlink](copy_symlink.html "cpp/experimental/fs/copy symlink")  
[filesystem::create_directory  
filesystem::create_directories](create_directory.html "cpp/experimental/fs/create directory")  
[filesystem::create_hard_link](create_hard_link.html "cpp/experimental/fs/create hard link")  
[filesystem::create_symlink  
filesystem::create_directory_symlink](create_symlink.html "cpp/experimental/fs/create symlink")  
[filesystem::current_path](current_path.html "cpp/experimental/fs/current path")  
[filesystem::exists](exists.html "cpp/experimental/fs/exists")  
[filesystem::equivalent](equivalent.html "cpp/experimental/fs/equivalent")  
  
| [filesystem::file_size](file_size.html "cpp/experimental/fs/file size")  
---  
[filesystem::hard_link_count](hard_link_count.html "cpp/experimental/fs/hard link count")  
[filesystem::last_write_time](last_write_time.html "cpp/experimental/fs/last write time")  
[filesystem::permissions](permissions.html "cpp/experimental/fs/permissions")  
[filesystem::read_symlink](read_symlink.html "cpp/experimental/fs/read symlink")  
[filesystem::remove  
filesystem::remove_all](remove.html "cpp/experimental/fs/remove")  
[filesystem::rename](rename.html "cpp/experimental/fs/rename")  
[filesystem::resize_file](resize_file.html "cpp/experimental/fs/resize file")  
[filesystem::space](space.html "cpp/experimental/fs/space")  
[filesystem::status  
filesystem::symlink_status](status.html "cpp/experimental/fs/status")  
[filesystem::temp_directory_path](temp_directory_path.html "cpp/experimental/fs/temp directory path")  
  
File types  
| [filesystem::is_block_file](is_block_file.html "cpp/experimental/fs/is block file")  
---  
[filesystem::is_character_file](is_character_file.html "cpp/experimental/fs/is character file")  
[filesystem::is_directory](is_directory.html "cpp/experimental/fs/is directory")  
[filesystem::is_empty](is_empty.html "cpp/experimental/fs/is empty")  
[filesystem::status_known](status_known.html "cpp/experimental/fs/status known")  
  
| [filesystem::is_fifo](is_fifo.html "cpp/experimental/fs/is fifo")  
---  
[filesystem::is_other](is_other.html "cpp/experimental/fs/is other")  
[filesystem::is_regular_file](is_regular_file.html "cpp/experimental/fs/is regular file")  
[filesystem::is_socket](is_socket.html "cpp/experimental/fs/is socket")  
[filesystem::is_symlink](is_symlink.html "cpp/experimental/fs/is symlink")  
  


**`directory_iterator`**

Member functions  
---  
[directory_iterator::directory_iterator](directory_iterator/directory_iterator.html "cpp/experimental/fs/directory iterator/directory iterator")  
[directory_iterator::operator*directory_iterator::operator->](directory_iterator/operator*.html "cpp/experimental/fs/directory iterator/operator*")  
[directory_iterator::operator=](directory_iterator/operator=.html "cpp/experimental/fs/directory iterator/operator=")  
[directory_iterator::incrementdirectory_iterator::operator++](directory_iterator/increment.html "cpp/experimental/fs/directory iterator/increment")  
Non-member functions  
[begin(directory_iterator)end(directory_iterator)](directory_iterator/begin.html "cpp/experimental/fs/directory iterator/begin")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016; see [std::filesystem::directory_iterator](../../filesystem/directory_iterator.html "cpp/filesystem/directory iterator") (since C++17)  
---|---  
Defined in header `[<experimental/filesystem>](../../header/experimental/filesystem.html "cpp/header/experimental/filesystem")` |  |   
---|---|---  
class directory_iterator; |  |  (filesystem TS)  
| |   
  
`directory_iterator` is a [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator") that iterates over the [`directory_entry`](directory_entry.html "cpp/experimental/fs/directory entry") elements of a directory (but does not visit the subdirectories). The iteration order is unspecified, except that each directory entry is visited only once. The special pathnames dot and dot-dot are skipped. 

If the `directory_iterator` is advanced past the last directory entry, it becomes equal to the default-constructed iterator, also known as the end iterator. Two end iterators are always equal, dereferencing or incrementing the end iterator is undefined behavior. 

If a file or a directory is deleted or added to the directory tree after the directory iterator has been created, it is unspecified whether the change would be observed through the iterator. 

## Contents

  * [1 Member types](directory_iterator.html#Member_types)
  * [2 Member functions](directory_iterator.html#Member_functions)
  * [3 Non-member functions](directory_iterator.html#Non-member_functions)
  * [4 Example](directory_iterator.html#Example)
  * [5 See also](directory_iterator.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  `filesystem::directory_entry`  
`difference_type` |  `std::ptrdiff_t`  
`pointer` |  `const filesystem::directory_entry*`  
`reference` |  `const filesystem::directory_entry&`  
`iterator_category` |  `std::input_iterator_tag`  
  
### Member functions

[ (constructor)](directory_iterator/directory_iterator.html "cpp/experimental/fs/directory iterator/directory iterator") |  constructs a directory iterator   
(public member function)   
---|---  
(destructor) |  default destructor   
(public member function)   
[ operator=](directory_iterator/operator=.html "cpp/experimental/fs/directory iterator/operator=") |  assigns contents   
(public member function)   
[ operator*operator->](directory_iterator/operator*.html "cpp/experimental/fs/directory iterator/operator*") |  accesses the pointed-to entry   
(public member function)   
[ incrementoperator++](directory_iterator/increment.html "cpp/experimental/fs/directory iterator/increment") |  advances to the next entry   
(public member function)   
  
### Non-member functions

[ filesystem::begin(filesystem::directory_iterator)filesystem::end(filesystem::directory_iterator)](directory_iterator/begin.html "cpp/experimental/fs/directory iterator/begin") |  range-based for loop support   
(function)   
---|---  
  
Additionally, operator== and operator!= are provided, either as members or as non-members, as required by [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator"). 

### Example

Run this code
    
    
    #include <experimental/filesystem>
    #include <fstream>
    #include <iostream>
    namespace fs = std::experimental::filesystem;
     
    int main()
    {
        fs::create_directories("sandbox/a/b");
        [std::ofstream](../../io/basic_ofstream.html){"sandbox/file1.txt"};
        [std::ofstream](../../io/basic_ofstream.html){"sandbox/file2.txt"};
        for (const fs::directory_entry& entry : fs::directory_iterator{"sandbox"})
            [std::cout](../../io/cout.html) << entry << '\n';
        fs::remove_all("sandbox");
    }

Possible output: 
    
    
    "sandbox/a"
    "sandbox/file1.txt"
    "sandbox/file2.txt"

### See also

[ recursive_directory_iterator](recursive_directory_iterator.html "cpp/experimental/fs/recursive directory iterator") |  an iterator to the contents of a directory and its subdirectories   
(class)   
---|---  
[ directory_options](directory_options.html "cpp/experimental/fs/directory options") |  options for iterating directory contents   
(enum)   
[ directory_entry](directory_entry.html "cpp/experimental/fs/directory entry") |  a directory entry   
(class) 
