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
  


[`std::filesystem::directory_entry`](../directory_entry.html "cpp/filesystem/directory entry")

Member functions  
---  
[directory_entry::directory_entry](directory_entry.html "cpp/filesystem/directory entry/directory entry")  
Modifiers  
[directory_entry::operator=](operator=.html "cpp/filesystem/directory entry/operator=")  
[directory_entry::assign](assign.html "cpp/filesystem/directory entry/assign")  
[directory_entry::replace_filename](replace_filename.html "cpp/filesystem/directory entry/replace filename")  
[directory_entry::refresh](refresh.html "cpp/filesystem/directory entry/refresh")  
Observers  
[directory_entry::pathdirectory_entry::operator const path&](path.html "cpp/filesystem/directory entry/path")  
[directory_entry::exists](exists.html "cpp/filesystem/directory entry/exists")  
[directory_entry::is_block_file](is_block_file.html "cpp/filesystem/directory entry/is block file")  
[directory_entry::is_character_file](is_character_file.html "cpp/filesystem/directory entry/is character file")  
[directory_entry::is_directory](is_directory.html "cpp/filesystem/directory entry/is directory")  
[directory_entry::is_fifo](is_fifo.html "cpp/filesystem/directory entry/is fifo")  
**directory_entry::is_other**  
[directory_entry::is_regular_file](is_regular_file.html "cpp/filesystem/directory entry/is regular file")  
[directory_entry::is_socket](is_socket.html "cpp/filesystem/directory entry/is socket")  
[directory_entry::is_symlink](is_symlink.html "cpp/filesystem/directory entry/is symlink")  
[directory_entry::file_size](file_size.html "cpp/filesystem/directory entry/file size")  
[directory_entry::hard_link_count](hard_link_count.html "cpp/filesystem/directory entry/hard link count")  
[directory_entry::last_write_time](last_write_time.html "cpp/filesystem/directory entry/last write time")  
[directory_entry::statusdirectory_entry::symlink_status](status.html "cpp/filesystem/directory entry/status")  
[directory_entry::operator==directory_entry::operator!=directory_entry::operator<directory_entry::operator>directory_entry::operator<=directory_entry::operator>=directory_entry::operator<=>](operator_cmp.html "cpp/filesystem/directory entry/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
Non-member functions  
[operator<<](operator_ltlt.html "cpp/filesystem/directory entry/operator ltlt")  
  


bool is_other() const; |  (1)  |  (since C++17)  
---|---|---  
bool is_other( [std::error_code](../../error/error_code.html)& ec ) const noexcept; |  (2)  |  (since C++17)  
| |   
  
Checks whether the pointed-to object is an _other_ file (not a regular file, directory or symlink). Effectively returns: 

1) [std::filesystem::is_other](../is_other.html)(status()).

2) [std::filesystem::is_other](../is_other.html)(status(ec)).

