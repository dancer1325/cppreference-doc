
  


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
**filesystem::copy**  
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
void copy( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to ); |  (1)  |  (since C++17)  
void copy( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to,  
[std::error_code](../error/error_code.html)& ec ); |  (2)  |  (since C++17)  
void copy( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to,  
[std::filesystem::copy_options](copy_options.html) options ); |  (3)  |  (since C++17)  
void copy( const [std::filesystem::path](path.html)& from,  
const [std::filesystem::path](path.html)& to,  
[std::filesystem::copy_options](copy_options.html) options,  
[std::error_code](../error/error_code.html)& ec ); |  (4)  |  (since C++17)  
| |   
  
Copies files and directories, with a variety of options. 

1,2) The default, equivalent to (3,4) with `copy_options::none` used as options.

3,4) Copies the file or directory from to file or directory to, using the copy options indicated by options. The behavior is undefined if there is more than one option in any of the [copy_options](copy_options.html "cpp/filesystem/copy options") option group present in options (even in the `copy_file` group).

The behavior is as follows: 

  * First, before doing anything else, obtains type and permissions of from by no more than a single call to 



    

  * [std::filesystem::symlink_status](status.html "cpp/filesystem/status"), if `copy_options::skip_symlinks`, `copy_options::copy_symlinks`, or `copy_options::create_symlinks` is present in options; 
  * [std::filesystem::status](status.html "cpp/filesystem/status") otherwise. 



  * If necessary, obtains the status of to, by no more than a single call to 



    

  * [std::filesystem::symlink_status](status.html "cpp/filesystem/status"), if `copy_options::skip_symlinks` or `copy_options::create_symlinks` is present in options; 
  * [std::filesystem::status](status.html "cpp/filesystem/status") otherwise (including the case where `copy_options::copy_symlinks` is present in options). 



  * If either from or to has an implementation-defined [file type](file_type.html "cpp/filesystem/file type"), the effects of this function are implementation-defined. 
  * If from does not exist, reports an error. 
  * If from and to are the same file as determined by [std::filesystem::equivalent](equivalent.html "cpp/filesystem/equivalent"), reports an error. 
  * If either from or to is not a regular file, a directory, or a symlink, as determined by [std::filesystem::is_other](is_other.html "cpp/filesystem/is other"), reports an error. 
  * If from is a directory, but to is a regular file, reports an error. 
  * If from is a symbolic link, then 



    

  * If `copy_options::skip_symlink` is present in options, does nothing. 
  * Otherwise, if to does not exist and `copy_options::copy_symlinks` is present in options, then behaves as if copy_symlink(from, to). 
  * Otherwise, reports an error. 



  * Otherwise, if from is a regular file, then 



    

  * If `copy_options::directories_only` is present in options, does nothing. 
  * Otherwise, if `copy_options::create_symlinks` is present in options, creates a symlink to to. Note: from must be an absolute path unless to is in the current directory. 
  * Otherwise, if `copy_options::create_hard_links` is present in options, creates a hard link to to. 
  * Otherwise, if to is a directory, then behaves as if copy_file(from, to/from.filename(), options) (creates a copy of from as a file in the directory to). 
  * Otherwise, behaves as if copy_file(from, to, options) (copies the file). 



  * Otherwise, if from is a directory and `copy_options::create_symlinks` is set in options, reports an error with an error code equal to [std::make_error_code](../error/errc/make_error_code.html)([std::errc::is_a_directory](../error/errc.html)). 
  * Otherwise, if from is a directory and either options has `copy_options::recursive` or is `copy_options::none`, 



    

  * If to does not exist, first executes create_directory(to, from) (creates the new directory with a copy of the old directory's attributes). 
  * Then, whether to already existed or was just created, iterates over the files contained in from as if by for (const [std::filesystem::directory_entry](directory_entry.html)& x : [std::filesystem::directory_iterator](directory_iterator.html)(from)) and for each directory entry, recursively calls copy(x.path(), to/x.path().filename(), options | in-recursive-copy), where _in-recursive-copy_ is a special bit that has no other effect when set in options. (The sole purpose of setting this bit is to prevent recursive copying subdirectories if options is `copy_options::none`.) 



  * Otherwise does nothing. 



## Contents

  * [1 Parameters](copy.html#Parameters)
  * [2 Return value](copy.html#Return_value)
  * [3 Exceptions](copy.html#Exceptions)
  * [4 Notes](copy.html#Notes)
  * [5 Example](copy.html#Example)
  * [6 Defect reports](copy.html#Defect_reports)
  * [7 See also](copy.html#See_also)

  
---  
  
### Parameters

from  |  \-  |  path to the source file, directory, or symlink   
---|---|---  
to  |  \-  |  path to the target file, directory, or symlink   
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

(none) 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1,3) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with from as the first path argument, to as the second path argument, and the OS error code as the error code argument.

2,4) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

The default behavior when copying directories is the non-recursive copy: the files are copied, but not the subdirectories: 
    
    
    // Given
    // /dir1 contains /dir1/file1, /dir1/file2, /dir1/dir2
    // and /dir1/dir2 contains /dir1/dir2/file3
    // After
    std::filesystem::copy("/dir1", "/dir3");
    // /dir3 is created (with the attributes of /dir1)
    // /dir1/file1 is copied to /dir3/file1
    // /dir1/file2 is copied to /dir3/file2

While with `copy_options::recursive`, the subdirectories are also copied, with their content, recursively. 
    
    
    // ...but after
    std::filesystem::copy("/dir1", "/dir3", [std::filesystem::copy_options::recursive](copy_options.html));
    // /dir3 is created (with the attributes of /dir1)
    // /dir1/file1 is copied to /dir3/file1
    // /dir1/file2 is copied to /dir3/file2
    // /dir3/dir2 is created (with the attributes of /dir1/dir2)
    // /dir1/dir2/file3 is copied to /dir3/dir2/file3

### Example

Run this code
    
    
    #include <cstdlib>
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    namespace fs = std::filesystem;
     
    int main()
    {
        fs::create_directories("sandbox/dir/subdir");
        [std::ofstream](../io/basic_ofstream.html)("sandbox/file1.txt").put('a');
        fs::copy("sandbox/file1.txt", "sandbox/file2.txt"); // copy file
        fs::copy("sandbox/dir", "sandbox/dir2"); // copy directory (non-recursive)
        const auto copyOptions = fs::copy_options::update_existing
                               | fs::copy_options::recursive
                               | fs::copy_options::directories_only
                               ;
        fs::copy("sandbox", "sandbox_copy", copyOptions); 
        static_cast<void>([std::system](../utility/program/system.html)("tree"));
        fs::remove_all("sandbox");
        fs::remove_all("sandbox_copy");
    }

Possible output: 
    
    
    .
    ├── sandbox
    │   ├── dir
    │   │   └── subdir
    │   ├── dir2
    │   ├── file1.txt
    │   └── file2.txt
    └── sandbox_copy
        ├── dir
        │   └── subdir
        └── dir2
     
    8 directories, 2 files

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3013](https://cplusplus.github.io/LWG/issue3013) | C++17  | `error_code` overload marked noexcept but can allocate memory  | noexcept removed   
[LWG 2682](https://cplusplus.github.io/LWG/issue2682) | C++17  | attempting to create a symlink for a directory succeeds but does nothing  | reports an error   
  
### See also

[ copy_options](copy_options.html "cpp/filesystem/copy options")(C++17) |  specifies semantics of copy operations   
(enum)   
---|---  
[ copy_symlink](copy_symlink.html "cpp/filesystem/copy symlink")(C++17) |  copies a symbolic link   
(function)   
[ copy_file](copy_file.html "cpp/filesystem/copy file")(C++17) |  copies file contents   
(function) 
