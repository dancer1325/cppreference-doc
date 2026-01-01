[C++](../../../../cpp.html "cpp")

[Compiler support](../../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../../freestanding.html "cpp/freestanding")  
[Language](../../../language.html "cpp/language")  
[Standard library](../../../standard_library.html "cpp/standard library")  
[Standard library headers](../../../headers.html "cpp/header")  
[Named requirements](../../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../../error.html "cpp/error")  
[Memory management library](../../../memory.html "cpp/memory")  
[Metaprogramming library](../../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../../utility.html "cpp/utility")  
[Containers library](../../../container.html "cpp/container")  
[Iterators library](../../../iterator.html "cpp/iterator")  
[Ranges library](../../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../../algorithm.html "cpp/algorithm")  
[Strings library](../../../string.html "cpp/string")  
[Text processing library](../../../text.html "cpp/text")  
[Numerics library](../../../numeric.html "cpp/numeric")  
[Date and time library](../../../chrono.html "cpp/chrono")  
[Input/output library](../../../io.html "cpp/io")  
[Filesystem library](../../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../execution.html "cpp/execution") (C++26)  
[Technical specifications](../../../experimental.html "cpp/experimental")  
[Symbols index](../../../symbol_index.html "cpp/symbol index")  
[External libraries](../../../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Filesystem library](../../fs.html "cpp/experimental/fs")

Classes  
---  
| [filesystem::path](../path.html "cpp/experimental/fs/path")  
---  
[filesystem::filesystem_error](../filesystem_error.html "cpp/experimental/fs/filesystem error")  
[filesystem::directory_entry](../directory_entry.html "cpp/experimental/fs/directory entry")  
[filesystem::directory_iterator](../directory_iterator.html "cpp/experimental/fs/directory iterator")  
[filesystem::recursive_directory_iterator](../recursive_directory_iterator.html "cpp/experimental/fs/recursive directory iterator")  
[filesystem::file_status](../file_status.html "cpp/experimental/fs/file status")  
  
| [filesystem::space_info](../space_info.html "cpp/experimental/fs/space info")  
---  
[filesystem::file_type](../file_type.html "cpp/experimental/fs/file type")  
[filesystem::perms](../perms.html "cpp/experimental/fs/perms")  
[filesystem::copy_options](../copy_options.html "cpp/experimental/fs/copy options")  
[filesystem::directory_options](../directory_options.html "cpp/experimental/fs/directory options")  
[filesystem::file_time_type](../file_time_type.html "cpp/experimental/fs/file time type")  
  
Functions  
| [filesystem::absolute  
filesystem::system_complete](../absolute.html "cpp/experimental/fs/absolute")  
---  
[filesystem::canonical](../canonical.html "cpp/experimental/fs/canonical")  
[filesystem::copy](../copy.html "cpp/experimental/fs/copy")  
[filesystem::copy_file](../copy_file.html "cpp/experimental/fs/copy file")  
[filesystem::copy_symlink](../copy_symlink.html "cpp/experimental/fs/copy symlink")  
[filesystem::create_directory  
filesystem::create_directories](../create_directory.html "cpp/experimental/fs/create directory")  
[filesystem::create_hard_link](../create_hard_link.html "cpp/experimental/fs/create hard link")  
[filesystem::create_symlink  
filesystem::create_directory_symlink](../create_symlink.html "cpp/experimental/fs/create symlink")  
[filesystem::current_path](../current_path.html "cpp/experimental/fs/current path")  
[filesystem::exists](../exists.html "cpp/experimental/fs/exists")  
[filesystem::equivalent](../equivalent.html "cpp/experimental/fs/equivalent")  
  
| [filesystem::file_size](../file_size.html "cpp/experimental/fs/file size")  
---  
[filesystem::hard_link_count](../hard_link_count.html "cpp/experimental/fs/hard link count")  
[filesystem::last_write_time](../last_write_time.html "cpp/experimental/fs/last write time")  
[filesystem::permissions](../permissions.html "cpp/experimental/fs/permissions")  
[filesystem::read_symlink](../read_symlink.html "cpp/experimental/fs/read symlink")  
[filesystem::remove  
filesystem::remove_all](../remove.html "cpp/experimental/fs/remove")  
[filesystem::rename](../rename.html "cpp/experimental/fs/rename")  
[filesystem::resize_file](../resize_file.html "cpp/experimental/fs/resize file")  
[filesystem::space](../space.html "cpp/experimental/fs/space")  
[filesystem::status  
filesystem::symlink_status](../status.html "cpp/experimental/fs/status")  
[filesystem::temp_directory_path](../temp_directory_path.html "cpp/experimental/fs/temp directory path")  
  
File types  
| [filesystem::is_block_file](../is_block_file.html "cpp/experimental/fs/is block file")  
---  
[filesystem::is_character_file](../is_character_file.html "cpp/experimental/fs/is character file")  
[filesystem::is_directory](../is_directory.html "cpp/experimental/fs/is directory")  
[filesystem::is_empty](../is_empty.html "cpp/experimental/fs/is empty")  
[filesystem::status_known](../status_known.html "cpp/experimental/fs/status known")  
  
| [filesystem::is_fifo](../is_fifo.html "cpp/experimental/fs/is fifo")  
---  
[filesystem::is_other](../is_other.html "cpp/experimental/fs/is other")  
[filesystem::is_regular_file](../is_regular_file.html "cpp/experimental/fs/is regular file")  
[filesystem::is_socket](../is_socket.html "cpp/experimental/fs/is socket")  
[filesystem::is_symlink](../is_symlink.html "cpp/experimental/fs/is symlink")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/fs/navbar_content&action=edit)

[`file_status`](../file_status.html "cpp/experimental/fs/file status")

[Template:cpp/experimental/fs/file status/navbar content](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/fs/file_status/navbar_content&action=edit&redlink=1 "Template:cpp/experimental/fs/file status/navbar content \(page does not exist\)")

[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/fs/file_status/navbar_content&action=edit)

perms permissions() const; |  (1)  |  (filesystem TS)  
---|---|---  
void permissions( perms perm ); |  (2)  |  (filesystem TS)  
| |   
  
Accesses the file permissions information. 

1) Returns file permissions information.

2) Sets file type to perm.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/file_status/permissions&action=edit&section=1 "Edit section: Parameters")] Parameters

perm  |  \-  |  file permissions to set to   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/file_status/permissions&action=edit&section=2 "Edit section: Return value")] Return value

1) File permissions information.

2) (none)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/file_status/permissions&action=edit&section=3 "Edit section: Exceptions")] Exceptions

[`noexcept`](../../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept
