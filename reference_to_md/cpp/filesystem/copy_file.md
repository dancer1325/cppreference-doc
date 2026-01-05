
  


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
**filesystem::copy_file**  
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
bool copy_file( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to ); |  (1)  |  (since C++17)  
bool copy_file( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to,  
[std::error_code](../error/error_code.html)& ec ); |  (2)  |  (since C++17)  
bool copy_file( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to,  
[std::filesystem::copy_options](copy_options.html) options ); |  (3)  |  (since C++17)  
bool copy_file( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to,  
[std::filesystem::copy_options](copy_options.html) options,  
[std::error_code](../error/error_code.html)& ec ); |  (4)  |  (since C++17)  
| |   
  
1,2) The default, equivalent to (3,4) with `copy_options::none` used as options.

3,4) Copies a single file from from to to, using the copy options indicated by options. The behavior is undefined if there is more than one option in any of the [copy_options](copy_options.html "cpp/filesystem/copy options") option group present in options (even in the groups not relevant to **filesystem::copy_file**). 

  * If [!filesystem::is_regular_file(from)](is_regular_file.html "cpp/filesystem/is regular file") (either because the source file doesn't exist or because it is not a regular file), report an error. 
  * Otherwise, if the destination file does not exist, 



    

  * copies the contents and the attributes of the file to which from resolves to the file to which to resolves (symlinks are followed). 



  * Otherwise, if the destination file already exists, 



    

  * report an error if any of the following is true: 



    

  * to and from are the same as determined by [filesystem::equivalent(from, to)](equivalent.html "cpp/filesystem/equivalent"); 
  * to is not a regular file as determined by [!filesystem::is_regular_file(to)](is_regular_file.html "cpp/filesystem/is regular file"); 
  * none of the **filesystem::copy_file** control options are set in options. 



  * Otherwise, if `copy_options::skip_existing` is set in options, do nothing. 
  * Otherwise, if `copy_options::overwrite_existing` is set in options, copy the contents and the attributes of the file to which from resolves to the file to which to resolves. 
  * Otherwise, if `copy_options::update_existing` is set in options, only copy the file if from is newer than to, as defined by [filesystem::last_write_time()](last_write_time.html "cpp/filesystem/last write time").



The non-throwing overloads return false if an error occurs. 

## Contents

  * [1 Parameters](copy_file.html#Parameters)
  * [2 Return value](copy_file.html#Return_value)
  * [3 Exceptions](copy_file.html#Exceptions)
  * [4 Notes](copy_file.html#Notes)
  * [5 Example](copy_file.html#Example)
  * [6 Defect reports](copy_file.html#Defect_reports)
  * [7 See also](copy_file.html#See_also)

  
---  
  
### Parameters

from  |  \-  |  path to the source file   
---|---|---  
to  |  \-  |  path to the target file   
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

true if the file was copied, false otherwise. 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1,3) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with from as the first path argument, to as the second path argument, and the OS error code as the error code argument.

2,4) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

The functions involve at most one direct or indirect call to [filesystem::status(to)](status.html "cpp/filesystem/status") (used both to determine if the file exists, and, for `filesystem::copy_options::update_existing` option, its last write time). 

Error is reported when **filesystem::copy_file** is used to copy a directory: use [filesystem::copy](copy.html "cpp/filesystem/copy") for that. 

**filesystem::copy_file** follows symlinks: use [filesystem::copy_symlink](copy_symlink.html "cpp/filesystem/copy symlink") or [filesystem::copy](copy.html "cpp/filesystem/copy") with `filesystem::copy_options::copy_symlinks` for that. 

### Example

Run this code
    
    
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    namespace fs = std::filesystem;
     
    int main()
    {
        fs::create_directory("sandbox");
        [std::ofstream](../io/basic_ofstream.html)("sandbox/file1.txt").put('a');
     
        fs::copy_file("sandbox/file1.txt", "sandbox/file2.txt");
     
        // now there are two files in sandbox:
        [std::cout](../io/cout.html) << "file1.txt holds: "
                  << [std::ifstream](../io/basic_ifstream.html)("sandbox/file1.txt").rdbuf() << '\n';
        [std::cout](../io/cout.html) << "file2.txt holds: "
                  << [std::ifstream](../io/basic_ifstream.html)("sandbox/file2.txt").rdbuf() << '\n';
     
        // fail to copy directory
        fs::create_directory("sandbox/abc");
        try
        {
            fs::copy_file("sandbox/abc", "sandbox/def");
        }
        catch (fs::filesystem_error& e)
        {
            [std::cout](../io/cout.html) << "Could not copy sandbox/abc: " << e.what() << '\n';
        }
        fs::remove_all("sandbox");
    }

Possible output: 
    
    
    file1.txt holds: a
    file2.txt holds: a
    Could not copy sandbox/abc: copy_file: Is a directory: "sandbox/abc", "sandbox/def"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3014](https://cplusplus.github.io/LWG/issue3014) | C++17  | `error_code` overload marked noexcept but can allocate memory  | noexcept removed   
  
### See also

[ copy_options](copy_options.html "cpp/filesystem/copy options")(C++17) |  specifies semantics of copy operations   
(enum)   
---|---  
[ copy_symlink](copy_symlink.html "cpp/filesystem/copy symlink")(C++17) |  copies a symbolic link   
(function)   
[ copy](copy.html "cpp/filesystem/copy")(C++17) |  copies files or directories   
(function) 
