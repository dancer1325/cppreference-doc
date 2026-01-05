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
**filesystem::is_other**  
[filesystem::is_regular_file](is_regular_file.html "cpp/filesystem/is regular file")  
[filesystem::is_socket](is_socket.html "cpp/filesystem/is socket")  
[filesystem::is_symlink](is_symlink.html "cpp/filesystem/is symlink")  
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
bool is_other( [std::filesystem::file_status](file_status.html) s ) noexcept; |  (1)  |  (since C++17)  
bool is_other( const [std::filesystem::path](path.html)& p ); |  (2)  |  (since C++17)  
bool is_other( const [std::filesystem::path](path.html)& p, [std::error_code](../error/error_code.html)& ec ) noexcept; |  (3)  |  (since C++17)  
| |   
  
Checks if the given file status or path corresponds to a file of type _other_ type. That is, the file exists, but is neither regular file, nor directory nor a symlink. 

1) Equivalent to exists(s) && !is_regular_file(s) && !is_directory(s) && !is_symlink(s).

2,3) Equivalent to is_other(status(p)) or is_other(status(p, ec)), respectively.

## Contents

  * [1 Parameters](is_other.html#Parameters)
  * [2 Return value](is_other.html#Return_value)
  * [3 Exceptions](is_other.html#Exceptions)
  * [4 Example](is_other.html#Example)
  * [5 See also](is_other.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  file status to check   
---|---|---  
p  |  \-  |  path to examine   
ec  |  \-  |  error code to store the error status to   
  
### Return value

true if the file indicated by p or if the type indicated s refers to a file that is not regular file, directory, or a symlink, false otherwise. The non-throwing overload returns false if an error occurs. 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


2,3) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ statussymlink_status](status.html "cpp/filesystem/status")(C++17)(C++17) |  determines file attributes  
determines file attributes, checking the symlink target   
(function)   
---|---  
[ file_status](file_status.html "cpp/filesystem/file status")(C++17) |  represents file type and permissions   
(class)   
[ status_known](status_known.html "cpp/filesystem/status known")(C++17) |  checks whether file status is known   
(function)   
[ is_block_file](is_block_file.html "cpp/filesystem/is block file")(C++17) |  checks whether the given path refers to block device   
(function)   
[ is_character_file](is_character_file.html "cpp/filesystem/is character file")(C++17) |  checks whether the given path refers to a character device   
(function)   
[ is_directory](is_directory.html "cpp/filesystem/is directory")(C++17) |  checks whether the given path refers to a directory   
(function)   
[ is_fifo](is_fifo.html "cpp/filesystem/is fifo")(C++17) |  checks whether the given path refers to a named pipe   
(function)   
[ is_regular_file](is_regular_file.html "cpp/filesystem/is regular file")(C++17) |  checks whether the argument refers to a regular file   
(function)   
[ is_socket](is_socket.html "cpp/filesystem/is socket")(C++17) |  checks whether the argument refers to a named IPC socket   
(function)   
[ is_symlink](is_symlink.html "cpp/filesystem/is symlink")(C++17) |  checks whether the argument refers to a symbolic link   
(function)   
[ exists](exists.html "cpp/filesystem/exists")(C++17) |  checks whether path refers to existing file system object   
(function)   
[ is_other](directory_entry/is_other.html "cpp/filesystem/directory entry/is other") |  checks whether the directory entry refers to an _other_ file   
(public member function of `std::filesystem::directory_entry`) 
