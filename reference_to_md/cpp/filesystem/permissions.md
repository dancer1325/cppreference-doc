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
**filesystem::permissions**  
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
void permissions( const [std::filesystem::path](path.html)& p,  
[std::filesystem::perms](perms.html) prms,  
[std::filesystem::perm_options](perm_options.html) opts = perm_options::replace ); |  (1)  |  (since C++17)  
void permissions( const [std::filesystem::path](path.html)& p,  
[std::filesystem::perms](perms.html) prms,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
void permissions( const [std::filesystem::path](path.html)& p,  
[std::filesystem::perms](perms.html) prms,  
[std::filesystem::perm_options](perm_options.html) opts,  
[std::error_code](../error/error_code.html)& ec ); |  (3)  |  (since C++17)  
| |   
  
Changes access permissions of the file to which p resolves, as if by POSIX [`fchmodat`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/fchmodat.html). Symlinks are followed unless `perm_options::nofollow` is set in opts. 

The second signature behaves as if called with opts set to perm_options::replace. 

The effects depend on prms and opts as follows: 

  * If opts is perm_options::replace, file permissions are set to exactly prms & [std::filesystem::perms::mask](perms.html) (meaning, every valid bit of prms is applied). 
  * If opts is perm_options::add, the file permissions are set to exactly status(p).permissions() | (prms & perms::mask) (meaning, any valid bit that is set in prms, but not in the file's current permissions is added to the file's permissions). 
  * If opts is perm_options::remove, the file permissions are set to exactly status(p).permissions() & ~(prms & perms::mask) (meaning, any valid bit that is clear in prms, but set in the file's current permissions is cleared in the file's permissions). 



opts is required to have only one of `replace`, `add`, or `remove` to be set. 

The non-throwing overload has no special action on error. 

## Contents

  * [1 Parameters](permissions.html#Parameters)
  * [2 Return value](permissions.html#Return_value)
  * [3 Exceptions](permissions.html#Exceptions)
  * [4 Notes](permissions.html#Notes)
  * [5 Example](permissions.html#Example)
  * [6 See also](permissions.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  path to examine   
---|---|---  
prms  |  \-  |  permissions to set, add, or remove   
opts  |  \-  |  options controlling the action taken by this function   
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

(none) 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2,3) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

Permissions may not necessarily be implemented as bits, but they are treated that way conceptually. 

Some permission bits may be ignored on some systems, and changing some bits may automatically change others (e.g. on platforms without owner/group/all distinction, setting any of the three write bits set all three). 

### Example

Run this code
    
    
    #include <filesystem>
    #include <fstream>
    #include <iostream>
     
    void demo_perms([std::filesystem::perms](perms.html) p)
    {
        using [std::filesystem::perms](perms.html);
        auto show = [=](char op, perms perm)
        {
            [std::cout](../io/cout.html) << (perms::none == (perm & p) ? '-' : op);
        };
        show('r', perms::owner_read);
        show('w', perms::owner_write);
        show('x', perms::owner_exec);
        show('r', perms::group_read);
        show('w', perms::group_write);
        show('x', perms::group_exec);
        show('r', perms::others_read);
        show('w', perms::others_write);
        show('x', perms::others_exec);
        [std::cout](../io/cout.html) << '\n';
    }
     
    int main()
    {
        [std::ofstream](../io/basic_ofstream.html)("test.txt"); // create file
     
        [std::cout](../io/cout.html) << "Created file with permissions: ";
        demo_perms([std::filesystem::status](status.html)("test.txt").permissions());
     
        std::filesystem::permissions(
            "test.txt",
            [std::filesystem::perms::owner_all](perms.html) | [std::filesystem::perms::group_all](perms.html),
            std::filesystem::perm_options::add
        );
     
        [std::cout](../io/cout.html) << "After adding u+rwx and g+rwx:  ";
        demo_perms([std::filesystem::status](status.html)("test.txt").permissions());
     
        [std::filesystem::remove](remove.html)("test.txt");
    }

Possible output: 
    
    
    Created file with permissions: rw-r--r--
    After adding u+rwx and g+wrx:  rwxrwxr--

### See also

[ perms](perms.html "cpp/filesystem/perms")(C++17) |  identifies file system permissions   
(enum)   
---|---  
[ statussymlink_status](status.html "cpp/filesystem/status")(C++17)(C++17) |  determines file attributes  
determines file attributes, checking the symlink target   
(function) 
