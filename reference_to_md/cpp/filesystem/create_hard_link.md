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
  


[Filesystem library](../filesystem.html "cpp/filesystem")

[Classes](../filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](path.html "cpp/filesystem/path")  
---  
[filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error")  
[filesystem::directory_entry](directory_entry.html "cpp/filesystem/directory entry")  
[filesystem::directory_iterator](directory_iterator.html "cpp/filesystem/directory iterator")  
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
**filesystem::create_hard_link**  
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
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
void create_hard_link( const [std::filesystem::path](path.html)& target,  
const [std::filesystem::path](path.html)& link ); |  (1)  |  (since C++17)  
void create_hard_link( const [std::filesystem::path](path.html)& target,  
const [std::filesystem::path](path.html)& link,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
| |   
  
Creates a hard link link with its target set to target as if by POSIX [`link()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/link.html): the pathname target must exist. 

Once created, link and target are two logical names that refer to the same file (they are [`equivalent`](equivalent.html "cpp/filesystem/equivalent")). Even if the original name target is deleted, the file continues to exist and is accessible as link. 

## Contents

  * [1 Parameters](create_hard_link.html#Parameters)
  * [2 Return value](create_hard_link.html#Return_value)
  * [3 Exceptions](create_hard_link.html#Exceptions)
  * [4 Notes](create_hard_link.html#Notes)
  * [5 Example](create_hard_link.html#Example)
  * [6 See also](create_hard_link.html#See_also)

  
---  
  
### Parameters

target  |  \-  |  path of the file or directory to link to   
---|---|---  
link  |  \-  |  path of the new hard link   
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

(none) 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with target as the first path argument, link as the second path argument, and the OS error code as the error code argument.

2) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

Some operating systems do not support hard links at all or support them only for regular files. 

Some file systems do not support hard links regardless of the operating system: the FAT file system used on memory cards and flash drives, for example. 

Some file systems limit the number of links per file. 

Hardlinking to directories is typically restricted to the superuser. 

Hard links typically cannot cross filesystem boundaries. 

The special pathname dot (".") is a hard link to its parent directory. The special pathname dot-dot ".." is a hard link to the directory that is the parent of its parent. 

### Example

Run this code
    
    
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    namespace fs = std::filesystem;
     
    int main()
    {
        fs::create_directories("sandbox/subdir");
        [std::ofstream](../io/basic_ofstream.html)("sandbox/a").put('a'); // create regular file
        fs::create_hard_link("sandbox/a", "sandbox/b");
        fs::remove("sandbox/a");
        // read from the original file via surviving hard link
        char c = [std::ifstream](../io/basic_ifstream.html)("sandbox/b").get();
        [std::cout](../io/cout.html) << c << '\n';
        fs::remove_all("sandbox");
    }

Output: 
    
    
    a

### See also

[ create_symlinkcreate_directory_symlink](create_symlink.html "cpp/filesystem/create symlink")(C++17)(C++17) |  creates a symbolic link   
(function)   
---|---  
[ hard_link_count](hard_link_count.html "cpp/filesystem/hard link count")(C++17) |  returns the number of hard links referring to the specific file   
(function) 
