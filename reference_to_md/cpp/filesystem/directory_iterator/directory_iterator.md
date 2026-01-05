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
  


[`std::filesystem::directory_iterator`](../directory_iterator.html "cpp/filesystem/directory iterator")

Member functions  
---  
**directory_iterator::directory_iterator**  
[directory_iterator::operator*directory_iterator::operator->](operator*.html "cpp/filesystem/directory iterator/operator*")  
[directory_iterator::operator=](operator=.html "cpp/filesystem/directory iterator/operator=")  
[incrementoperator++](increment.html "cpp/filesystem/directory iterator/increment")  
Non-member functions  
[begin(std::filesystem::directory_iterator)end(std::filesystem::directory_iterator)](begin.html "cpp/filesystem/directory iterator/begin")  
  


directory_iterator() noexcept; |  (1)  |  (since C++17)  
---|---|---  
explicit directory_iterator( const [std::filesystem::path](../path.html)& p ); |  (2)  |  (since C++17)  
directory_iterator( const [std::filesystem::path](../path.html)& p,  
[std::filesystem::directory_options](../directory_options.html) options ); |  (3)  |  (since C++17)  
directory_iterator( const [std::filesystem::path](../path.html)& p, [std::error_code](../../error/error_code.html)& ec ); |  (4)  |  (since C++17)  
directory_iterator( const [std::filesystem::path](../path.html)& p,  
[std::filesystem::directory_options](../directory_options.html) options,  
[std::error_code](../../error/error_code.html)& ec ); |  (5)  |  (since C++17)  
directory_iterator( const directory_iterator& other ) = default; |  (6)  |  (since C++17)  
directory_iterator( directory_iterator&& other ) = default; |  (7)  |  (since C++17)  
| |   
  
Constructs a new directory iterator. 

1) Constructs the end iterator.

2) Constructs a directory iterator that refers to the first directory entry of a directory identified by `p`. If `p` refers to a non-existing file or not a directory, throws [std::filesystem::filesystem_error](../filesystem_error.html "cpp/filesystem/filesystem error").

3) Same as (2), but if [std::filesystem::directory_options::skip_permission_denied](../directory_options.html "cpp/filesystem/directory options") is set in `options` and construction encounters a permissions denied error, constructs the end iterator and does not report an error.

4) Constructs a directory iterator that refers to the first directory entry of a directory identified by `p`. If `p` refers to a non-existing file or not a directory, returns the end iterator and sets `ec`.

5) Same as (4), but if [std::filesystem::directory_options::skip_permission_denied](../directory_options.html "cpp/filesystem/directory options") is set in `options` and construction encounters a permissions denied error, constructs the end iterator and does not report an error.

6) Copy constructor.

7) Move constructor.

## Contents

  * [1 Parameters](directory_iterator.html#Parameters)
  * [2 Exceptions](directory_iterator.html#Exceptions)
  * [3 Notes](directory_iterator.html#Notes)
  * [4 Example](directory_iterator.html#Example)
  * [5 Defect reports](directory_iterator.html#Defect_reports)

  
---  
  
### Parameters

p  |  \-  |  path to the filesystem object to which the directory iterator will refer   
---|---|---  
ec  |  \-  |  out-parameter for error reporting in the non-throwing overloads   
options  |  \-  |  the set of [BitmaskType](../../named_req/BitmaskType.html "cpp/named req/BitmaskType") options that control the behavior of the directory iterator   
other  |  \-  |  another directory iterator to use as source to initialize the directory iterator with   
  
### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


2,3) Throws [std::filesystem::filesystem_error](../filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

4,5) Sets a [std::error_code](../../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

To iterate over the current directory, construct the iterator as directory_iterator(".") instead of directory_iterator(""). 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3013](https://cplusplus.github.io/LWG/issue3013) | C++17  | `error_code` overload marked noexcept but can allocate memory  | noexcept removed 
