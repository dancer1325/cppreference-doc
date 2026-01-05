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
  


[`std::filesystem::path`](../path.html "cpp/filesystem/path")

[Member types](../path.html#Member_types "cpp/filesystem/path")  
---  
[Member constants](../path.html#Member_constants "cpp/filesystem/path")  
[path::native_formatpath::generic_formatpath::auto_format](format.html "cpp/filesystem/path/format")  
[Member functions](../path.html#Member_functions "cpp/filesystem/path")  
| [path::path](path.html "cpp/filesystem/path/path")  
---  
[path::~path](~path.html "cpp/filesystem/path/~path")  
[path::operator=](operator=.html "cpp/filesystem/path/operator=")  
[path::assign](assign.html "cpp/filesystem/path/assign")  
[path::appendpath::operator/=](append.html "cpp/filesystem/path/append")  
[path::concatpath::operator+=](concat.html "cpp/filesystem/path/concat")  
[path::clear](clear.html "cpp/filesystem/path/clear")  
[path::make_preferred](make_preferred.html "cpp/filesystem/path/make preferred")  
[path::remove_filename](remove_filename.html "cpp/filesystem/path/remove filename")  
[path::replace_filename](replace_filename.html "cpp/filesystem/path/replace filename")  
[path::replace_extension](replace_extension.html "cpp/filesystem/path/replace extension")` `  
[path::swap](swap.html "cpp/filesystem/path/swap")  
**path::compare**  
[path::beginpath::end](begin.html "cpp/filesystem/path/begin")  
  
| [path::c_strpath::nativepath::operator string_type](native.html "cpp/filesystem/path/native")  
---  
[path::stringpath::u8stringpath::u16stringpath::u32stringpath::wstring](string.html "cpp/filesystem/path/string")  
[path::generic_stringpath::generic_u8stringpath::generic_u16stringpath::generic_u32stringpath::generic_wstring](generic_string.html "cpp/filesystem/path/generic string")  
[path::lexically_normalpath::lexically_relativepath::lexically_proximate](lexically_normal.html "cpp/filesystem/path/lexically normal")  
  
  
  
[Path decomposition](../path.html#Decomposition "cpp/filesystem/path")  
| [path::root_name](root_name.html "cpp/filesystem/path/root name")  
---  
[path::root_directory](root_directory.html "cpp/filesystem/path/root directory")  
[path::root_path](root_path.html "cpp/filesystem/path/root path")  
[path::relative_path](relative_path.html "cpp/filesystem/path/relative path")  
[path::parent_path](parent_path.html "cpp/filesystem/path/parent path")  
[path::filename](filename.html "cpp/filesystem/path/filename")  
[path::stem](stem.html "cpp/filesystem/path/stem")  
[path::extension](extension.html "cpp/filesystem/path/extension")  
[path::empty](empty.html "cpp/filesystem/path/empty")  
  
  
  
| [path::has_root_pathpath::has_root_namepath::has_root_directorypath::has_relative_pathpath::has_parent_pathpath::has_filenamepath::has_stempath::has_extension](has_path.html "cpp/filesystem/path/has path")  
---  
[path::is_absolutepath::is_relative](is_absrel.html "cpp/filesystem/path/is absrel")  
  
[Non-member functions](../path.html#Non-member_functions "cpp/filesystem/path")  
| [operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/filesystem/path/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
---  
  
| [operator/](operator_slash.html "cpp/filesystem/path/operator slash")  
---  
[operator<<operator>>](operator_ltltgtgt.html "cpp/filesystem/path/operator ltltgtgt")  
[swap(std::filesystem::path)](swap2.html "cpp/filesystem/path/swap2")  
[hash_value](hash_value.html "cpp/filesystem/path/hash value")  
[u8path](u8path.html "cpp/filesystem/path/u8path")  
  
[Helper classes](../path.html#Helper_classes "cpp/filesystem/path")  
| [hash<std::filesystem::path>](hash.html "cpp/filesystem/path/hash")  
---  
  
| [formatter<std::filesystem::path>](formatter.html "cpp/filesystem/path/formatter")(C++26)  
---  
  


int compare( const path& p ) const noexcept; |  (1)  |  (since C++17)  
---|---|---  
int compare( const string_type& str ) const;  
int compare( [std::basic_string_view](../../string/basic_string_view.html)<value_type> str ) const; |  (2)  |  (since C++17)  
int compare( const value_type* s ) const; |  (3)  |  (since C++17)  
| |   
  
Compares the lexical representations of the path and another path. 

1) If root_name().native().compare(p.root_name().native()) is nonzero, returns that value. 

Otherwise, if has_root_directory() != p.has_root_directory(), returns a value less than zero if [`has_root_directory()`](has_path.html "cpp/filesystem/path/has path") is false and a value greater than zero otherwise.

Otherwise returns a value less than, equal to or greater than ​0​ if the relative portion of the path ([`relative_path()`](relative_path.html "cpp/filesystem/path/relative path")) is respectively lexicographically less than, equal to or greater than the relative portion of p (p.relative_path()). Comparison is performed element-wise, as if by iterating both paths from [`begin()`](begin.html "cpp/filesystem/path/begin") to [`end()`](begin.html "cpp/filesystem/path/begin") and comparing the result of [`native()`](native.html "cpp/filesystem/path/native") for each element.

2) Equivalent to compare(path(str)).

3) Equivalent to compare(path(s)).

## Contents

  * [1 Parameters](compare.html#Parameters)
  * [2 Return value](compare.html#Return_value)
  * [3 Exceptions](compare.html#Exceptions)
  * [4 Notes](compare.html#Notes)
  * [5 Example](compare.html#Example)
  * [6 Defect reports](compare.html#Defect_reports)
  * [7 See also](compare.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  a path to compare to   
---|---|---  
str  |  \-  |  a string or string view representing path to compare to   
s  |  \-  |  a null-terminated string representing path to compare to   
  
### Return value

A value less than ​0​ if the path is lexicographically less than the given path. 

A value equal to ​0​ if the path is lexicographically equal to the given path. 

A value greater than ​0​ if the path is lexicographically greater than the given path. 

### Exceptions

2,3) May throw implementation-defined exceptions.

### Notes

For two-way comparisons, [binary operators](operator_cmp.html "cpp/filesystem/path/operator cmp") may be more suitable. 

### Example

Run this code
    
    
    #include <filesystem>
    #include <iostream>
    #include <string_view>
    namespace fs = std::filesystem;
     
    void demo(fs::path p1, fs::path p2, [std::string_view](../../string/basic_string_view.html) msg)
    {
        [std::cout](../../io/cout.html) << p1;
        const int rc = p1.compare(p2); 
        if (rc < 0)
            [std::cout](../../io/cout.html) << " < ";
        else if (rc > 0)
            [std::cout](../../io/cout.html) << " > ";
        else
            [std::cout](../../io/cout.html) << " == ";
        [std::cout](../../io/cout.html) << p2 << " \t: " << msg << '\n';
    }
     
    int main()
    {
        demo("/a/b/", "/a/b/", "simple");
        demo("/a/b/", "/a/b/c", "simple");
        demo("/a/b/../b", "/a/b", "no canonical conversion");
        demo("/a/b", "/a/b/.", "no canonical conversion");
        demo("/a/b/", "a/c", "absolute paths order after relative ones");
    }

Output: 
    
    
    "/a/b/" == "/a/b/"      : simple
    "/a/b/" < "/a/b/c"	: simple
    "/a/b/../b" > "/a/b"	: no canonical conversion
    "/a/b" < "/a/b/."	: no canonical conversion
    "/a/b/" > "a/c"	        : absolute paths order after relative ones

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2936](https://cplusplus.github.io/LWG/issue2936) | C++17  | compared all path elements directly  | root name and root directory handled separately   
  
### See also

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/filesystem/path/operator cmp")(C++17)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++17)(until C++20)(C++20) |  lexicographically compares two paths   
(function)   
---|---
