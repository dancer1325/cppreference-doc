
  


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
**filesystem::file_time_type**  
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
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
using file_time_type = [std::chrono::time_point](../chrono/time_point.html)</*trivial-clock*/>; |  | (since C++17)   
(until C++20)  
using file_time_type = [std::chrono::time_point](../chrono/time_point.html)<[std::chrono::file_clock](../chrono/file_clock.html)>; |  |  (since C++20)  
| |   
  
Represents file time. 

/*trivial-clock*/ is an implementation-defined type that satisfies [TrivialClock](../named_req/TrivialClock.html "cpp/named req/TrivialClock") and is sufficient to represent the resolution and range of the file time values offered by the filesystem.  | (until C++20)  
---|---  
  
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
     
        std::filesystem::file_time_type ftime = [std::filesystem::last_write_time](last_write_time.html)(p);
        [std::cout](../io/cout.html) << [std::format](../utility/format/format.html)("File write time is {}\n", ftime);
     
        // move file write time 1 hour to the future
        [std::filesystem::last_write_time](last_write_time.html)(p, ftime + 1h);
     
        // read back from the filesystem
        ftime = [std::filesystem::last_write_time](last_write_time.html)(p);
        [std::cout](../io/cout.html) << [std::format](../utility/format/format.html)("File write time is {}\n", ftime);
     
        [std::filesystem::remove](remove.html)(p);
    }

Possible output: 
    
    
    File write time is 2023-09-04 19:33:24.702639224
    File write time is 2023-09-04 20:33:24.702639224

### See also

[ last_write_time](last_write_time.html "cpp/filesystem/last write time")(C++17) |  gets or sets the time of the last data modification   
(function)   
---|---
