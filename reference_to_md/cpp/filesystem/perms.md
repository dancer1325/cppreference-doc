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
**filesystem::perms**  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/navbar_content&action=edit)

Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
enum class perms; |  |  (since C++17)  
| |   
  
This type represents file access permissions. 

`perms` satisfies the requirements of [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") (which means the bitwise operators operator&, operator|, operator^, operator~, operator&=, operator|=, and operator^= are defined for this type). none represents the empty bitmask; every other enumerator represents a distinct bitmask element. 

Access permissions model [POSIX permission bits](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_stat.h.html), and any individual file permissions (as reported by [filesystem::status](status.html "cpp/filesystem/status")) are a combination of some of the following bits: 

## Contents

  * [1 Member constants](perms.html#Member_constants)
  * [2 Notes](perms.html#Notes)
  * [3 Example](perms.html#Example)
  * [4 See also](perms.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/perms&action=edit&section=1 "Edit section: Member constants")] Member constants

Member constant  | Value (octal)  | POSIX equivalent  | Meaning   
---|---|---|---  
`none` | ​0​ |  | No permission bits are set   
`owner_read` | 0400 | S_IRUSR | File owner has read permission   
`owner_write` | 0200 | S_IWUSR | File owner has write permission   
`owner_exec` | 0100 | S_IXUSR | File owner has execute/search permission   
`owner_all` | 0700 | S_IRWXU | File owner has read, write, and execute/search permissions Equivalent to owner_read | owner_write | owner_exec  
`group_read` | 040 | S_IRGRP | The file's user group has read permission   
`group_write` | 020 | S_IWGRP | The file's user group has write permission   
`group_exec` | 010 | S_IXGRP | The file's user group has execute/search permission   
`group_all` | 070 | S_IRWXG | The file's user group has read, write, and execute/search permissions Equivalent to group_read | group_write | group_exec  
`others_read` | 04 | S_IROTH | Other users have read permission   
`others_write` | 02 | S_IWOTH | Other users have write permission   
`others_exec` | 01 | S_IXOTH | Other users have execute/search permission   
`others_all` | 07 | S_IRWXO | Other users have read, write, and execute/search permissions Equivalent to others_read | others_write | others_exec  
`all` | 0777 |  | All users have read, write, and execute/search permissions Equivalent to owner_all | group_all | others_all  
`set_uid` | 04000 | S_ISUID | Set user ID to file owner user ID on execution   
`set_gid` | 02000 | S_ISGID | Set group ID to file's user group ID on execution   
`sticky_bit` | 01000 | S_ISVTX | Implementation-defined meaning, but POSIX XSI specifies that when set on a directory, only file owners may delete files even if the directory is writeable to others (used with /tmp)   
`mask` | 07777 |  | All valid permission bits. Equivalent to all | set_uid | set_gid | sticky_bit  
  
Additionally, the following constants of this type are defined, which do not represent permissions: 

Member constant  | Value (hex)  | Meaning   
---|---|---  
`unknown` | 0xFFFF | Unknown permissions (e.g. when [filesystem::file_status](file_status.html "cpp/filesystem/file status") is created without permissions)   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/perms&action=edit&section=2 "Edit section: Notes")] Notes

Permissions may not necessarily be implemented as bits, but they are treated that way conceptually. 

Some permission bits may be ignored on some systems, and changing some bits may automatically change others (e.g. on platforms without owner/group/all distinction, setting any of the three write bits set all three). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/perms&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <filesystem>
    #include <fstream>
    #include <iostream>
     
    void demo_perms(std::filesystem::perms p)
    {
        using std::filesystem::perms;
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
     
        [std::filesystem::permissions](permissions.html)(
            "test.txt",
            std::filesystem::perms::owner_all | std::filesystem::perms::group_all,
            std::filesystem::perm_options::add
        );
     
        [std::cout](../io/cout.html) << "After adding u+rwx and g+rwx:  ";
        demo_perms([std::filesystem::status](status.html)("test.txt").permissions());
     
        [std::filesystem::remove](remove.html)("test.txt");
    }

Possible output: 
    
    
    Created file with permissions: rw-r--r--
    After adding u+rwx and g+wrx:  rwxrwxr--

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/perms&action=edit&section=4 "Edit section: See also")] See also

[ statussymlink_status](status.html "cpp/filesystem/status")(C++17)(C++17) |  determines file attributes  
determines file attributes, checking the symlink target   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/dsc_status&action=edit)  
---|---  
[ permissions](permissions.html "cpp/filesystem/permissions")(C++17) |  modifies file access permissions   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/dsc_permissions&action=edit)
