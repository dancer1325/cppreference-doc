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
**filesystem::remove  
filesystem::remove_all**  
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
bool remove( const [std::filesystem::path](path.html)& p ); |  (1)  |  (since C++17)  
bool remove( const [std::filesystem::path](path.html)& p, [std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
[std::uintmax_t](../types/integer.html) remove_all( const [std::filesystem::path](path.html)& p ); |  (3)  |  (since C++17)  
[std::uintmax_t](../types/integer.html) remove_all( const [std::filesystem::path](path.html)& p, [std::error_code](../error/error_code.html)& ec ); |  (4)  |  (since C++17)  
| |   
  
1,2) The file or empty directory identified by the path p is deleted as if by the POSIX [`remove`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/remove.html). Symlinks are not followed (symlink is removed, not its target).

3,4) Deletes the contents of p (if it is a directory) and the contents of all its subdirectories, recursively, then deletes p itself as if by repeatedly applying the POSIX [`remove`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/remove.html). Symlinks are not followed (symlink is removed, not its target).

## Contents

  * [1 Parameters](remove.html#Parameters)
  * [2 Return value](remove.html#Return_value)
  * [3 Exceptions](remove.html#Exceptions)
  * [4 Notes](remove.html#Notes)
  * [5 Example](remove.html#Example)
  * [6 Defect reports](remove.html#Defect_reports)
  * [7 See also](remove.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  path to delete   
---|---|---  
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload.   
  
### Return value

1,2) true if the file was deleted, false if it did not exist. The overload that takes `error_code&` argument returns false on errors.

3,4) Returns the number of files and directories that were deleted (which may be zero if p did not exist to begin with). The overload that takes `error_code&` argument returns static_cast<[std::uintmax_t](../types/integer.html)>(-1) on error.

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1,3) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2,4) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

On POSIX systems, this function typically calls [`unlink`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/unlink.html) and [`rmdir`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/rmdir.html) as needed, on Windows [`DeleteFileW`](https://learn.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-deletefilew) and [`RemoveDirectoryW`](https://learn.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-removedirectoryw). 

If p did not exist, this function returns false and does not report an error. 

### Example

Run this code
    
    
    #include <cstdint>
    #include <filesystem>
    #include <fstream>
    #include <iostream>
     
    int main()
    {
        namespace fs = std::filesystem;
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
     
        fs::path tmp{[std::filesystem::temp_directory_path](temp_directory_path.html)()};
     
        const auto O_O{"O_O"};
        [std::ofstream](../io/basic_ofstream.html){tmp / O_O} << O_O; // creates file containing O_O
        [std::cout](../io/cout.html) << "remove(): " << fs::remove(tmp / O_O) << '\n'; // success
        [std::cout](../io/cout.html) << "remove(): " << fs::remove(tmp / O_O) << '\n'; // fail
     
        [std::filesystem::create_directories](create_directory.html)(tmp / "abcdef/example");
        const [std::uintmax_t](../types/integer.html) n{fs::remove_all(tmp / "abcdef")};
        [std::cout](../io/cout.html) << "remove_all(): " << n << " files or directories\n";
    }

Possible output: 
    
    
    remove(): true
    remove(): false
    remove_all(): 2 files or directories

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3014](https://cplusplus.github.io/LWG/issue3014) | C++17  | `error_code` overload of `remove_all` marked noexcept but can allocate memory  | noexcept removed   
  
### See also

[ remove](../io/c/remove.html "cpp/io/c/remove") |  erases a file   
(function)   
---|---
