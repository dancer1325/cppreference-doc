
  


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
**filesystem::last_write_time**  
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
[std::filesystem::file_time_type](file_time_type.html) last_write_time( const [std::filesystem::path](path.html)& p ); |  (1)  |  (since C++17)  
[std::filesystem::file_time_type](file_time_type.html) last_write_time( const [std::filesystem::path](path.html)& p,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
void last_write_time( const [std::filesystem::path](path.html)& p,  
[std::filesystem::file_time_type](file_time_type.html) new_time ); |  (3)  |  (since C++17)  
void last_write_time( const [std::filesystem::path](path.html)& p,  
[std::filesystem::file_time_type](file_time_type.html) new_time,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (4)  |  (since C++17)  
| |   
  
1,2) Returns the time of the last modification of p, determined as if by accessing the member `st_mtime` of the POSIX [`stat`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/stat.html) (symlinks are followed). The non-throwing overload returns file_time_type::min() on errors.

3,4) Changes the time of the last modification of p, as if by POSIX [`futimens`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/futimens.html) (symlinks are followed).

## Contents

  * [1 Parameters](last_write_time.html#Parameters)
  * [2 Return value](last_write_time.html#Return_value)
  * [3 Exceptions](last_write_time.html#Exceptions)
  * [4 Notes](last_write_time.html#Notes)
  * [5 Example](last_write_time.html#Example)
  * [6 See also](last_write_time.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  path to examine or modify   
---|---|---  
new_time  |  \-  |  new modification time   
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

1,2) The time of the last modification of p.

3,4) (none)

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1,3) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2,4) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

It is not guaranteed that immediately after setting the write time, the value returned by (1,2) is the same as what was passed as the argument to (3,4) because the file system's time may be more granular than [filesystem::file_time_type](file_time_type.html "cpp/filesystem/file time type"). 

### Example

Run this code
    
    
    #include <chrono>
    #include <filesystem>
    #include <format>
    #include <fstream>
    #include <iostream>
     
    using namespace std::chrono_literals;
     
    int main()
    {
        auto p = [std::filesystem::temp_directory_path](temp_directory_path.html)() / "example.bin";
        [std::ofstream](../io/basic_ofstream.html){p.c_str()}.put('a'); // create file
     
        [std::filesystem::file_time_type](file_time_type.html) ftime = std::filesystem::last_write_time(p);
        [std::cout](../io/cout.html) << [std::format](../utility/format/format.html)("File write time is {}\n", ftime);
     
        // move file write time 1 hour to the future
        std::filesystem::last_write_time(p, ftime + 1h);
     
        // read back from the filesystem
        ftime = std::filesystem::last_write_time(p);
        [std::cout](../io/cout.html) << [std::format](../utility/format/format.html)("File write time is {}\n", ftime);
     
        [std::filesystem::remove](remove.html)(p);
    }

Possible output: 
    
    
    File write time is 2023-09-04 19:33:24.702639224
    File write time is 2023-09-04 20:33:24.702639224

### See also

[ file_time_type](file_time_type.html "cpp/filesystem/file time type")(C++17) |  represents file time values   
(typedef)   
---|---  
[ last_write_time](directory_entry/last_write_time.html "cpp/filesystem/directory entry/last write time") |  gets the time of the last data modification of the file to which the directory entry refers   
(public member function of `std::filesystem::directory_entry`) 
