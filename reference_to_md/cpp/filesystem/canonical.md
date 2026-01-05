
  


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
**filesystem::canonical filesystem::weakly_canonical**  
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
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
path canonical( const [std::filesystem::path](path.html)& p ); |  (1)  |  (since C++17)  
path canonical( const [std::filesystem::path](path.html)& p,  
[std::error_code](../error/error_code.html)& ec ); |  (2)  |  (since C++17)  
path weakly_canonical( const [std::filesystem::path](path.html)& p ); |  (3)  |  (since C++17)  
path weakly_canonical( const [std::filesystem::path](path.html)& p,  
[std::error_code](../error/error_code.html)& ec ); |  (4)  |  (since C++17)  
| |   
  
1,2) Converts path p to a canonical absolute path, i.e. an absolute path that has no dot, dot-dot elements or symbolic links in its generic format representation. If p is not an absolute path, the function behaves as if it is first made absolute by [std::filesystem::absolute](absolute.html)(p). The path p must exist.

3,4) Returns a path composed by operator/= from the result of calling `canonical()` with a path argument composed of the leading elements of p that exist (as determined by status(p) or status(p, ec)), if any, followed by the elements of p that do not exist. The resulting path is in [normal form](path.html "cpp/filesystem/path").

## Contents

  * [1 Parameters](canonical.html#Parameters)
  * [2 Return value](canonical.html#Return_value)
  * [3 Exceptions](canonical.html#Exceptions)
  * [4 Notes](canonical.html#Notes)
  * [5 Example](canonical.html#Example)
  * [6 Defect reports](canonical.html#Defect_reports)
  * [7 See also](canonical.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  a path which may be absolute or relative; for `canonical` it must be an existing path   
---|---|---  
ec  |  \-  |  error code to store error status to   
  
### Return value

1,2) An absolute path that resolves to the same file as [std::filesystem::absolute](absolute.html)(p).

3,4) A normal path of the form canonical(x)/y, where x is a path composed of the longest leading sequence of elements in p that exist, and y is a path composed of the remaining trailing non-existent elements of p.

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1,3) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2,4) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

The function `canonical()` is modeled after the POSIX [`realpath`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/realpath.html). 

The function `weakly_canonical()` was introduced to simplify operational semantics of [`relative()`](relative.html "cpp/filesystem/relative"). 

### Example

Run this code
    
    
    #include <filesystem>
    #include <iostream>
     
    int main()
    {
        /* set up sandbox directories:
         a
         └── b
             ├── c1
             │   └── d <== current path
             └── c2
                 └── e
        */
        auto old = [std::filesystem::current_path](current_path.html)();
        auto tmp = [std::filesystem::temp_directory_path](temp_directory_path.html)();
        [std::filesystem::current_path](current_path.html)(tmp);
        auto d1 = tmp / "a/b/c1/d";
        auto d2 = tmp / "a/b/c2/e";
        [std::filesystem::create_directories](create_directory.html)(d1);
        [std::filesystem::create_directories](create_directory.html)(d2);
        [std::filesystem::current_path](current_path.html)(d1);
     
        auto p1 = [std::filesystem::path](path.html)("../../c2/./e");
        auto p2 = [std::filesystem::path](path.html)("../no-such-file");
        [std::cout](../io/cout.html) << "Current path is "
                  << [std::filesystem::current_path](current_path.html)() << '\n'
                  << "Canonical path for " << p1 << " is "
                  << std::filesystem::canonical(p1) << '\n'
                  << "Weakly canonical path for " << p2 << " is "
                  << std::filesystem::weakly_canonical(p2) << '\n';
        try
        {
            [[maybe_unused]] auto x_x = std::filesystem::canonical(p2);
            // NOT REACHED
        }
        catch (const [std::exception](../error/exception.html)& ex)
        {
            [std::cout](../io/cout.html) << "Canonical path for " << p2 << " threw exception:\n"
                      << ex.what() << '\n';
        }
     
        // cleanup
        [std::filesystem::current_path](current_path.html)(old);
        const auto count = [std::filesystem::remove_all](remove.html)(tmp / "a");
        [std::cout](../io/cout.html) << "Deleted " << count << " files or directories.\n";
    }

Possible output: 
    
    
    Current path is "/tmp/a/b/c1/d"
    Canonical path for "../../c2/./e" is "/tmp/a/b/c2/e"
    Weakly canonical path for "../no-such-file" is "/tmp/a/b/c1/no-such-file"
    Canonical path for "../no-such-file" threw exception:
    filesystem error: in canonical: No such file or directory [../no-such-file] [/tmp/a/b/c1/d]
    Deleted 6 files or directories.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2956](https://cplusplus.github.io/LWG/issue2956) | C++17  | `canonical` has a spurious `base` parameter  | removed   
  
### See also

[ path](path.html "cpp/filesystem/path")(C++17) |  represents a path   
(class)   
---|---  
[ absolute](absolute.html "cpp/filesystem/absolute")(C++17) |  composes an absolute path   
(function)   
[ relativeproximate](relative.html "cpp/filesystem/relative")(C++17) |  composes a relative path   
(function) 
