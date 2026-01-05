[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Filesystem library](../../filesystem.html "cpp/filesystem")

[Classes](../../filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](../path.html "cpp/filesystem/path")  
---  
[filesystem::filesystem_error](../filesystem_error.html "cpp/filesystem/filesystem error")  
[filesystem::directory_entry](../directory_entry.html "cpp/filesystem/directory entry")  
[filesystem::directory_iterator](../directory_iterator.html "cpp/filesystem/directory iterator")  
[filesystem::recursive_directory_iterator](../recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator")` `  
[filesystem::file_status](../file_status.html "cpp/filesystem/file status")  
[filesystem::space_info](../space_info.html "cpp/filesystem/space info")  
  
| [filesystem::file_type](../file_type.html "cpp/filesystem/file type")  
---  
[filesystem::file_time_type](../file_time_type.html "cpp/filesystem/file time type")  
[filesystem::perms](../perms.html "cpp/filesystem/perms")  
[filesystem::perm_options](../perm_options.html "cpp/filesystem/perm options")  
[filesystem::copy_options](../copy_options.html "cpp/filesystem/copy options")  
[filesystem::directory_options](../directory_options.html "cpp/filesystem/directory options")  
  
[Functions](../../filesystem.html#Non-member_functions "cpp/filesystem")  
| [filesystem::absolute](../absolute.html "cpp/filesystem/absolute")  
---  
[filesystem::canonicalfilesystem::weakly_canonical](../canonical.html "cpp/filesystem/canonical")  
[filesystem::relativefilesystem::proximate](../relative.html "cpp/filesystem/relative")  
[filesystem::copy](../copy.html "cpp/filesystem/copy")  
[filesystem::copy_file](../copy_file.html "cpp/filesystem/copy file")  
[filesystem::copy_symlink](../copy_symlink.html "cpp/filesystem/copy symlink")  
[filesystem::create_directory  
filesystem::create_directories](../create_directory.html "cpp/filesystem/create directory")  
[filesystem::create_hard_link](../create_hard_link.html "cpp/filesystem/create hard link")  
[filesystem::create_symlink  
filesystem::create_directory_symlink](../create_symlink.html "cpp/filesystem/create symlink")  
[filesystem::current_path](../current_path.html "cpp/filesystem/current path")  
[filesystem::temp_directory_path](../temp_directory_path.html "cpp/filesystem/temp directory path")  
  
| [filesystem::exists](../exists.html "cpp/filesystem/exists")  
---  
[filesystem::equivalent](../equivalent.html "cpp/filesystem/equivalent")  
[filesystem::file_size](../file_size.html "cpp/filesystem/file size")  
[filesystem::hard_link_count](../hard_link_count.html "cpp/filesystem/hard link count")  
[filesystem::last_write_time](../last_write_time.html "cpp/filesystem/last write time")  
[filesystem::permissions](../permissions.html "cpp/filesystem/permissions")  
[filesystem::read_symlink](../read_symlink.html "cpp/filesystem/read symlink")  
[filesystem::remove  
filesystem::remove_all](../remove.html "cpp/filesystem/remove")  
[filesystem::rename](../rename.html "cpp/filesystem/rename")  
[filesystem::resize_file](../resize_file.html "cpp/filesystem/resize file")  
[filesystem::space](../space.html "cpp/filesystem/space")  
[filesystem::status  
filesystem::symlink_status](../status.html "cpp/filesystem/status")  
  
[File types](../../filesystem.html#File_types "cpp/filesystem")  
| [filesystem::is_block_file](../is_block_file.html "cpp/filesystem/is block file")  
---  
[filesystem::is_character_file](../is_character_file.html "cpp/filesystem/is character file")  
[filesystem::is_directory](../is_directory.html "cpp/filesystem/is directory")  
[filesystem::is_empty](../is_empty.html "cpp/filesystem/is empty")  
[filesystem::status_known](../status_known.html "cpp/filesystem/status known")  
  
| [filesystem::is_fifo](../is_fifo.html "cpp/filesystem/is fifo")  
---  
[filesystem::is_other](../is_other.html "cpp/filesystem/is other")  
[filesystem::is_regular_file](../is_regular_file.html "cpp/filesystem/is regular file")  
[filesystem::is_socket](../is_socket.html "cpp/filesystem/is socket")  
[filesystem::is_symlink](../is_symlink.html "cpp/filesystem/is symlink")  
  


[`filesystem_error`](../filesystem_error.html "cpp/filesystem/filesystem error")

Member functions  
---  
[filesystem_error::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error/filesystem error")  
**filesystem_error::operator=**  
[filesystem_error::path1filesystem_error::path2](path.html "cpp/filesystem/filesystem error/path")  
[filesystem_error::what](what.html "cpp/filesystem/filesystem error/what")  
Inherited from [std::system_error](../../error/system_error.html "cpp/error/system error")  
[system_error::code](../../error/system_error/code.html "cpp/error/system error/code")  
  


filesystem_error& operator=( const filesystem_error& other ) noexcept; |  |  (since C++17)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::filesystem::filesystem_error` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. 

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Notes](operator=.html#Notes)
  * [4 Example](operator=.html#Example)

  
---  
  
### Parameters

other  |  \-  |  another `filesystem_error` object to assign with   
---|---|---  
  
### Return value

*this

### Notes

Typical implementations store `path` objects referenced by path1() and path2() in a reference-counted storage. As a result, *this and other usually share their `path` objects after assignment. 

### Example

| This section is incomplete  
Reason: no example   
---|---
