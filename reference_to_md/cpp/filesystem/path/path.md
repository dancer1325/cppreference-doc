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
| **path::path**  
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
[path::compare](compare.html "cpp/filesystem/path/compare")  
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
  


path() noexcept; |  (1)  |  (since C++17)  
---|---|---  
path( const path& p ); |  (2)  |  (since C++17)  
path( path&& p ) noexcept; |  (3)  |  (since C++17)  
path( string_type&& source, format fmt = auto_format ); |  (4)  |  (since C++17)  
template< class Source >  
path( const Source& source, format fmt = auto_format ); |  (5)  |  (since C++17)  
template< class InputIt >  
path( InputIt first, InputIt last, format fmt = auto_format ); |  (6)  |  (since C++17)  
template< class Source >  
path( const Source& source, const [std::locale](../../locale/locale.html)& loc, format fmt = auto_format ); |  (7)  |  (since C++17)  
template< class InputIt >  
path( InputIt first, InputIt last, const [std::locale](../../locale/locale.html)& loc, format fmt = auto_format ); |  (8)  |  (since C++17)  
| |   
  
Constructs a new `path` object. 

1) Constructs an empty path.

2) Copy constructor. Constructs a path whose pathname, in both native and generic formats, is the same as that of p.

3) Move constructor. Constructs a path whose pathname, in both native and generic formats, is the same as that of p, p is left in valid but unspecified state.

4-6) Constructs the path from a character sequence (format interpreted as specified by fmt) provided by source (4,5), which is a pointer or an input iterator to a null-terminated character/wide character sequence, an [std::basic_string](../../string/basic_string.html "cpp/string/basic string") or an [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view"), or represented as a pair of input iterators [first, last) (6). Any of the character types char, char8_t, (since C++20)char16_t, char32_t, wchar_t is allowed, and the method of conversion to the native character set depends on the character type used by source. 

    

  * If the source character type is char, the encoding of the source is assumed to be the native narrow encoding (so no conversion takes place on POSIX systems). 



    

  * If the source character type is char8_t, conversion from UTF-8 to native filesystem encoding is used. 


| (since C++20)  
---|---  
  
    

  * If the source character type is char16_t, conversion from UTF-16 to native filesystem encoding is used. 
  * If the source character type is char32_t, conversion from UTF-32 to native filesystem encoding is used. 
  * If the source character type is wchar_t, the input is assumed to be the native wide encoding (so no conversion takes places on Windows).



7,8) Constructs the path from a character sequence (format interpreted as specified by fmt) provided by source (7), which is a pointer or an input iterator to a null-terminated character sequence, an [std::string](../../string/basic_string.html "cpp/string/basic string"), an [std::string_view](../../string/basic_string_view.html "cpp/string/basic string view"), or represented as a pair of input iterators [first, last) (8). The only character type allowed is char. Uses loc to perform the character encoding conversion. If `value_type` is wchar_t, converts from to wide using the [std::codecvt](../../locale/codecvt.html)<wchar_t, char, [std::mbstate_t](../../string/multibyte/mbstate_t.html)> facet of loc. Otherwise, first converts to wide using the [std::codecvt](../../locale/codecvt.html)<wchar_t, char, [std::mbstate_t](../../string/multibyte/mbstate_t.html)> facet and then converts to filesystem native character type using [std::codecvt](../../locale/codecvt.html)<wchar_t,value_type> facet of loc.

(5) and (7) participate in overload resolution only if `Source` and `path` are not the same type, and either: 

  * `Source` is a specialization of [std::basic_string](../../string/basic_string.html "cpp/string/basic string") or [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view"), or 
  * [std::iterator_traits](../../iterator/iterator_traits.html)<[std::decay_t](../../types/decay.html)<Source>>::value_type is valid and denotes a possibly const-qualified encoding character type (char, char8_t, (since C++20)char16_t, char32_t, or wchar_t). 



## Contents

  * [1 Parameters](path.html#Parameters)
  * [2 Exceptions](path.html#Exceptions)
  * [3 Notes](path.html#Notes)
  * [4 Example](path.html#Example)
  * [5 Defect reports](path.html#Defect_reports)
  * [6 See also](path.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  a path to copy   
---|---|---  
source  |  \-  |  [std::basic_string](../../string/basic_string.html "cpp/string/basic string"), [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view"), pointer to a null-terminated character string, or input iterator with a character value type that points to a null-terminated character sequence (the character type must be char for overload (7))   
first, last  |  \-  |  pair of [LegacyInputIterators](../../named_req/InputIterator.html "cpp/named req/InputIterator") that specify a character sequence   
fmt  |  \-  |  enumerator of type [`path::format`](format.html "cpp/filesystem/path/format") which specifies how pathname format is to be interpreted   
loc  |  \-  |  locale that defines encoding conversion to use   
Type requirements   
-`InputIt` must meet the requirements of [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator").   
-The value type of `InputIt` must be one of the character types char, wchar_t, char8_t, (since C++20)char16_t and char32_t to use the overload (6).   
-The value type of `InputIt` must be char to use the overload (8).   
  
### Exceptions

2,4-8) May throw implementation-defined exceptions.

### Notes

For portable pathname generation from Unicode strings, see [`u8path`](u8path.html "cpp/filesystem/path/u8path").  | (until C++20)  
---|---  
`path` constructor supports creation from UTF-8 string when the source is a sequence of char8_t.  | (since C++20)  
  
### Example

Run this code
    
    
    #include <filesystem>
    #include <iostream>
    namespace fs = std::filesystem;
     
    int main()
    {
        fs::path p1 = "/usr/lib/sendmail.cf"; // portable format
        fs::path p2 = "C:\\users\\abcdef\\AppData\\Local\\Temp\\"; // native format
        fs::path p3 = U"D:/猫.txt"; // UTF-32 string
        fs::path p4 = u8"~/狗.txt"; // UTF-8 string
     
        [std::cout](../../io/cout.html) << "p1 = " << p1 << '\n'
                  << "p2 = " << p2 << '\n'
                  << "p3 = " << p3 << '\n'
                  << "p4 = " << p4 << '\n';
    }

Output: 
    
    
    p1 = "/usr/lib/sendmail.cf"
    p2 = "C:\\users\\abcdef\\AppData\\Local\\Temp\\"
    p3 = "D:/猫.txt"
    p4 = "~/狗.txt"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3244](https://cplusplus.github.io/LWG/issue3244) | C++17  | constraint that `Source` cannot be `path` was missing  | added   
  
### See also

[ u8path](u8path.html "cpp/filesystem/path/u8path")(C++17)(deprecated in C++20) |  creates a `path` from a UTF-8 encoded source   
(function)   
---|---
