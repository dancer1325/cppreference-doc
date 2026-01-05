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
**filesystem::file_size**  
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
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
[std::uintmax_t](../types/integer.html) file_size( const [std::filesystem::path](path.html)& p ); |  (1)  |  (since C++17)  
[std::uintmax_t](../types/integer.html) file_size( const [std::filesystem::path](path.html)& p,  
[std::error_code](../error/error_code.html)& ec ) noexcept; |  (2)  |  (since C++17)  
| |   
  
If p does not exist, reports an error. 

For a regular file p, returns the size determined as if by reading the `st_size` member of the structure obtained by POSIX [`stat`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/stat.html) (symlinks are followed). 

The result of attempting to determine the size of a directory (as well as any other file that is not a regular file or a symlink) is implementation-defined. 

The non-throwing overload returns static_cast<[std::uintmax_t](../types/integer.html)>(-1) on errors. 

## Contents

  * [1 Parameters](file_size.html#Parameters)
  * [2 Return value](file_size.html#Return_value)
  * [3 Exceptions](file_size.html#Exceptions)
  * [4 Example](file_size.html#Example)
  * [5 See also](file_size.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  path to examine   
---|---|---  
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

The size of the file, in bytes. 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1) Throws [std::filesystem::filesystem_error](filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Example

Run this code
    
    
    #include <cmath>
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    namespace fs = std::filesystem;
     
    struct HumanReadable
    {
        [std::uintmax_t](../types/integer.html) size{};
     
    private:
        friend [std::ostream](../io/basic_ostream.html)& operator<<([std::ostream](../io/basic_ostream.html)& os, HumanReadable hr)
        {
            int o{};
            double mantissa = hr.size;
            for (; mantissa >= 1024.; mantissa /= 1024., ++o);
            os << [std::ceil](../numeric/math/ceil.html)(mantissa * 10.) / 10. << "BKMGTPE"[o];
            return o ? os << "B (" << hr.size << ')' : os;
        }
    };
     
    int main(int, char const* argv[])
    {
        fs::path example = "example.bin";
        fs::path p = fs::current_path() / example;
        [std::ofstream](../io/basic_ofstream.html)(p).put('a'); // create file of size 1
        [std::cout](../io/cout.html) << example << " size = " << fs::file_size(p) << '\n';
        fs::remove(p);
     
        p = argv[0];
        [std::cout](../io/cout.html) << p << " size = " << HumanReadable{fs::file_size(p)} << '\n';
     
        try
        {
            [std::cout](../io/cout.html) << "Attempt to get size of a directory:\n";
            [[maybe_unused]] auto x_x = fs::file_size("/dev");
        }
        catch (fs::filesystem_error& e)
        {
            [std::cout](../io/cout.html) << e.what() << '\n';
        }
     
        for ([std::error_code](../error/error_code.html) ec; fs::path bin : {"cat", "mouse"})
        {
            bin = "/bin"/bin;
            if (const [std::uintmax_t](../types/integer.html) size = fs::file_size(bin, ec); ec)
                [std::cout](../io/cout.html) << bin << " : " << ec.message() << '\n';
            else
                [std::cout](../io/cout.html) << bin << " size = " << HumanReadable{size} << '\n';
        }
    }

Possible output: 
    
    
    "example.bin" size = 1
    "./a.out" size = 22KB (22512)
    Attempt to get size of a directory:
    filesystem error: cannot get file size: Is a directory [/dev]
    "/bin/cat" size = 50.9KB (52080)
    "/bin/mouse" : No such file or directory

### See also

[ resize_file](resize_file.html "cpp/filesystem/resize file")(C++17) |  changes the size of a regular file by truncation or zero-fill   
(function)   
---|---  
[ space](space.html "cpp/filesystem/space")(C++17) |  determines available free space on the file system   
(function)   
[ file_size](directory_entry/file_size.html "cpp/filesystem/directory entry/file size") |  returns the size of the file to which the directory entry refers   
(public member function of `std::filesystem::directory_entry`) 
