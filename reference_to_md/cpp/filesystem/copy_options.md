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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
**filesystem::copy_options**  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/navbar_content&action=edit)

Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
enum class copy_options {  
none = /* unspecified */,  
skip_existing = /* unspecified */,  
overwrite_existing = /* unspecified */,  
update_existing = /* unspecified */,  
recursive = /* unspecified */,  
copy_symlinks = /* unspecified */,  
skip_symlinks = /* unspecified */,  
directories_only = /* unspecified */,  
create_symlinks = /* unspecified */,  
create_hard_links = /* unspecified */  
}; |  |  (since C++17)  
| |   
  
This type represents available options that control the behavior of the [`copy()`](copy.html "cpp/filesystem/copy") and [`copy_file()`](copy_file.html "cpp/filesystem/copy file") function. 

`copy_options` satisfies the requirements of [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") (which means the bitwise operators operator&, operator|, operator^, operator~, operator&=, operator|=, and operator^= are defined for this type). none represents the empty bitmask; every other enumerator represents a distinct bitmask element. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/copy_options&action=edit&section=1 "Edit section: Member constants")] Member constants

At most one copy option in each of the following options groups may be present, otherwise the behavior of the copy functions is undefined. 

Member constant  | Meaning   
---|---  
options controlling [`copy_file()`](copy_file.html "cpp/filesystem/copy file") when the file already exists   
`none` | Report an error (default behavior).   
`skip_existing` | Keep the existing file, without reporting an error.   
`overwrite_existing` | Replace the existing file.   
`update_existing` | Replace the existing file only if it is older than the file being copied.   
options controlling the effects of [`copy()`](copy.html "cpp/filesystem/copy") on subdirectories   
`none` | Skip subdirectories (default behavior).   
`recursive` | Recursively copy subdirectories and their content.   
options controlling the effects of [`copy()`](copy.html "cpp/filesystem/copy") on symbolic links   
`none` | Follow symlinks (default behavior).   
`copy_symlinks` | Copy symlinks as symlinks, not as the files they point to.   
`skip_symlinks` | Ignore symlinks.   
options controlling the kind of copying [`copy()`](copy.html "cpp/filesystem/copy") does   
`none` | Copy file content (default behavior).   
`directories_only` | Copy the directory structure, but do not copy any non-directory files.   
`create_symlinks` | Instead of creating copies of files, create symlinks pointing to the originals. Note: the source path must be an absolute path unless the destination path is in the current directory.   
`create_hard_links` | Instead of creating copies of files, create hardlinks that resolve to the same files as the originals.   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/copy_options&action=edit&section=2 "Edit section: Example")] Example

Run this code
    
    
    #include <cstdlib>
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    namespace fs = std::filesystem;
     
    int main()
    {
        fs::create_directories("sandbox/dir/subdir");
        [std::ofstream](../io/basic_ofstream.html)("sandbox/file1.txt").put('a');
        fs::copy("sandbox/file1.txt", "sandbox/file2.txt"); // copy file
        fs::copy("sandbox/dir", "sandbox/dir2"); // copy directory (non-recursive)
        const auto copyOptions = fs::copy_options::update_existing
                               | fs::copy_options::recursive
                               | fs::copy_options::directories_only
                               ;
        fs::copy("sandbox", "sandbox_copy", copyOptions); 
        static_cast<void>([std::system](../utility/program/system.html)("tree"));
        fs::remove_all("sandbox");
        fs::remove_all("sandbox_copy");
    }

Possible output: 
    
    
    .
    ├── sandbox
    │   ├── dir
    │   │   └── subdir
    │   ├── dir2
    │   ├── file1.txt
    │   └── file2.txt
    └── sandbox_copy
        ├── dir
        │   └── subdir
        └── dir2
     
    8 directories, 2 files

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/copy_options&action=edit&section=3 "Edit section: See also")] See also

[ copy](copy.html "cpp/filesystem/copy")(C++17) |  copies files or directories   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/dsc_copy&action=edit)  
---|---  
[ copy_file](copy_file.html "cpp/filesystem/copy file")(C++17) |  copies file contents   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/dsc_copy_file&action=edit)
