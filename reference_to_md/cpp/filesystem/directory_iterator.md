
  


[Filesystem library](../filesystem.html "cpp/filesystem")

[Classes](../filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](path.html "cpp/filesystem/path")  
---  
[filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error")  
[filesystem::directory_entry](directory_entry.html "cpp/filesystem/directory entry")  
**filesystem::directory_iterator**  
[filesystem::recursive_directory_iterator](recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator")` `  
[filesystem::file_status](file_status.html "cpp/filesystem/file status")  
[filesystem::space_info](space_info.html "cpp/filesystem/space info")  
  
| [filesystem::file_type](file_type.html "cpp/filesystem/file type")  
---  
[filesystem::file_time_type](file_time_type.html "cpp/filesystem/file time type")  
[filesystem::perms](perms.html "cpp/filesystem/perms")  
[filesystem::perm_options](perm_options.html "cpp/filesystem/perm options")  
[filesystem::copy_options](copy_options.html "cpp/filesystem/copy options")  
[filesystem::directory_options](directory_options.html "cpp/filesystem/directory options")  
  
[Functions](../filesystem.html#Non-member_functions "cpp/filesystem")  
| [filesystem::absolute](absolute.html "cpp/filesystem/absolute")  
---  
[filesystem::canonicalfilesystem::weakly_canonical](canonical.html "cpp/filesystem/canonical")  
[filesystem::relativefilesystem::proximate](relative.html "cpp/filesystem/relative")  
[filesystem::copy](copy.html "cpp/filesystem/copy")  
[filesystem::copy_file](copy_file.html "cpp/filesystem/copy file")  
[filesystem::copy_symlink](copy_symlink.html "cpp/filesystem/copy symlink")  
[filesystem::create_directory  
filesystem::create_directories](create_directory.html "cpp/filesystem/create directory")  
[filesystem::create_hard_link](create_hard_link.html "cpp/filesystem/create hard link")  
[filesystem::create_symlink  
filesystem::create_directory_symlink](create_symlink.html "cpp/filesystem/create symlink")  
[filesystem::current_path](current_path.html "cpp/filesystem/current path")  
[filesystem::temp_directory_path](temp_directory_path.html "cpp/filesystem/temp directory path")  
  
| [filesystem::exists](exists.html "cpp/filesystem/exists")  
---  
[filesystem::equivalent](equivalent.html "cpp/filesystem/equivalent")  
[filesystem::file_size](file_size.html "cpp/filesystem/file size")  
[filesystem::hard_link_count](hard_link_count.html "cpp/filesystem/hard link count")  
[filesystem::last_write_time](last_write_time.html "cpp/filesystem/last write time")  
[filesystem::permissions](permissions.html "cpp/filesystem/permissions")  
[filesystem::read_symlink](read_symlink.html "cpp/filesystem/read symlink")  
[filesystem::remove  
filesystem::remove_all](remove.html "cpp/filesystem/remove")  
[filesystem::rename](rename.html "cpp/filesystem/rename")  
[filesystem::resize_file](resize_file.html "cpp/filesystem/resize file")  
[filesystem::space](space.html "cpp/filesystem/space")  
[filesystem::status  
filesystem::symlink_status](status.html "cpp/filesystem/status")  
  
[File types](../filesystem.html#File_types "cpp/filesystem")  
| [filesystem::is_block_file](is_block_file.html "cpp/filesystem/is block file")  
---  
[filesystem::is_character_file](is_character_file.html "cpp/filesystem/is character file")  
[filesystem::is_directory](is_directory.html "cpp/filesystem/is directory")  
[filesystem::is_empty](is_empty.html "cpp/filesystem/is empty")  
[filesystem::status_known](status_known.html "cpp/filesystem/status known")  
  
| [filesystem::is_fifo](is_fifo.html "cpp/filesystem/is fifo")  
---  
[filesystem::is_other](is_other.html "cpp/filesystem/is other")  
[filesystem::is_regular_file](is_regular_file.html "cpp/filesystem/is regular file")  
[filesystem::is_socket](is_socket.html "cpp/filesystem/is socket")  
[filesystem::is_symlink](is_symlink.html "cpp/filesystem/is symlink")  
  


**`std::filesystem::directory_iterator`**

Member functions  
---  
[directory_iterator::directory_iterator](directory_iterator/directory_iterator.html "cpp/filesystem/directory iterator/directory iterator")  
[directory_iterator::operator*directory_iterator::operator->](directory_iterator/operator*.html "cpp/filesystem/directory iterator/operator*")  
[directory_iterator::operator=](directory_iterator/operator=.html "cpp/filesystem/directory iterator/operator=")  
[incrementoperator++](directory_iterator/increment.html "cpp/filesystem/directory iterator/increment")  
Non-member functions  
[begin(std::filesystem::directory_iterator)end(std::filesystem::directory_iterator)](directory_iterator/begin.html "cpp/filesystem/directory iterator/begin")  
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
class directory_iterator; |  |  (since C++17)  
| |   
  
`directory_iterator` is a [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator") that iterates over the [`directory_entry`](directory_entry.html "cpp/filesystem/directory entry") elements of a directory (but does not visit the subdirectories). The iteration order is unspecified, except that each directory entry is visited only once. The special pathnames dot and dot-dot are skipped. 

If the `directory_iterator` reports an error or is advanced past the last directory entry, it becomes equal to the default-constructed iterator, also known as the end iterator. Two end iterators are always equal, dereferencing or incrementing the end iterator is undefined behavior. 

If a file or a directory is deleted or added to the directory tree after the directory iterator has been created, it is unspecified whether the change would be observed through the iterator. 

## Contents

  * [1 Member types](directory_iterator.html#Member_types)
  * [2 Member functions](directory_iterator.html#Member_functions)
  * [3 Non-member functions](directory_iterator.html#Non-member_functions)
  * [4 Helper specializations](directory_iterator.html#Helper_specializations)
  * [5 Notes](directory_iterator.html#Notes)
  * [6 Example](directory_iterator.html#Example)
  * [7 Defect reports](directory_iterator.html#Defect_reports)
  * [8 See also](directory_iterator.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  [std::filesystem::directory_entry](directory_entry.html "cpp/filesystem/directory entry")  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
`pointer` |  const [std::filesystem::directory_entry](directory_entry.html)*  
`reference` |  const [std::filesystem::directory_entry](directory_entry.html)&  
`iterator_category` |  [std::input_iterator_tag](../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
  
### Member functions

[ (constructor)](directory_iterator/directory_iterator.html "cpp/filesystem/directory iterator/directory iterator") |  constructs a directory iterator   
(public member function)   
---|---  
(destructor) |  default destructor   
(public member function)   
[ operator=](directory_iterator/operator=.html "cpp/filesystem/directory iterator/operator=") |  assigns contents   
(public member function)   
[ operator*operator->](directory_iterator/operator*.html "cpp/filesystem/directory iterator/operator*") |  accesses the pointed-to entry   
(public member function)   
[ incrementoperator++](directory_iterator/increment.html "cpp/filesystem/directory iterator/increment") |  advances to the next entry   
(public member function)   
  
### Non-member functions

[ begin(std::filesystem::directory_iterator)end(std::filesystem::directory_iterator)](directory_iterator/begin.html "cpp/filesystem/directory iterator/begin")(C++17) |  range-based for loop support   
(function)   
---|---  
  
Additionally, `operator==` and `operator!=` are(until C++20)`operator==` is(since C++20) provided as required by [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator"). 

It is unspecified whether `operator!=` is provided because it can be synthesized from `operator==`, and(since C++20) whether an equality operator is a member or non-member. 

### Helper specializations

template<>  
constexpr bool   
[ranges::enable_borrowed_range](../ranges/borrowed_range.html)<std::filesystem::directory_iterator> = true; |  |  (since C++20)  
---|---|---  
template<>  
constexpr bool   
[ranges::enable_view](../ranges/view.html)<std::filesystem::directory_iterator> = true; |  |  (since C++20)  
| |   
  
These specializations for `directory_iterator` make it a [`borrowed_range`](../ranges/borrowed_range.html "cpp/ranges/borrowed range") and a [`view`](../ranges/view.html "cpp/ranges/view"). 

### Notes

Many low-level OS APIs for directory traversal retrieve file attributes along with the next directory entry. The constructors and the non-const member functions of **std::filesystem::directory_iterator** store these attributes, if any, in the pointed-to [std::filesystem::directory_entry](directory_entry.html "cpp/filesystem/directory entry") without calling [`directory_entry::refresh`](directory_entry/refresh.html "cpp/filesystem/directory entry/refresh"), which makes it possible to examine the attributes of the directory entries as they are being iterated over, without making additional system calls. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <filesystem>
    #include <fstream>
    #include <iostream>
     
    int main()
    {
        const [std::filesystem::path](path.html) sandbox{"sandbox"};
        [std::filesystem::create_directories](create_directory.html)(sandbox/"dir1"/"dir2");
        [std::ofstream](../io/basic_ofstream.html){sandbox/"file1.txt"};
        [std::ofstream](../io/basic_ofstream.html){sandbox/"file2.txt"};
     
        [std::cout](../io/cout.html) << "directory_iterator:\n";
        // directory_iterator can be iterated using a range-for loop
        for (auto const& dir_entry : std::filesystem::directory_iterator{sandbox}) 
            [std::cout](../io/cout.html) << dir_entry.path() << '\n';
     
        [std::cout](../io/cout.html) << "\ndirectory_iterator as a range:\n";
        // directory_iterator behaves as a range in other ways, too
        std::[ranges::for_each](../algorithm/ranges/for_each.html)(
            std::filesystem::directory_iterator{sandbox},
            [](const auto& dir_entry) { [std::cout](../io/cout.html) << dir_entry << '\n'; });
     
        [std::cout](../io/cout.html) << "\nrecursive_directory_iterator:\n";
        for (auto const& dir_entry : [std::filesystem::recursive_directory_iterator](recursive_directory_iterator.html){sandbox}) 
            [std::cout](../io/cout.html) << dir_entry << '\n';
     
        // delete the sandbox dir and all contents within it, including subdirs
        [std::filesystem::remove_all](remove.html)(sandbox);
    }

Possible output: 
    
    
    directory_iterator:
    "sandbox/file2.txt"
    "sandbox/file1.txt"
    "sandbox/dir1"
     
    directory_iterator as a range:
    "sandbox/file2.txt"
    "sandbox/file1.txt"
    "sandbox/dir1"
     
    recursive_directory_iterator:
    "sandbox/file2.txt"
    "sandbox/file1.txt"
    "sandbox/dir1"
    "sandbox/dir1/dir2"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3480](https://cplusplus.github.io/LWG/issue3480) | C++20  | `directory_iterator` was neither a [`borrowed_range`](../ranges/borrowed_range.html "cpp/ranges/borrowed range") nor a [`view`](../ranges/view.html "cpp/ranges/view") | it is both   
  
### See also

[ recursive_directory_iterator](recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator")(C++17) |  an iterator to the contents of a directory and its subdirectories   
(class)   
---|---  
[ directory_options](directory_options.html "cpp/filesystem/directory options")(C++17) |  options for iterating directory contents   
(enum)   
[ directory_entry](directory_entry.html "cpp/filesystem/directory entry")(C++17) |  a directory entry   
(class) 
