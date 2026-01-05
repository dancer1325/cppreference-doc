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
**filesystem::is_socket**  
[filesystem::is_symlink](is_symlink.html "cpp/filesystem/is symlink")  
  


Defined in header `[<filesystem>](../header/filesystem.html "cpp/header/filesystem")` |  |   
---|---|---  
bool is_socket( [std::filesystem::file_status](file_status.html) s ) noexcept; |  (1)  |  (since C++17)  
bool is_socket( const [std::filesystem::path](path.html)& p ); |  (2)  |  (since C++17)  
bool is_socket( const [std::filesystem::path](path.html)& p, [std::error_code](../error/error_code.html)& ec ) noexcept; |  (3)  |  (since C++17)  
| |   
  
Checks if the given file status or path corresponds to a named IPC socket, as if determined by the POSIX [S_IFSOCK](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_stat.h.html). 

1) Equivalent to s.type() == file_type::socket.

2,3) Equivalent to is_socket(status(p)) or is_socket(status(p, ec)).

## Contents

  * [1 Parameters](is_socket.html#Parameters)
  * [2 Return value](is_socket.html#Return_value)
  * [3 Exceptions](is_socket.html#Exceptions)
  * [4 Notes](is_socket.html#Notes)
  * [5 Example](is_socket.html#Example)
  * [6 See also](is_socket.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  file status to check   
---|---|---  
p  |  \-  |  path to examine   
ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
  
### Return value

true if the file indicated by p or if the type indicated s refers to a named socket. The non-throwing overload returns false if an error occurs. 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


2,3) Sets a [std::error_code](../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Notes

Named sockets are UNIX domain sockets constructed with [`socket`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/socket.html) and [`bind`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/bind.html) POSIX APIs, which may be used for advanced interprocess communication. In particular, they may be used to transport open file descriptors from one running process to another. 

### Example

Run this code
    
    
    #include <cstdio>
    #include <cstring>
    #include <filesystem>
    #include <fstream>
    #include <iostream>
    #include <sys/socket.h>
    #include <sys/stat.h>
    #include <sys/un.h>
    #include <unistd.h>
     
    namespace fs = std::filesystem;
     
    void demo_status(const fs::path& p, fs::file_status s)
    {
        [std::cout](../io/cout.html) << p;
        // alternative: switch(s.type()) { case fs::file_type::regular: ...}
        if (fs::is_regular_file(s))
            [std::cout](../io/cout.html) << " is a regular file\n";
        if (fs::is_directory(s))
            [std::cout](../io/cout.html) << " is a directory\n";
        if (fs::is_block_file(s))
            [std::cout](../io/cout.html) << " is a block device\n";
        if (fs::is_character_file(s))
            [std::cout](../io/cout.html) << " is a character device\n";
        if (fs::is_fifo(s))
            [std::cout](../io/cout.html) << " is a named IPC pipe\n";
        if (fs::is_socket(s))
            [std::cout](../io/cout.html) << " is a named IPC socket\n";
        if (fs::is_symlink(s))
            [std::cout](../io/cout.html) << " is a symlink\n";
        if (!fs::exists(s))
            [std::cout](../io/cout.html) << " does not exist\n";
    }
     
    int main()
    {
        // create files of different kinds
        fs::create_directory("sandbox");
        fs::create_directory("sandbox/dir");
        [std::ofstream](../io/basic_ofstream.html){"sandbox/file"}; // create regular file
        fs::create_symlink("file", "sandbox/symlink");
     
        mkfifo("sandbox/pipe", 0644);
        sockaddr_un addr;
        addr.sun_family = AF_UNIX;
        [std::strcpy](../string/byte/strcpy.html)(addr.sun_path, "sandbox/sock");
        int fd = socket(PF_UNIX, SOCK_STREAM, 0);
        bind(fd, reinterpret_cast<sockaddr*>(&addr), sizeof addr);
     
        // demo different status accessors
        for (auto it{fs::directory_iterator("sandbox")}; it != fs::directory_iterator(); ++it)
            demo_status(*it, it->symlink_status()); // use cached status from directory entry
        demo_status("/dev/null", fs::status("/dev/null")); // direct calls to status
        demo_status("/dev/sda", fs::status("/dev/sda"));
        demo_status("sandbox/no", fs::status("/sandbox/no"));
     
        // cleanup (prefer std::unique_ptr-based custom deleters)
        close(fd);
        fs::remove_all("sandbox");
    }

Possible output: 
    
    
    "sandbox/file" is a regular file
    "sandbox/dir" is a directory
    "sandbox/pipe" is a named IPC pipe
    "sandbox/sock" is a named IPC socket
    "sandbox/symlink" is a symlink
    "/dev/null" is a character device
    "/dev/sda" is a block device
    "sandbox/no" does not exist

### See also

[ statussymlink_status](status.html "cpp/filesystem/status")(C++17)(C++17) |  determines file attributes  
determines file attributes, checking the symlink target   
(function)   
---|---  
[ file_status](file_status.html "cpp/filesystem/file status")(C++17) |  represents file type and permissions   
(class)   
[ status_known](status_known.html "cpp/filesystem/status known")(C++17) |  checks whether file status is known   
(function)   
[ is_block_file](is_block_file.html "cpp/filesystem/is block file")(C++17) |  checks whether the given path refers to block device   
(function)   
[ is_character_file](is_character_file.html "cpp/filesystem/is character file")(C++17) |  checks whether the given path refers to a character device   
(function)   
[ is_directory](is_directory.html "cpp/filesystem/is directory")(C++17) |  checks whether the given path refers to a directory   
(function)   
[ is_fifo](is_fifo.html "cpp/filesystem/is fifo")(C++17) |  checks whether the given path refers to a named pipe   
(function)   
[ is_other](is_other.html "cpp/filesystem/is other")(C++17) |  checks whether the argument refers to an _other_ file   
(function)   
[ is_regular_file](is_regular_file.html "cpp/filesystem/is regular file")(C++17) |  checks whether the argument refers to a regular file   
(function)   
[ is_symlink](is_symlink.html "cpp/filesystem/is symlink")(C++17) |  checks whether the argument refers to a symbolic link   
(function)   
[ exists](exists.html "cpp/filesystem/exists")(C++17) |  checks whether path refers to existing file system object   
(function)   
[ is_socket](directory_entry/is_socket.html "cpp/filesystem/directory entry/is socket") |  checks whether the directory entry refers to a named IPC socket   
(public member function of `std::filesystem::directory_entry`) 
