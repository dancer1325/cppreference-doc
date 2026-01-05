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
  


[`directory_entry`](../directory_entry.html "cpp/experimental/fs/directory entry")

[Template:cpp/experimental/fs/directory entry/navbar content](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/fs/directory_entry/navbar_content&action=edit&redlink=1 "Template:cpp/experimental/fs/directory entry/navbar content \(page does not exist\)")



file_status status() const;  
file_status status( error_code& ec ) const; |  (1)  |  (filesystem TS)  
---|---|---  
file_status symlink_status() const;  
file_status symlink_status( error_code& ec ) const; |  (2)  |  (filesystem TS)  
| |   
  
1) Returns the potentially cached status of the entry, as if determined by a [status](../status.html "cpp/experimental/fs/status") call (symlinks are followed to their targets).

2) Returns the potentially cached status of the entry, as if determined by a [symlink_status](../status.html "cpp/experimental/fs/status") call (symlinks are not followed).

## Contents

  * [1 Parameters](status.html#Parameters)
  * [2 Return value](status.html#Return_value)
  * [3 Exceptions](status.html#Exceptions)
  * [4 Notes](status.html#Notes)
  * [5 Example](status.html#Example)
  * [6 See also](status.html#See_also)

  
---  
  
### Parameters

ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
---|---|---  
  
### Return value

The status of the file referred to by the entry. 

### Exceptions

The overload that does not take an error_code& parameter throws [filesystem_error](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/fs/directory_entry/filesystem_error&action=edit&redlink=1 "cpp/experimental/fs/directory entry/filesystem error \(page does not exist\)") on underlying OS API errors, constructed with p as the first argument and the OS error code as the error code argument. [std::bad_alloc](../../../memory/new/bad_alloc.html) may be thrown if memory allocation fails. The overload taking an error_code& parameter sets it to the OS API error code if an OS API call fails, and executes ec.clear() if no errors occur. This overload has 

[`noexcept`](../../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept

### Notes

The file status information is usually provided as a byproduct of directory iteration, in which case it is cached and may be obtained by these member functions without the cost of an additional system call. During directory iteration, calling `status` is unnecessary and accessors such as `is_directory` should be called with the cached status value, not with a path. 

### Example

Run this code
    
    
    #include <cstdio>
    #include <cstring>
    #include <experimental/filesystem>
    #include <fstream>
    #include <iostream>
    #include <sys/socket.h>
    #include <sys/stat.h>
    #include <sys/un.h>
    #include <unistd.h>
     
    namespace fs = std::experimental::filesystem;
     
    void demo_status(const fs::path& p, fs::file_status s)
    {
        [std::cout](../../../io/cout.html) << p;
        // alternative: switch(s.type()) { case fs::file_type::regular: ... }
        if (fs::is_regular_file(s))
            [std::cout](../../../io/cout.html) << " is a regular file\n";
        if (fs::is_directory(s))
            [std::cout](../../../io/cout.html) << " is a directory\n";
        if (fs::is_block_file(s))
            [std::cout](../../../io/cout.html) << " is a block device\n";
        if (fs::is_character_file(s))
            [std::cout](../../../io/cout.html) << " is a character device\n";
        if (fs::is_fifo(s))
            [std::cout](../../../io/cout.html) << " is a named IPC pipe\n";
        if (fs::is_socket(s))
            [std::cout](../../../io/cout.html) << " is a named IPC socket\n";
        if (fs::is_symlink(s))
            [std::cout](../../../io/cout.html) << " is a symlink\n";
        if (!fs::exists(s))
            [std::cout](../../../io/cout.html) << " does not exist\n";
    }
     
    int main()
    {
        // create files of different kinds
        fs::create_directory("sandbox");
        [std::ofstream](../../../io/basic_ofstream.html)("sandbox/file"); // create regular file
        fs::create_directory("sandbox/dir");
        mkfifo("sandbox/pipe", 0644);
        struct sockaddr_un addr;
        addr.sun_family = AF_UNIX;
        [std::strcpy](../../../string/byte/strcpy.html)(addr.sun_path, "sandbox/sock");
        int fd = socket(PF_UNIX, SOCK_STREAM, 0);
        bind(fd, (struct sockaddr*)&addr, sizeof addr);
        fs::create_symlink("file", "sandbox/symlink");
     
        // demo different status accessors
        for (auto it = fs::directory_iterator("sandbox"); it != fs::directory_iterator(); ++it)
            demo_status(*it, it->symlink_status()); // use cached status from directory entry
        demo_status("dev/null", fs::status("/dev/null")); // direct calls to status
        demo_status("dev/sda", fs::status("/dev/sda"));
        demo_status("sandbox/no", fs::status("/sandbox/no"));
     
        // cleanup
        close(fd);
        fs::remove_all("sandbox");
    }

Possible output: 
    
    
    "sandbox/file" is a regular file
    "sandbox/dir" is a directory
    "sandbox/pipe" is a named IPC pipe
    "sandbox/sock" is a named IPC socket
    "sandbox/symlink" is a symlink
    "dev/null" is a character device
    "dev/sda" is a block device
    "sandbox/no" does not exist

### See also

[ file_status](../file_status.html "cpp/experimental/fs/file status") |  represents file type and permissions   
(class)   
---|---  
[ statussymlink_status](../status.html "cpp/experimental/fs/status") |  determines file attributes  
determines file attributes, checking the symlink target   
(function)   
[ status_known](../status_known.html "cpp/experimental/fs/status known") |  checks whether file status is known   
(function)   
[ is_block_file](../is_block_file.html "cpp/experimental/fs/is block file") |  checks whether the given path refers to block device   
(function)   
[ is_character_file](../is_character_file.html "cpp/experimental/fs/is character file") |  checks whether the given path refers to a character device   
(function)   
[ is_directory](../is_directory.html "cpp/experimental/fs/is directory") |  checks whether the given path refers to a directory   
(function)   
[ is_fifo](../is_fifo.html "cpp/experimental/fs/is fifo") |  checks whether the given path refers to a named pipe   
(function)   
[ is_other](../is_other.html "cpp/experimental/fs/is other") |  checks whether the argument refers to an _other_ file   
(function)   
[ is_regular_file](../is_regular_file.html "cpp/experimental/fs/is regular file") |  checks whether the argument refers to a regular file   
(function)   
[ is_socket](../is_socket.html "cpp/experimental/fs/is socket") |  checks whether the argument refers to a named IPC socket   
(function)   
[ is_symlink](../is_symlink.html "cpp/experimental/fs/is symlink") |  checks whether the argument refers to a symbolic link   
(function) 
