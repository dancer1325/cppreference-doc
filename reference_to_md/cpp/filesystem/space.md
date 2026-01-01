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
**filesystem::space**  
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
[std::filesystem::space_info](space_info.html) space( const [std::filesystem::path](path.html)& p ); |  (1)  |  (since C++17)  
[std::filesystem::space_info](space_info.html) space( const [std::filesystem::path](path.html)& p,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
| |   
  
Determines the information about the filesystem on which the pathname p is located, as if by POSIX [`statvfs`](https://pubs.opengroup.org/onlinepubs/9799919799/functions/fstatvfs.html). 

Populates and returns an object of type [`filesystem::space_info`](space_info.html "cpp/filesystem/space info"), set from the members of the POSIX struct statvfs as follows: 

  * [`space_info.capacity`](space_info.html "cpp/filesystem/space info") is set as if by f_blocks * f_frsize. 
  * [`space_info.free`](space_info.html "cpp/filesystem/space info") is set to f_bfree * f_frsize. 
  * [`space_info.available`](space_info.html "cpp/filesystem/space info") is set to f_bavail * f_frsize. 
  * Any member that could not be determined is set to static_cast<[std::uintmax_t](../types/integer.html)>(-1). 



The non-throwing overload sets all members to static_cast<[std::uintmax_t](../types/integer.html)>(-1) on error. 

## Contents

  * [1 Parameters](space.html#Parameters)
  * [2 Return value](space.html#Return_value)
  * [3 Exceptions](space.html#Exceptions)
  * [4 Notes](space.html#Notes)
  * [5 Example](space.html#Example)
  * [6 See also](space.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/space&action=edit&section=1 "Edit section: Parameters")] Parameters

p  |  \-  |  path to examine   
---|---|---  
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/space&action=edit&section=2 "Edit section: Return value")] Return value

The filesystem information (a [`filesystem::space_info`](space_info.html "cpp/filesystem/space info") object). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/space&action=edit&section=3 "Edit section: Exceptions")] Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/space&action=edit&section=4 "Edit section: Notes")] Notes

[`space_info.available`](space_info.html "cpp/filesystem/space info") may be less than [`space_info.free`](space_info.html "cpp/filesystem/space info"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/space&action=edit&section=5 "Edit section: Example")] Example

Run this code
    
    
    #include <cstdint>
    #include <filesystem>
    #include <iostream>
    #include <locale>
     
    [std::uintmax_t](../types/integer.html) disk_usage_percent(const [std::filesystem::space_info](space_info.html)& si,
                                      bool is_privileged = false) noexcept
    {
        if (constexpr [std::uintmax_t](../types/integer.html) X(-1);
            si.capacity == 0 || si.free == 0 || si.available == 0 ||
            si.capacity == X || si.free == X || si.available == X
        )
            return 100;
     
        [std::uintmax_t](../types/integer.html) unused_space = si.free, capacity = si.capacity;
        if (!is_privileged)
        {
            const [std::uintmax_t](../types/integer.html) privileged_only_space = si.free - si.available;
            unused_space -= privileged_only_space;
            capacity -= privileged_only_space;
        }
        const [std::uintmax_t](../types/integer.html) used_space{capacity - unused_space};
        return 100 * used_space / capacity;
    }
     
    void print_disk_space_info(auto const& dirs, int width = 14)
    {
        ([std::cout](../io/cout.html) << [std::left](../io/manip/left.html)).imbue([std::locale](../locale/locale.html)("en_US.UTF-8"));
     
        for (const auto s : {"Capacity", "Free", "Available", "Use%", "Dir"})
            [std::cout](../io/cout.html) << "│ " << [std::setw](../io/manip/setw.html)(width) << s << ' ';
     
        for ([std::cout](../io/cout.html) << '\n'; auto const& dir : dirs)
        {
            [std::error_code](../error/error_code.html) ec;
            const [std::filesystem::space_info](space_info.html) si = std::filesystem::space(dir, ec);
            for (auto x : {si.capacity, si.free, si.available, disk_usage_percent(si)})
                [std::cout](../io/cout.html) << "│ " << [std::setw](../io/manip/setw.html)(width) << static_cast<[std::intmax_t](../types/integer.html)>(x) << ' ';
            [std::cout](../io/cout.html) << "│ " << dir << '\n';
        }
    }
     
    int main()
    {
        const auto dirs = {"/dev/null", "/tmp", "/home", "/proc", "/null"};
        print_disk_space_info(dirs);
    }

Possible output: 
    
    
    │ Capacity       │ Free           │ Available      │ Use%           │ Dir            
    │ 84,417,331,200 │ 42,732,986,368 │ 40,156,028,928 │ 50             │ /dev/null
    │ 84,417,331,200 │ 42,732,986,368 │ 40,156,028,928 │ 50             │ /tmp
    │ -1             │ -1             │ -1             │ 100            │ /home
    │ 0              │ 0              │ 0              │ 100            │ /proc
    │ -1             │ -1             │ -1             │ 100            │ /null

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/filesystem/space&action=edit&section=6 "Edit section: See also")] See also

[ space_info](space_info.html "cpp/filesystem/space info")(C++17) |  information about free and available space on the filesystem   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/filesystem/dsc_space_info&action=edit)  
---|---
