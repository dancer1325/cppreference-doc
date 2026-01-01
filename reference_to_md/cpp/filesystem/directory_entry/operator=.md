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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/navbar_content&action=edit)

[`std::filesystem::directory_entry`](../directory_entry.html "cpp/filesystem/directory entry")

Member functions  
---  
[directory_entry::directory_entry](directory_entry.html "cpp/filesystem/directory entry/directory entry")  
Modifiers  
**directory_entry::operator=**  
[directory_entry::assign](assign.html "cpp/filesystem/directory entry/assign")  
[directory_entry::replace_filename](replace_filename.html "cpp/filesystem/directory entry/replace filename")  
[directory_entry::refresh](refresh.html "cpp/filesystem/directory entry/refresh")  
Observers  
[directory_entry::pathdirectory_entry::operator const path&](path.html "cpp/filesystem/directory entry/path")  
[directory_entry::exists](exists.html "cpp/filesystem/directory entry/exists")  
[directory_entry::is_block_file](is_block_file.html "cpp/filesystem/directory entry/is block file")  
[directory_entry::is_character_file](is_character_file.html "cpp/filesystem/directory entry/is character file")  
[directory_entry::is_directory](is_directory.html "cpp/filesystem/directory entry/is directory")  
[directory_entry::is_fifo](is_fifo.html "cpp/filesystem/directory entry/is fifo")  
[directory_entry::is_other](is_other.html "cpp/filesystem/directory entry/is other")  
[directory_entry::is_regular_file](is_regular_file.html "cpp/filesystem/directory entry/is regular file")  
[directory_entry::is_socket](is_socket.html "cpp/filesystem/directory entry/is socket")  
[directory_entry::is_symlink](is_symlink.html "cpp/filesystem/directory entry/is symlink")  
[directory_entry::file_size](file_size.html "cpp/filesystem/directory entry/file size")  
[directory_entry::hard_link_count](hard_link_count.html "cpp/filesystem/directory entry/hard link count")  
[directory_entry::last_write_time](last_write_time.html "cpp/filesystem/directory entry/last write time")  
[directory_entry::statusdirectory_entry::symlink_status](status.html "cpp/filesystem/directory entry/status")  
[directory_entry::operator==directory_entry::operator!=directory_entry::operator<directory_entry::operator>directory_entry::operator<=directory_entry::operator>=directory_entry::operator<=>](operator_cmp.html "cpp/filesystem/directory entry/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
Non-member functions  
[operator<<](operator_ltlt.html "cpp/filesystem/directory entry/operator ltlt")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/directory_entry/navbar_content&action=edit)

directory_entry& operator=( const directory_entry& other ) = default; |  (1)  |  (since C++17)  
---|---|---  
directory_entry& operator=( directory_entry&& other ) noexcept = default; |  (2)  |  (since C++17)  
| |   
  
Replaces the contents of the directory entry (path and cached attributes, if any) with the contents of `other`. 

Both copy- and move-assignment operators for `directory_entry` are defaulted. 

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Example](operator=.html#Example)
  * [4 See also](operator=.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/directory_entry/operator%3D&action=edit&section=1 "Edit section: Parameters")] Parameters

other  |  \-  |  other `directory_entry`  
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/directory_entry/operator%3D&action=edit&section=2 "Edit section: Return value")] Return value

*this

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/directory_entry/operator%3D&action=edit&section=3 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/directory_entry/operator%3D&action=edit&section=4 "Edit section: See also")] See also

[ assign](assign.html "cpp/filesystem/directory entry/assign") |  assigns contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/directory_entry/dsc_assign&action=edit)  
---|---
