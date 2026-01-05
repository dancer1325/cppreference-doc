
  


[Filesystem library](../filesystem.html "cpp/filesystem")

[Classes](../filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](path.html "cpp/filesystem/path")  
---  
[filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error")  
**filesystem::directory_entry**  
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
  


**`std::filesystem::directory_entry`**

Member functions  
---  
[directory_entry::directory_entry](directory_entry/directory_entry.html "cpp/filesystem/directory entry/directory entry")  
Modifiers  
[directory_entry::operator=](directory_entry/operator=.html "cpp/filesystem/directory entry/operator=")  
[directory_entry::assign](directory_entry/assign.html "cpp/filesystem/directory entry/assign")  
[directory_entry::replace_filename](directory_entry/replace_filename.html "cpp/filesystem/directory entry/replace filename")  
[directory_entry::refresh](directory_entry/refresh.html "cpp/filesystem/directory entry/refresh")  
Observers  
[directory_entry::pathdirectory_entry::operator const path&](directory_entry/path.html "cpp/filesystem/directory entry/path")  
[directory_entry::exists](directory_entry/exists.html "cpp/filesystem/directory entry/exists")  
[directory_entry::is_block_file](directory_entry/is_block_file.html "cpp/filesystem/directory entry/is block file")  
[directory_entry::is_character_file](directory_entry/is_character_file.html "cpp/filesystem/directory entry/is character file")  
[directory_entry::is_directory](directory_entry/is_directory.html "cpp/filesystem/directory entry/is directory")  
[directory_entry::is_fifo](directory_entry/is_fifo.html "cpp/filesystem/directory entry/is fifo")  
[directory_entry::is_other](directory_entry/is_other.html "cpp/filesystem/directory entry/is other")  
[directory_entry::is_regular_file](directory_entry/is_regular_file.html "cpp/filesystem/directory entry/is regular file")  
[directory_entry::is_socket](directory_entry/is_socket.html "cpp/filesystem/directory entry/is socket")  
[directory_entry::is_symlink](directory_entry/is_symlink.html "cpp/filesystem/directory entry/is symlink")  
[directory_entry::file_size](directory_entry/file_size.html "cpp/filesystem/directory entry/file size")  
[directory_entry::hard_link_count](directory_entry/hard_link_count.html "cpp/filesystem/directory entry/hard link count")  
[directory_entry::last_write_time](directory_entry/last_write_time.html "cpp/filesystem/directory entry/last write time")  
[directory_entry::statusdirectory_entry::symlink_status](directory_entry/status.html "cpp/filesystem/directory entry/status")  
[directory_entry::operator==directory_entry::operator!=directory_entry::operator<directory_entry::operator>directory_entry::operator<=directory_entry::operator>=directory_entry::operator<=>](directory_entry/operator_cmp.html "cpp/filesystem/directory entry/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
Non-member functions  
[operator<<](directory_entry/operator_ltlt.html "cpp/filesystem/directory entry/operator ltlt")  
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
class directory_entry; |  |  (since C++17)  
| |   
  
Represents a directory entry. The object stores a `path` as a member and may also store additional file attributes (hard link count, status, symlink status, file size, and last write time) during directory iteration. 

## Contents

  * [1 Member functions](directory_entry.html#Member_functions)
    * [1.1 Modifiers](directory_entry.html#Modifiers)
    * [1.2 Observers](directory_entry.html#Observers)
  * [2 Non-member functions](directory_entry.html#Non-member_functions)
  * [3 Defect reports](directory_entry.html#Defect_reports)

  
---  
  
### Member functions

[ (constructor)](directory_entry/directory_entry.html "cpp/filesystem/directory entry/directory entry") |  constructs a directory entry   
(public member function)   
---|---  
(destructor) |  default destructor   
(public member function)   
  
#####  Modifiers   
  
[ operator=](directory_entry/operator=.html "cpp/filesystem/directory entry/operator=") |  assigns contents   
(public member function)   
[ assign](directory_entry/assign.html "cpp/filesystem/directory entry/assign") |  assigns contents   
(public member function)   
[ replace_filename](directory_entry/replace_filename.html "cpp/filesystem/directory entry/replace filename") |  sets the filename   
(public member function)   
[ refresh](directory_entry/refresh.html "cpp/filesystem/directory entry/refresh") |  updates the cached file attributes   
(public member function)   
  
#####  Observers   
  
[ pathoperator const path&](directory_entry/path.html "cpp/filesystem/directory entry/path") |  returns the path the entry refers to   
(public member function)   
[ exists](directory_entry/exists.html "cpp/filesystem/directory entry/exists") |  checks whether directory entry refers to existing file system object   
(public member function)   
[ is_block_file](directory_entry/is_block_file.html "cpp/filesystem/directory entry/is block file") |  checks whether the directory entry refers to block device   
(public member function)   
[ is_character_file](directory_entry/is_character_file.html "cpp/filesystem/directory entry/is character file") |  checks whether the directory entry refers to a character device   
(public member function)   
[ is_directory](directory_entry/is_directory.html "cpp/filesystem/directory entry/is directory") |  checks whether the directory entry refers to a directory   
(public member function)   
[ is_fifo](directory_entry/is_fifo.html "cpp/filesystem/directory entry/is fifo") |  checks whether the directory entry refers to a named pipe   
(public member function)   
[ is_other](directory_entry/is_other.html "cpp/filesystem/directory entry/is other") |  checks whether the directory entry refers to an _other_ file   
(public member function)   
[ is_regular_file](directory_entry/is_regular_file.html "cpp/filesystem/directory entry/is regular file") |  checks whether the directory entry refers to a regular file   
(public member function)   
[ is_socket](directory_entry/is_socket.html "cpp/filesystem/directory entry/is socket") |  checks whether the directory entry refers to a named IPC socket   
(public member function)   
[ is_symlink](directory_entry/is_symlink.html "cpp/filesystem/directory entry/is symlink") |  checks whether the directory entry refers to a symbolic link   
(public member function)   
[ file_size](directory_entry/file_size.html "cpp/filesystem/directory entry/file size") |  returns the size of the file to which the directory entry refers   
(public member function)   
[ hard_link_count](directory_entry/hard_link_count.html "cpp/filesystem/directory entry/hard link count") |  returns the number of hard links referring to the file to which the directory entry refers   
(public member function)   
[ last_write_time](directory_entry/last_write_time.html "cpp/filesystem/directory entry/last write time") |  gets the time of the last data modification of the file to which the directory entry refers   
(public member function)   
[ statussymlink_status](directory_entry/status.html "cpp/filesystem/directory entry/status") |  status of the file designated by this directory entry;  
status of the file/symlink designated by this directory entry   
(public member function)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](directory_entry/operator_cmp.html "cpp/filesystem/directory entry/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  compares two directory entries   
(public member function)   
  
### Non-member functions

[ operator<<](directory_entry/operator_ltlt.html "cpp/filesystem/directory entry/operator ltlt") |  performs stream output on a directory entry   
(function)   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3171](https://cplusplus.github.io/LWG/issue3171) | C++17  | `directory_entry` couldn't be inserted by `operator<<` because of LWG2989  | output enabled again 