## Contents

  * [1 Parameters](is_other.html#Parameters)
  * [2 Return value](is_other.html#Return_value)
  * [3 Exceptions](is_other.html#Exceptions)
  * [4 Example](is_other.html#Example)
  * [5 See also](is_other.html#See_also)

  
---  
  
### Parameters

ec  |  \-  |  out-parameter for error reporting in the non-throwing overload   
---|---|---  
  
### Return value

true if the referred-to filesystem object is an _other_ file, false otherwise. 

### Exceptions

Any overload not marked `noexcept` may throw [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if memory allocation fails.  


1) Throws [std::filesystem::filesystem_error](../filesystem_error.html "cpp/filesystem/filesystem error") on underlying OS API errors, constructed with p as the first path argument and the OS error code as the error code argument.

2) Sets a [std::error_code](../../error/error_code.html)& parameter to the OS API error code if an OS API call fails, and executes ec.[`clear`](../../error/error_code/clear.html "cpp/error/error code/clear")() if no errors occur.

### Example

Run this code
    
    
    #include <cstdio>
    #include <cstring>
    #include <filesystem>
    #include <fstream>
    #include <functional>
    #include <iostream>
    #include <memory>
    #include <sys/socket.h>
    #include <sys/stat.h>
    #include <sys/un.h>
    #include <unistd.h>
     
    namespace fs = std::filesystem;
     
    void print_entry_type(const [std::filesystem::directory_entry](../directory_entry.html)& entry)
    {
        [std::cout](../../io/cout.html) << entry.path() << ": ";
     
        if (!entry.exists())
            [std::cout](../../io/cout.html) << "does not exist ";
        if (entry.is_block_file())
            [std::cout](../../io/cout.html) << "is a block device ";
        if (entry.is_character_file())
            [std::cout](../../io/cout.html) << "is a character device ";
        if (entry.is_directory())
            [std::cout](../../io/cout.html) << "is a directory ";
        if (entry.is_fifo())
            [std::cout](../../io/cout.html) << "is a named IPC pipe ";
        if (entry.is_regular_file())
            [std::cout](../../io/cout.html) << "is a regular file ";
        if (entry.is_socket())
            [std::cout](../../io/cout.html) << "is a named IPC socket ";
        if (entry.is_symlink())
            [std::cout](../../io/cout.html) << "(a symlink)";
        if (entry.is_other())
            [std::cout](../../io/cout.html) << "(an `other` file)";
     
        [std::cout](../../io/cout.html) << '\n';
    }
     
    template<typename Type, typename Fun>
    class scoped_cleanup
    {
        [std::unique_ptr](../../memory/unique_ptr.html)<Type, [std::function](../../utility/functional/function.html)<void(const Type*)>> u;
     
    public:
        scoped_cleanup(Type* ptr, Fun fun) : u{ptr, std::move(fun)} {}
    };
     
    int main()
    {
        // Create files of different kinds.
        [std::filesystem::current_path](../current_path.html)(fs::temp_directory_path());
        const [std::filesystem::path](../path.html) sandbox{"sandbox"};
        scoped_cleanup remove_all_at_exit{&sandbox, [](const fs::path* p)
        {
            [std::cout](../../io/cout.html) << "cleanup: remove_all(" << *p << ")\n";
            fs::remove_all(*p);
        }};
        [std::filesystem::create_directory](../create_directory.html)(sandbox);
        [std::ofstream](../../io/basic_ofstream.html){sandbox/"file"}; // Creates a regular file
        [std::filesystem::create_directory](../create_directory.html)(sandbox/"dir");
     
        mkfifo((sandbox/"pipe").string().data(), 0644);
        struct sockaddr_un addr; addr.sun_family = AF_UNIX;
     
        [std::strcpy](../../string/byte/strcpy.html)(addr.sun_path, (sandbox/"sock").string().data());
        int fd{socket(PF_UNIX, SOCK_STREAM, 0)};
        scoped_cleanup close_socket_at_exit{&fd, [](const int* f)
        {
            [std::cout](../../io/cout.html) << "cleanup: close socket #" << *f << '\n';
            close(*f);
        }};
        bind(fd, reinterpret_cast<sockaddr*>([std::addressof](../../memory/addressof.html)(addr)), sizeof addr);
     
        fs::create_symlink("file", sandbox/"symlink");
     
        for ([std::filesystem::directory_entry](../directory_entry.html) entry: fs::directory_iterator(sandbox))
            print_entry_type(entry);
     
        // Request file system objects status directly:
        for (const char* str : {"/dev/null", "/dev/cpu", "/usr/include/c++",
                                "/usr/include/asm", "/usr/include/time.h"})
            print_entry_type(fs::directory_entry{str});
     
    } // Cleanup via scoped_cleanup objects

Possible output: 
    
    
    "sandbox/symlink": is a regular file (a symlink) 
    "sandbox/sock": is a named IPC socket (an `other` file) 
    "sandbox/pipe": is a named IPC pipe (an `other` file) 
    "sandbox/dir": is a directory 
    "sandbox/file": is a regular file 
    "/dev/null": is a character device (an `other` file) 
    "/dev/cpu": does not exist 
    "/usr/include/c++": is a directory 
    "/usr/include/asm": is a directory (a symlink) 
    "/usr/include/time.h": is a regular file 
    cleanup: close socket #3
    cleanup: remove_all("sandbox")

### See also

[ is_other](../is_other.html "cpp/filesystem/is other")(C++17) |  checks whether the argument refers to an _other_ file   
(function)   
---|---
