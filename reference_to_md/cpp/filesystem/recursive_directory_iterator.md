
  


[Filesystem library](../filesystem.html "cpp/filesystem")

[Classes](../filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](path.html "cpp/filesystem/path")  
---  
[filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error")  
[filesystem::directory_entry](directory_entry.html "cpp/filesystem/directory entry")  
[filesystem::directory_iterator](directory_iterator.html "cpp/filesystem/directory iterator")  
**filesystem::recursive_directory_iterator**` `  
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
  


**`std::filesystem::recursive_directory_iterator`**

Member functions  
---  
[recursive_directory_iterator::recursive_directory_iterator](recursive_directory_iterator/recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator/recursive directory iterator")  
[recursive_directory_iterator::operator*recursive_directory_iterator::operator->](recursive_directory_iterator/operator*.html "cpp/filesystem/recursive directory iterator/operator*")  
[recursive_directory_iterator::options](recursive_directory_iterator/options.html "cpp/filesystem/recursive directory iterator/options")  
[recursive_directory_iterator::depth](recursive_directory_iterator/depth.html "cpp/filesystem/recursive directory iterator/depth")  
[recursive_directory_iterator::recursion_pending](recursive_directory_iterator/recursion_pending.html "cpp/filesystem/recursive directory iterator/recursion pending")  
[recursive_directory_iterator::operator=](recursive_directory_iterator/operator=.html "cpp/filesystem/recursive directory iterator/operator=")  
[recursive_directory_iterator::incrementrecursive_directory_iterator::operator++](recursive_directory_iterator/increment.html "cpp/filesystem/recursive directory iterator/increment")  
[recursive_directory_iterator::pop](recursive_directory_iterator/pop.html "cpp/filesystem/recursive directory iterator/pop")  
[recursive_directory_iterator::disable_recursion_pending](recursive_directory_iterator/disable_recursion_pending.html "cpp/filesystem/recursive directory iterator/disable recursion pending")  
Non-member functions  
[begin(std::filesystem::recursive_directory_iterator)end(std::filesystem::recursive_directory_iterator)](recursive_directory_iterator/begin.html "cpp/filesystem/recursive directory iterator/begin")  
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
class recursive_directory_iterator; |  |  (since C++17)  
| |   
  
`recursive_directory_iterator` is a [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator") that iterates over the [`directory_entry`](directory_entry.html "cpp/filesystem/directory entry") elements of a directory, and, recursively, over the entries of all subdirectories. The iteration order is unspecified, except that each directory entry is visited only once. 

By default, symlinks are not followed, but this can be enabled by specifying the directory option [`follow_directory_symlink`](directory_options.html "cpp/filesystem/directory options") at construction time. 

The special pathnames dot and dot-dot are skipped. 

If the `recursive_directory_iterator` reports an error or is advanced past the last directory entry of the top-level directory, it becomes equal to the default-constructed iterator, also known as the end iterator. Two end iterators are always equal, dereferencing or incrementing the end iterator is undefined behavior. 

If a file or a directory is deleted or added to the directory tree after the recursive directory iterator has been created, it is unspecified whether the change would be observed through the iterator. 

If the directory structure contains cycles, the end iterator may be unreachable. 

## Contents

  * [1 Member types](recursive_directory_iterator.html#Member_types)
  * [2 Member functions](recursive_directory_iterator.html#Member_functions)
    * [2.1 Observers](recursive_directory_iterator.html#Observers)
    * [2.2 Modifiers](recursive_directory_iterator.html#Modifiers)
  * [3 Non-member functions](recursive_directory_iterator.html#Non-member_functions)
  * [4 Helper specializations](recursive_directory_iterator.html#Helper_specializations)
  * [5 Notes](recursive_directory_iterator.html#Notes)
  * [6 Example](recursive_directory_iterator.html#Example)
  * [7 Defect reports](recursive_directory_iterator.html#Defect_reports)
  * [8 See also](recursive_directory_iterator.html#See_also)

  
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

[ (constructor)](recursive_directory_iterator/recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator/recursive directory iterator") |  constructs a recursive directory iterator   
(public member function)   
---|---  
(destructor) |  default destructor   
(public member function)   
  
#####  Observers   
  
[ operator*operator->](recursive_directory_iterator/operator*.html "cpp/filesystem/recursive directory iterator/operator*") |  accesses the pointed-to entry   
(public member function)   
[ options](recursive_directory_iterator/options.html "cpp/filesystem/recursive directory iterator/options") |  returns the currently active options that affect the iteration   
(public member function)   
[ depth](recursive_directory_iterator/depth.html "cpp/filesystem/recursive directory iterator/depth") |  returns the current recursion depth   
(public member function)   
[ recursion_pending](recursive_directory_iterator/recursion_pending.html "cpp/filesystem/recursive directory iterator/recursion pending") |  checks whether the recursion is disabled for the current directory   
(public member function)   
  
#####  Modifiers   
  
[ operator=](recursive_directory_iterator/operator=.html "cpp/filesystem/recursive directory iterator/operator=") |  assigns contents   
(public member function)   
[ incrementoperator++](recursive_directory_iterator/increment.html "cpp/filesystem/recursive directory iterator/increment") |  advances to the next entry   
(public member function)   
[ pop](recursive_directory_iterator/pop.html "cpp/filesystem/recursive directory iterator/pop") |  moves the iterator one level up in the directory hierarchy   
(public member function)   
[ disable_recursion_pending](recursive_directory_iterator/disable_recursion_pending.html "cpp/filesystem/recursive directory iterator/disable recursion pending") |  disables recursion until the next increment   
(public member function)   
  
### Non-member functions

[ begin(std::filesystem::recursive_directory_iterator)end(std::filesystem::recursive_directory_iterator)](recursive_directory_iterator/begin.html "cpp/filesystem/recursive directory iterator/begin") |  range-based for loop support   
(function)   
---|---  
  
Additionally, `operator==` and `operator!=` are(until C++20)`operator==` is(since C++20) provided as required by [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator"). 

It is unspecified whether `operator!=` is provided because it can be synthesized from `operator==`, and(since C++20) whether an equality operator is a member or non-member. 

### Helper specializations

template<>  
constexpr bool  
[ranges::enable_borrowed_range](../ranges/borrowed_range.html)<std::filesystem::recursive_directory_iterator> = true; |  |  (since C++20)  
---|---|---  
template<>  
constexpr bool  
[ranges::enable_view](../ranges/view.html)<std::filesystem::recursive_directory_iterator> = true; |  |  (since C++20)  
| |   
  
These specializations for `recursive_directory_iterator` make it a [`borrowed_range`](../ranges/borrowed_range.html "cpp/ranges/borrowed range") and a [`view`](../ranges/view.html "cpp/ranges/view"). 

### Notes

A `recursive_directory_iterator` typically holds a reference-counted _pointer_ (to satisfy shallow-copy semantics of [LegacyInputIterator](../named_req/InputIterator.html "cpp/named req/InputIterator")) to an implementation object, which holds: 

  * a container (such as [std::vector](../container/vector.html "cpp/container/vector")) of non-recursive [`directory_iterator`s](directory_iterator.html "cpp/filesystem/directory iterator") that forms the recursion stack, 
  * the recursion depth counter (accessible with [`depth()`](recursive_directory_iterator/depth.html "cpp/filesystem/recursive directory iterator/depth")), 
  * the directory options used at construction (accessible with [`options()`](recursive_directory_iterator/options.html "cpp/filesystem/recursive directory iterator/options")), 
  * the pending recursion flag (accessible with [`recursion_pending()`](recursive_directory_iterator/recursion_pending.html "cpp/filesystem/recursive directory iterator/recursion pending"), may be combined with the directory options to save space). 



### Example

Run this code
    
    
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    #include <string>
    namespace fs = std::filesystem;
     
    int main()
    {
        [std::filesystem::current_path](current_path.html)([std::filesystem::temp_directory_path](temp_directory_path.html)());
        [std::filesystem::create_directories](create_directory.html)("sandbox/a/b");
        [std::ofstream](../io/basic_ofstream.html)("sandbox/file1.txt");
        [std::filesystem::create_symlink](create_symlink.html)("a", "sandbox/syma");
     
        // Iterate over the std::filesystem::directory_entry elements explicitly
        auto entry_length{3UZ};
        for (const fs::directory_entry& dir_entry :
                fs::recursive_directory_iterator("sandbox"))
        {
            [std::cout](../io/cout.html) << dir_entry << '\n';
            if (auto l{dir_entry.path().string().length()}; entry_length < l)
                entry_length = l;
        }
        [std::cout](../io/cout.html) << [std::string](../string/basic_string.html)(entry_length + 2, '-') << '\n';
     
        // Iterate over the std::filesystem::directory_entry elements using `auto`
        for (auto const& dir_entry : fs::recursive_directory_iterator("sandbox"))
            [std::cout](../io/cout.html) << dir_entry << '\n';
     
        [std::filesystem::remove_all](remove.html)("sandbox");
    }

Possible output: 
    
    
    "sandbox/syma"
    "sandbox/file1.txt"
    "sandbox/a"
    "sandbox/a/b"
    -------------------
    "sandbox/syma"
    "sandbox/file1.txt"
    "sandbox/a"
    "sandbox/a/b"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3480](https://cplusplus.github.io/LWG/issue3480) | C++20  | `recursive_directory_iterator` was neither a [`borrowed_range`](../ranges/borrowed_range.html "cpp/ranges/borrowed range") nor a [`view`](../ranges/view.html "cpp/ranges/view") | it is both   
  
### See also

[ directory_iterator](directory_iterator.html "cpp/filesystem/directory iterator")(C++17) |  an iterator to the contents of the directory   
(class)   
---|---  
[ directory_entry](directory_entry.html "cpp/filesystem/directory entry")(C++17) |  a directory entry   
(class)   
[ directory_options](directory_options.html "cpp/filesystem/directory options")(C++17) |  options for iterating directory contents   
(enum) 
