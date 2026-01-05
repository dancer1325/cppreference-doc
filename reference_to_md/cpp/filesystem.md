[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
**Filesystem library** (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


**Filesystem library**

[Classes](filesystem.html#Classes "cpp/filesystem")  
---  
| [filesystem::path](filesystem/path.html "cpp/filesystem/path")  
---  
[filesystem::filesystem_error](filesystem/filesystem_error.html "cpp/filesystem/filesystem error")  
[filesystem::directory_entry](filesystem/directory_entry.html "cpp/filesystem/directory entry")  
[filesystem::directory_iterator](filesystem/directory_iterator.html "cpp/filesystem/directory iterator")  
[filesystem::recursive_directory_iterator](filesystem/recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator")` `  
[filesystem::file_status](filesystem/file_status.html "cpp/filesystem/file status")  
[filesystem::space_info](filesystem/space_info.html "cpp/filesystem/space info")  
  
| [filesystem::file_type](filesystem/file_type.html "cpp/filesystem/file type")  
---  
[filesystem::file_time_type](filesystem/file_time_type.html "cpp/filesystem/file time type")  
[filesystem::perms](filesystem/perms.html "cpp/filesystem/perms")  
[filesystem::perm_options](filesystem/perm_options.html "cpp/filesystem/perm options")  
[filesystem::copy_options](filesystem/copy_options.html "cpp/filesystem/copy options")  
[filesystem::directory_options](filesystem/directory_options.html "cpp/filesystem/directory options")  
  
[Functions](filesystem.html#Non-member_functions "cpp/filesystem")  
| [filesystem::absolute](filesystem/absolute.html "cpp/filesystem/absolute")  
---  
[filesystem::canonicalfilesystem::weakly_canonical](filesystem/canonical.html "cpp/filesystem/canonical")  
[filesystem::relativefilesystem::proximate](filesystem/relative.html "cpp/filesystem/relative")  
[filesystem::copy](filesystem/copy.html "cpp/filesystem/copy")  
[filesystem::copy_file](filesystem/copy_file.html "cpp/filesystem/copy file")  
[filesystem::copy_symlink](filesystem/copy_symlink.html "cpp/filesystem/copy symlink")  
[filesystem::create_directory  
filesystem::create_directories](filesystem/create_directory.html "cpp/filesystem/create directory")  
[filesystem::create_hard_link](filesystem/create_hard_link.html "cpp/filesystem/create hard link")  
[filesystem::create_symlink  
filesystem::create_directory_symlink](filesystem/create_symlink.html "cpp/filesystem/create symlink")  
[filesystem::current_path](filesystem/current_path.html "cpp/filesystem/current path")  
[filesystem::temp_directory_path](filesystem/temp_directory_path.html "cpp/filesystem/temp directory path")  
  
| [filesystem::exists](filesystem/exists.html "cpp/filesystem/exists")  
---  
[filesystem::equivalent](filesystem/equivalent.html "cpp/filesystem/equivalent")  
[filesystem::file_size](filesystem/file_size.html "cpp/filesystem/file size")  
[filesystem::hard_link_count](filesystem/hard_link_count.html "cpp/filesystem/hard link count")  
[filesystem::last_write_time](filesystem/last_write_time.html "cpp/filesystem/last write time")  
[filesystem::permissions](filesystem/permissions.html "cpp/filesystem/permissions")  
[filesystem::read_symlink](filesystem/read_symlink.html "cpp/filesystem/read symlink")  
[filesystem::remove  
filesystem::remove_all](filesystem/remove.html "cpp/filesystem/remove")  
[filesystem::rename](filesystem/rename.html "cpp/filesystem/rename")  
[filesystem::resize_file](filesystem/resize_file.html "cpp/filesystem/resize file")  
[filesystem::space](filesystem/space.html "cpp/filesystem/space")  
[filesystem::status  
filesystem::symlink_status](filesystem/status.html "cpp/filesystem/status")  
  
[File types](filesystem.html#File_types "cpp/filesystem")  
| [filesystem::is_block_file](filesystem/is_block_file.html "cpp/filesystem/is block file")  
---  
[filesystem::is_character_file](filesystem/is_character_file.html "cpp/filesystem/is character file")  
[filesystem::is_directory](filesystem/is_directory.html "cpp/filesystem/is directory")  
[filesystem::is_empty](filesystem/is_empty.html "cpp/filesystem/is empty")  
[filesystem::status_known](filesystem/status_known.html "cpp/filesystem/status known")  
  
| [filesystem::is_fifo](filesystem/is_fifo.html "cpp/filesystem/is fifo")  
---  
[filesystem::is_other](filesystem/is_other.html "cpp/filesystem/is other")  
[filesystem::is_regular_file](filesystem/is_regular_file.html "cpp/filesystem/is regular file")  
[filesystem::is_socket](filesystem/is_socket.html "cpp/filesystem/is socket")  
[filesystem::is_symlink](filesystem/is_symlink.html "cpp/filesystem/is symlink")  
  


The Filesystem library provides facilities for performing operations on file systems and their components, such as paths, regular files, and directories. 

The filesystem library was originally developed as [boost.filesystem](https://www.boost.org/doc/libs/release/libs/filesystem/doc/index.htm), was published as [the technical specification ISO/IEC TS 18822:2015](experimental/fs.html "cpp/experimental/fs"), and finally merged to ISO C++ as of C++17. The boost implementation is currently available on more compilers and platforms than the C++17 library. 

The filesystem library facilities may be unavailable if a hierarchical file system is not accessible to the implementation, or if it does not provide the necessary capabilities. Some features may not be available if they are not supported by the underlying file system (e.g. the FAT filesystem lacks symbolic links and forbids multiple hardlinks). In those cases, errors must be reported. 

The behavior is [undefined](language/ub.html "cpp/language/ub") if the calls to functions in this library introduce a _file system race_ , that is, when multiple threads, processes, or computers interleave access and modification to the same object in a file system. 

## Contents

  * [1 Library-wide definitions](filesystem.html#Library-wide_definitions)
  * [2 Classes](filesystem.html#Classes)
  * [3 Non-member functions](filesystem.html#Non-member_functions)
    * [3.1 File types](filesystem.html#File_types)
  * [4 Notes](filesystem.html#Notes)
  * [5 See also](filesystem.html#See_also)

  
---  
  
#### Library-wide definitions

  * _file_ : a file system object that holds data, can be written to, read from, or both. Files have names, attributes, one of which is file type: 



    

  * _directory_ : a file that acts as a container of directory entries, which identify other files (some of which may be other, nested directories). When discussing a particular file, the directory in which it appears as an entry is its _parent directory_. The parent directory can be represented by the relative pathname "..". 
  * _regular file_ : a directory entry that associates a name with an existing file (i.e. a _hard link_). If multiple hard links are supported, the file is removed after the last hard link to it is removed. 
  * _symbolic link_ : a directory entry that associates a name with a path, which may or may not exist. 
  * other special file types: _block_ , _character_ , _fifo_ , _socket_. 



  * _file name_ : a string of characters that names a file. Permissible characters, case sensitivity, maximum length, and the disallowed names are implementation-defined. Names "." (dot) and ".." (dot-dot) have special meaning at library level. 
  * _path_ : sequence of elements that identifies a file. It begins with an optional root-name (e.g. "C:" or "//server" on Windows), followed by an optional root-directory (e.g. "/" on Unix), followed by a sequence of zero or more file names (all but last of which have to be directories or links to directories). The native format (e.g. which characters are used as separators) and character encoding of the string representation of a path (the _pathname_) is implementation-defined, this library provides portable representation of paths. 



    

  * _absolute path_ : a path that unambiguously identifies the location of a file. 
  * _canonical path_ : an absolute path that includes no symlinks, "." or ".." elements. 
  * _relative path_ : a path that identifies the location of a file relative to some location on the file system. The special path names "." (dot, "current directory") and ".." (dot-dot, "parent directory") are relative paths. 



###  Classes  
  
---  
Defined in header `[<filesystem>](header/filesystem.html "cpp/header/filesystem")`  
Defined in namespace `std::filesystem`  
[ path](filesystem/path.html "cpp/filesystem/path")(C++17) |  represents a path   
(class)   
[ filesystem_error](filesystem/filesystem_error.html "cpp/filesystem/filesystem error")(C++17) |  an exception thrown on file system errors   
(class)   
[ directory_entry](filesystem/directory_entry.html "cpp/filesystem/directory entry")(C++17) |  a directory entry   
(class)   
[ directory_iterator](filesystem/directory_iterator.html "cpp/filesystem/directory iterator")(C++17) |  an iterator to the contents of the directory   
(class)   
[ recursive_directory_iterator](filesystem/recursive_directory_iterator.html "cpp/filesystem/recursive directory iterator")(C++17) |  an iterator to the contents of a directory and its subdirectories   
(class)   
[ file_status](filesystem/file_status.html "cpp/filesystem/file status")(C++17) |  represents file type and permissions   
(class)   
[ space_info](filesystem/space_info.html "cpp/filesystem/space info")(C++17) |  information about free and available space on the filesystem   
(class)   
[ file_type](filesystem/file_type.html "cpp/filesystem/file type")(C++17) |  the type of a file   
(enum)   
[ perms](filesystem/perms.html "cpp/filesystem/perms")(C++17) |  identifies file system permissions   
(enum)   
[ perm_options](filesystem/perm_options.html "cpp/filesystem/perm options")(C++17) |  specifies semantics of permissions operations   
(enum)   
[ copy_options](filesystem/copy_options.html "cpp/filesystem/copy options")(C++17) |  specifies semantics of copy operations   
(enum)   
[ directory_options](filesystem/directory_options.html "cpp/filesystem/directory options")(C++17) |  options for iterating directory contents   
(enum)   
[ file_time_type](filesystem/file_time_type.html "cpp/filesystem/file time type")(C++17) |  represents file time values   
(typedef)   
  
###  Non-member functions  
  
Defined in header `[<filesystem>](header/filesystem.html "cpp/header/filesystem")`  
Defined in namespace `std::filesystem`  
[ absolute](filesystem/absolute.html "cpp/filesystem/absolute")(C++17) |  composes an absolute path   
(function)   
[ canonicalweakly_canonical](filesystem/canonical.html "cpp/filesystem/canonical")(C++17) |  composes a canonical path   
(function)   
[ relativeproximate](filesystem/relative.html "cpp/filesystem/relative")(C++17) |  composes a relative path   
(function)   
[ copy](filesystem/copy.html "cpp/filesystem/copy")(C++17) |  copies files or directories   
(function)   
[ copy_file](filesystem/copy_file.html "cpp/filesystem/copy file")(C++17) |  copies file contents   
(function)   
[ copy_symlink](filesystem/copy_symlink.html "cpp/filesystem/copy symlink")(C++17) |  copies a symbolic link   
(function)   
[ create_directorycreate_directories](filesystem/create_directory.html "cpp/filesystem/create directory")(C++17)(C++17) |  creates new directory   
(function)   
[ create_hard_link](filesystem/create_hard_link.html "cpp/filesystem/create hard link")(C++17) |  creates a hard link   
(function)   
[ create_symlinkcreate_directory_symlink](filesystem/create_symlink.html "cpp/filesystem/create symlink")(C++17)(C++17) |  creates a symbolic link   
(function)   
[ current_path](filesystem/current_path.html "cpp/filesystem/current path")(C++17) |  returns or sets the current working directory   
(function)   
[ exists](filesystem/exists.html "cpp/filesystem/exists")(C++17) |  checks whether path refers to existing file system object   
(function)   
[ equivalent](filesystem/equivalent.html "cpp/filesystem/equivalent")(C++17) |  checks whether two paths refer to the same file system object   
(function)   
[ file_size](filesystem/file_size.html "cpp/filesystem/file size")(C++17) |  returns the size of a file   
(function)   
[ hard_link_count](filesystem/hard_link_count.html "cpp/filesystem/hard link count")(C++17) |  returns the number of hard links referring to the specific file   
(function)   
[ last_write_time](filesystem/last_write_time.html "cpp/filesystem/last write time")(C++17) |  gets or sets the time of the last data modification   
(function)   
[ permissions](filesystem/permissions.html "cpp/filesystem/permissions")(C++17) |  modifies file access permissions   
(function)   
[ read_symlink](filesystem/read_symlink.html "cpp/filesystem/read symlink")(C++17) |  obtains the target of a symbolic link   
(function)   
[ removeremove_all](filesystem/remove.html "cpp/filesystem/remove")(C++17)(C++17) |  removes a file or empty directory  
removes a file or directory and all its contents, recursively   
(function)   
[ rename](filesystem/rename.html "cpp/filesystem/rename")(C++17) |  moves or renames a file or directory   
(function)   
[ resize_file](filesystem/resize_file.html "cpp/filesystem/resize file")(C++17) |  changes the size of a regular file by truncation or zero-fill   
(function)   
[ space](filesystem/space.html "cpp/filesystem/space")(C++17) |  determines available free space on the file system   
(function)   
[ statussymlink_status](filesystem/status.html "cpp/filesystem/status")(C++17)(C++17) |  determines file attributes  
determines file attributes, checking the symlink target   
(function)   
[ temp_directory_path](filesystem/temp_directory_path.html "cpp/filesystem/temp directory path")(C++17) |  returns a directory suitable for temporary files   
(function)   
  
#####  File types   
  
[ is_block_file](filesystem/is_block_file.html "cpp/filesystem/is block file")(C++17) |  checks whether the given path refers to block device   
(function)   
[ is_character_file](filesystem/is_character_file.html "cpp/filesystem/is character file")(C++17) |  checks whether the given path refers to a character device   
(function)   
[ is_directory](filesystem/is_directory.html "cpp/filesystem/is directory")(C++17) |  checks whether the given path refers to a directory   
(function)   
[ is_empty](filesystem/is_empty.html "cpp/filesystem/is empty")(C++17) |  checks whether the given path refers to an empty file or directory   
(function)   
[ is_fifo](filesystem/is_fifo.html "cpp/filesystem/is fifo")(C++17) |  checks whether the given path refers to a named pipe   
(function)   
[ is_other](filesystem/is_other.html "cpp/filesystem/is other")(C++17) |  checks whether the argument refers to an _other_ file   
(function)   
[ is_regular_file](filesystem/is_regular_file.html "cpp/filesystem/is regular file")(C++17) |  checks whether the argument refers to a regular file   
(function)   
[ is_socket](filesystem/is_socket.html "cpp/filesystem/is socket")(C++17) |  checks whether the argument refers to a named IPC socket   
(function)   
[ is_symlink](filesystem/is_symlink.html "cpp/filesystem/is symlink")(C++17) |  checks whether the argument refers to a symbolic link   
(function)   
[ status_known](filesystem/status_known.html "cpp/filesystem/status known")(C++17) |  checks whether file status is known   
(function)   
  
### Notes

Using this library may require additional compiler/linker options. GNU implementation prior to 9.1 requires linking with `-lstdc++fs` and LLVM implementation prior to LLVM 9.0 requires linking with `-lc++fs`. 

[Feature-test](utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_filesystem`](experimental/feature_test.html#cpp_lib_filesystem "cpp/feature test") | [`201703L`](compiler_support/17.html#cpp_lib_filesystem_201703L "cpp/compiler support/17") | (C++17) | Filesystem library   
  
### See also

[C++ documentation](experimental/fs.html "cpp/experimental/fs") for File System TS  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
