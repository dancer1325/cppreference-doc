
  


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
**filesystem::create_directory  
filesystem::create_directories**  
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
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
bool create_directory( const [std::filesystem::path](path.html)& p ); |  (1)  |  (since C++17)  
bool create_directory( const [std::filesystem::path](path.html)& p, [std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
bool create_directory( const [std::filesystem::path](path.html)& p,  
const [std::filesystem::path](path.html)& existing_p ); |  (3)  |  (since C++17)  
bool create_directory( const [std::filesystem::path](path.html)& p,  
const [std::filesystem::path](path.html)& existing_p,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (4)  |  (since C++17)  
bool create_directories( const [std::filesystem::path](path.html)& p ); |  (5)  |  (since C++17)  
bool create_directories( const [std::filesystem::path](path.html)& p, [std::error_code](../error/error_code.html)& ec ); |  (6)  |  (since C++17)  
| |   
  
1,2) Creates the directory p as if by POSIX [`mkdir()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/mkdir.html) with a second argument of static_cast<int>([std::filesystem::perms::all](perms.html)) (the parent directory must already exist). If the function fails because p resolves to an existing directory, no error is reported. Otherwise on failure an error is reported.

3,4) Same as (1,2), except that the attributes of the new directory are copied from existing_p (which must be a directory that exists). It is OS-dependent which attributes are copied: on POSIX systems, the attributes are copied as if by 
    
    
    stat(existing_p.c_str(), &attributes_stat)
    mkdir(p.c_str(), attributes_stat.st_mode)

On Windows OS, no attributes of existing_p are copied.

5,6) Executes (1,2) for every element of p that does not already exist. If p already exists, the function does nothing (this condition is not treated as an error).

## Contents

  * [1 Parameters](create_directory.html#Parameters)
  * [2 Return value](create_directory.html#Return_value)
  * [3 Exceptions](create_directory.html#Exceptions)
  * [4 Notes](create_directory.html#Notes)
  * [5 Example](create_directory.html#Example)
  * [6 Defect reports](create_directory.html#Defect_reports)
  * [7 See also](create_directory.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  the path to the new directory to create   
---|---|---  
existing_p  |  \-  |  the path to a directory to copy the attributes from   
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

true if a directory was newly created for the directory p resolves to, false otherwise. 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1,5) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2,6) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

3) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument, existing_p as the second path argument, and the OS error code as the error code argument.

4) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

The attribute-preserving overload (3,4) is implicitly invoked by [`copy()`](copy.html "cpp/filesystem/copy") when recursively copying directories. Its equivalent in boost.filesystem is [`copy_directory`](https://www.boost.org/doc/libs/1_57_0/libs/filesystem/doc/reference.html#copy_directory) (with argument order reversed). 

### Example

Run this code
    
    
    #include <cassert>
    #include <cstdlib>
    #include <filesystem>
     
    int main()
    {
        [std::filesystem::current_path](current_path.html)([std::filesystem::temp_directory_path](temp_directory_path.html)());
     
        // Basic usage
        std::filesystem::create_directories("sandbox/1/2/a");
        std::filesystem::create_directory("sandbox/1/2/b");
     
        // Directory already exists (false returned, no error)
        [assert](../error/assert.html)(!std::filesystem::create_directory("sandbox/1/2/b"));
     
        // Permissions copying usage
        [std::filesystem::permissions](permissions.html)(
            "sandbox/1/2/b",
            [std::filesystem::perms::others_all](perms.html),
            std::filesystem::perm_options::remove
        );
        std::filesystem::create_directory("sandbox/1/2/c", "sandbox/1/2/b");
     
        [std::system](../utility/program/system.html)("ls -l sandbox/1/2");
        [std::system](../utility/program/system.html)("tree sandbox");
        [std::filesystem::remove_all](remove.html)("sandbox");
    }

Possible output: 
    
    
    drwxr-xr-x 2 user group 4096 Apr 15 09:33 a
    drwxr-x--- 2 user group 4096 Apr 15 09:33 b
    drwxr-x--- 2 user group 4096 Apr 15 09:33 c
    sandbox
    └── 1
        └── 2
            ├── a
            ├── b
            └── c

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2935](https://cplusplus.github.io/LWG/issue2935) | C++17  | error if target already exists but is not a directory  | not error   
[LWG 3014](https://cplusplus.github.io/LWG/issue3014) | C++17  | `error_code` overload of `create_directories` marked noexcept but can allocate memory  | noexcept removed   
[P1164R1](https://wg21.link/P1164R1) | C++17  | creation failure caused by an existing non-directory file is not an error  | made error   
  
### See also

[ create_symlinkcreate_directory_symlink](create_symlink.html "cpp/filesystem/create symlink")(C++17)(C++17) |  creates a symbolic link   
(function)   
---|---  
[ copy](copy.html "cpp/filesystem/copy")(C++17) |  copies files or directories   
(function)   
[ perms](perms.html "cpp/filesystem/perms")(C++17) |  identifies file system permissions   
(enum) 
