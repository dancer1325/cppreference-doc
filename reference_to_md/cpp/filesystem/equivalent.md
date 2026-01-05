
  


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
**filesystem::equivalent**  
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
bool equivalent( const [std::filesystem::path](path.html)& p1,  
const [std::filesystem::path](path.html)& p2 ); |  (1)  |  (since C++17)  
bool equivalent( const [std::filesystem::path](path.html)& p1,  
const [std::filesystem::path](path.html)& p2,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
| |   
  
Checks whether the paths p1 and p2 resolve to the same file system entity. 

If either p1 or p2 does not exist, an error is reported. 

The non-throwing overload returns false on errors. 

## Contents

  * [1 Parameters](equivalent.html#Parameters)
  * [2 Return value](equivalent.html#Return_value)
  * [3 Exceptions](equivalent.html#Exceptions)
  * [4 Notes](equivalent.html#Notes)
  * [5 Example](equivalent.html#Example)
  * [6 Defect reports](equivalent.html#Defect_reports)
  * [7 See also](equivalent.html#See_also)

  
---  
  
### Parameters

p1, p2  |  \-  |  paths to check for equivalence   
---|---|---  
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

true if the p1 and p2 refer to the same file or directory and their file status is the same. false otherwise. 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p1 as the first path argument, p2 as the second path argument, and the OS error code as the error code argument.

2) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

Two paths are considered to resolve to the same file system entity if the two candidate entities the paths resolve to are located on the same device at the same location. For POSIX, this means that the `st_dev` and `st_ino` members of their POSIX [`stat` structure](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_stat.h.html), obtained as if by POSIX [`stat()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/stat.html), are equal. 

In particular, all hard links for the same file or directory are equivalent, and a symlink and its target on the same file system are equivalent. 

### Example

Run this code
    
    
    #include <cstdint>
    #include <filesystem>
    #include <iostream>
    namespace fs = std::filesystem;
     
    int main()
    {
        // hard link equivalency
        fs::path p1 = ".";
        fs::path p2 = fs::current_path();
        if (fs::equivalent(p1, p2))
            [std::cout](../io/cout.html) << p1 << " is equivalent to " << p2 << '\n';
     
        // symlink equivalency
        for (const fs::path lib : {"/lib/libc.so.6", "/lib/x86_64-linux-gnu/libc.so.6"})
        {
            try
            {
                p2 = lib.parent_path() / fs::read_symlink(lib);
            }
            catch ([std::filesystem::filesystem_error](filesystem_error.html) const& ex)
            {
                [std::cout](../io/cout.html) << ex.what() << '\n';
                continue;
            }
     
            if (fs::equivalent(lib, p2))
                [std::cout](../io/cout.html) << lib << " is equivalent to " << p2 << '\n';
        }
    }

Possible output: 
    
    
    "." is equivalent to "/var/tmp/test"
    filesystem error: read_symlink: No such file or directory [/lib/libc.so.6]
    "/lib/x86_64-linux-gnu/libc.so.6" is equivalent to "/lib/x86_64-linux-gnu/libc-2.23.so"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2937](https://cplusplus.github.io/LWG/issue2937) | C++17  | error condition specified incorrectly  | corrected   
  
### See also

[ compare](path/compare.html "cpp/filesystem/path/compare") |  compares the lexical representations of two paths lexicographically   
(public member function of `std::filesystem::path`)   
---|---  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](path/operator_cmp.html "cpp/filesystem/path/operator cmp")(C++17)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++20) |  lexicographically compares two paths   
(function)   
[ statussymlink_status](status.html "cpp/filesystem/status")(C++17)(C++17) |  determines file attributes  
determines file attributes, checking the symlink target   
(function) 
