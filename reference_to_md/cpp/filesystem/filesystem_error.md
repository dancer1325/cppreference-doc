
  


[Filesystem library](../filesystem.html "cpp/filesystem")

[Classes](../filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](path.html "cpp/filesystem/path")  
---  
**filesystem::filesystem_error**  
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
  


**`filesystem_error`**

Member functions  
---  
[filesystem_error::filesystem_error](filesystem_error/filesystem_error.html "cpp/filesystem/filesystem error/filesystem error")  
[filesystem_error::operator=](filesystem_error/operator=.html "cpp/filesystem/filesystem error/operator=")  
[filesystem_error::path1filesystem_error::path2](filesystem_error/path.html "cpp/filesystem/filesystem error/path")  
[filesystem_error::what](filesystem_error/what.html "cpp/filesystem/filesystem error/what")  
Inherited from [std::system_error](../error/system_error.html "cpp/error/system error")  
[system_error::code](../error/system_error/code.html "cpp/error/system error/code")  
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
class filesystem_error; |  |  (since C++17)  
| |   
  
The class `std::filesystem::filesystem_error` defines an exception object that is thrown on failure by the throwing overloads of the functions in the filesystem library. 

![std-filesystem-filesystem error-inheritance.svg](https://upload.cppreference.com/mwiki/images/6/67/std-filesystem-filesystem_error-inheritance.svg)

Inheritance diagram

## Contents

  * [1 Member functions](filesystem_error.html#Member_functions)
  * [2 Inherited from std::system_error](filesystem_error.html#Inherited_from_std::system_error)
    * [2.1 Member functions](filesystem_error.html#Member_functions_2)
  * [3 Inherited from std::runtime_error](filesystem_error.html#Inherited_from_std::runtime_error)
  * [4 Inherited from std::exception](filesystem_error.html#Inherited_from_std::exception)
    * [4.1 Member functions](filesystem_error.html#Member_functions_3)
    * [4.2 Notes](filesystem_error.html#Notes)
    * [4.3 Example](filesystem_error.html#Example)

  
---  
  
### Member functions

[ (constructor)](filesystem_error/filesystem_error.html "cpp/filesystem/filesystem error/filesystem error") |  constructs the exception object   
(public member function)   
---|---  
[ operator=](filesystem_error/operator=.html "cpp/filesystem/filesystem error/operator=") |  replaces the exception object   
(public member function)   
[ path1path2](filesystem_error/path.html "cpp/filesystem/filesystem error/path") |  returns the paths that were involved in the operation that caused the error   
(public member function)   
[ what](filesystem_error/what.html "cpp/filesystem/filesystem error/what") |  returns the explanatory string   
(public member function)   
  
##  Inherited from [std::system_error](../error/system_error.html "cpp/error/system error")

###  Member functions

[ code](../error/system_error/code.html "cpp/error/system error/code") |  returns error code   
(public member function of `std::system_error`)   
---|---  
[ what](../error/system_error/what.html "cpp/error/system error/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::system_error`)   
  
##  Inherited from [std::runtime_error](../error/runtime_error.html "cpp/error/runtime error")

  


##  Inherited from [std::exception](../error/exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](../error/exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](../error/exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Notes

In order to ensure that copy functions of `filesystem_error` are noexcept, typical implementations store an object holding the return value of [what()](filesystem_error/what.html "cpp/filesystem/filesystem error/what") and two [std::filesystem::path](path.html "cpp/filesystem/path") objects referenced by [path1()](filesystem_error/path.html "cpp/filesystem/filesystem error/path") and [path2()](filesystem_error/path.html "cpp/filesystem/filesystem error/path") respectively in a separately-allocated reference-counted storage. 

Currently the [MS STL implementation](https://github.com/microsoft/STL/blob/master/stl/inc/filesystem#L1749) is non-conforming: objects mentioned above are stored directly in the `filesystem` object, which makes the copy functions not noexcept. 

### Example

Run this code
    
    
    #include <filesystem>
    #include <iostream>
    #include <system_error>
     
    int main()
    {
        const [std::filesystem::path](path.html) from{"/none1/a"}, to{"/none2/b"};
     
        try
        {
            [std::filesystem::copy_file](copy_file.html)(from, to); // throws: files do not exist
        }
        catch (std::filesystem::filesystem_error const& ex)
        {
            [std::cout](../io/cout.html) << "what():  " << ex.what() << '\n'
                      << "path1(): " << ex.path1() << '\n'
                      << "path2(): " << ex.path2() << '\n'
                      << "code().value():    " << ex.code().value() << '\n'
                      << "code().message():  " << ex.code().message() << '\n'
                      << "code().category(): " << ex.code().category().name() << '\n';
        }
     
        // All functions have non-throwing equivalents
        [std::error_code](../error/error_code.html) ec;
        [std::filesystem::copy_file](copy_file.html)(from, to, ec); // does not throw
        [std::cout](../io/cout.html) << "\nNon-throwing form sets error_code: " << ec.message() << '\n';
    }

Possible output: 
    
    
    what():  filesystem error: cannot copy file: No such file or directory [/none1/a] [/none2/b]
    path1(): "/none1/a"
    path2(): "/none2/b"
    code().value():    2
    code().message():  No such file or directory
    code().category(): generic
     
    Non-throwing form sets error_code: No such file or directory
