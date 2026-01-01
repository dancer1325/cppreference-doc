## Contents

  * [1 Individual vendor compatibility checklists](vendors.html#Individual_vendor_compatibility_checklists)
    * [1.1 GCC (updated 2025-01)](vendors.html#GCC_.28updated_2025-01.29)
    * [1.2 Clang (updated 2025-01)](vendors.html#Clang_.28updated_2025-01.29)
    * [1.3 Apple Clang (updated 2025-01)](vendors.html#Apple_Clang_.28updated_2025-01.29)
    * [1.4 Microsoft Visual Studio (updated 2025-02)](vendors.html#Microsoft_Visual_Studio_.28updated_2025-02.29)
    * [1.5 Intel C++ (updated 2023-01)](vendors.html#Intel_C.2B.2B_.28updated_2023-01.29)
    * [1.6 EDG (updated 2025-01)](vendors.html#EDG_.28updated_2025-01.29)
    * [1.7 Oracle C++ (updated 2017-07)](vendors.html#Oracle_C.2B.2B_.28updated_2017-07.29)
    * [1.8 IBM XL C++ (updated 2018-05)](vendors.html#IBM_XL_C.2B.2B_.28updated_2018-05.29)
    * [1.9 HP aCC](vendors.html#HP_aCC)
    * [1.10 Digital Mars C++](vendors.html#Digital_Mars_C.2B.2B)
    * [1.11 Embarcadero C++](vendors.html#Embarcadero_C.2B.2B)
    * [1.12 Cray (updated 2023-02)](vendors.html#Cray_.28updated_2023-02.29)
    * [1.13 Portland Group (PGI) (updated 2019-01)](vendors.html#Portland_Group_.28PGI.29_.28updated_2019-01.29)
    * [1.14 Nvidia Cuda nvcc (updated 2023-01-12)](vendors.html#Nvidia_Cuda_nvcc_.28updated_2023-01-12.29)
    * [1.15 Texas Instruments (updated 2018-05)](vendors.html#Texas_Instruments_.28updated_2018-05.29)
    * [1.16 Analog Devices (updated 2018-05)](vendors.html#Analog_Devices_.28updated_2018-05.29)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=1 "Edit section: Individual vendor compatibility checklists")] Individual vendor compatibility checklists

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=2 "Edit section: GCC \(updated 2025-01\)")] GCC (updated 2025-01)

  * [C++11 core language support status](https://gcc.gnu.org/projects/cxx-status.html#cxx11) (complete as of 4.8.1, except for [N2670](https://wg21.link/n2670), which is implemented by no compiler and removed in C++23) 
  * [C++11 library support status](https://gcc.gnu.org/onlinedocs/libstdc++/manual/status.html#status.iso.2011) (complete as of 5.1) 
  * [C++14 core language support status](https://gcc.gnu.org/projects/cxx-status.html#cxx14) (complete as of 5.1) 
  * [C++14 library support status](https://gcc.gnu.org/onlinedocs/libstdc++/manual/status.html#status.iso.2014) (complete as of 5.1) 
  * [C++17 core language support status](https://gcc.gnu.org/projects/cxx-status.html#cxx17) (complete as of 7.1) 
  * [C++17 library support status](https://gcc.gnu.org/onlinedocs/libstdc++/manual/status.html#status.iso.2017) (complete as of 12.0) 
  * [C++20 core language support status](https://gcc.gnu.org/projects/cxx-status.html#cxx20) (complete as of 11.0, except part of modules) 
  * [C++20 library support status](https://gcc.gnu.org/onlinedocs/libstdc++/manual/status.html#status.iso.2020) (complete as of 14.0) 
  * [C++23 core language support status](https://gcc.gnu.org/projects/cxx-status.html#cxx23)
  * [C++23 library support status](https://gcc.gnu.org/onlinedocs/libstdc++/manual/status.html#status.iso.2023)
  * [C++26 core language support status](https://gcc.gnu.org/projects/cxx-status.html#cxx26)
  * [Technical Specifications support status](https://gcc.gnu.org/projects/cxx-status.html#tses)
  * [Core language defect report status](https://gcc.gnu.org/projects/cxx-dr-status.html)



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=3 "Edit section: Clang \(updated 2025-01\)")] Clang (updated 2025-01)

  * [Real-time libc++ conformance status](https://github.com/orgs/llvm/projects/31)
  * [C++11 core language support status](https://clang.llvm.org/cxx_status.html#cxx11) (complete as of 3.3) 
  * C++11 library support status (complete as of [2012-07-29](https://github.com/llvm-mirror/libcxx/commit/5fec82dc0db3623546038e4a86baa44f749e554f#diff-c330060c0d4b6fb493c2be0ff80a3f7e)) 
  * [C++14 core language support status](https://clang.llvm.org/cxx_status.html#cxx14) (complete as of 3.4) 
  * [C++14 library support status](https://releases.llvm.org/16.0.0/projects/libcxx/docs/Status/Cxx14.html) (complete as of 3.5) 
  * [C++17 core language support status](https://clang.llvm.org/cxx_status.html#cxx17) (complete as of 5.0) 
  * [C++17 library support status](https://libcxx.llvm.org/Status/Cxx17.html)
  * [C++20 core language support status](https://clang.llvm.org/cxx_status.html#cxx20)
  * [C++20 library support status](https://libcxx.llvm.org/Status/Cxx20.html)
  * [C++23 core language support status](https://clang.llvm.org/cxx_status.html#cxx23)
  * [C++23 library support status](https://libcxx.llvm.org/Status/Cxx23.html)
  * [C++26 core language support status](https://clang.llvm.org/cxx_status.html#cxx26)
  * [C++26 library support status](https://libcxx.llvm.org/Status/Cxx2c.html)
  * [Technical Specifications support status](https://clang.llvm.org/cxx_status.html#ts)
  * [Core language defect report status](https://clang.llvm.org/cxx_dr_status.html)



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=4 "Edit section: Apple Clang \(updated 2025-01\)")] Apple Clang (updated 2025-01)

  * [Xcode toolchain versions on Wikipedia](https://en.wikipedia.org/wiki/Xcode#Toolchain_versions)
  * [Xcode C++ language and C++ standard library support](https://developer.apple.com/xcode/cpp/)
  * [Xcode release notes](https://developer.apple.com/documentation/xcode_release_notes)
  * [C++20/23/26 support status in Xcode 16](https://developer.apple.com/documentation/xcode-release-notes/xcode-16-release-notes)



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=5 "Edit section: Microsoft Visual Studio \(updated 2025-02\)")] Microsoft Visual Studio (updated 2025-02)

  * [Microsoft C/C++ language conformance (since Visual Studio 2015)](https://docs.microsoft.com/en-us/cpp/overview/visual-cpp-language-conformance)
  * [STL Changelog (since Visual Studio 2019 16.5)](https://github.com/microsoft/STL/wiki/Changelog)
  * References for features not included above 
    * [Support For C++11/14/17 Features (Modern C++)](https://learn.microsoft.com/en-us/previous-versions/hh567368\(v=vs.140\)) including C++11 core language features 
    * [Visual C++ What's New 2003 through 2015](https://learn.microsoft.com/en-us/cpp/porting/visual-cpp-what-s-new-2003-through-2015) including C++11 N1913 
    * [C++14/17 Features and STL Fixes in VS “15” Preview 5](https://devblogs.microsoft.com/cppblog/c1417-features-and-stl-fixes-in-vs-15-preview-5/) including C++14 LWG2112, LWG2246 and LWG2285 and C++17 LWG2296 
    * [STL Features and Fixes in VS 2017 15.8](https://devblogs.microsoft.com/cppblog/stl-features-and-fixes-in-vs-2017-15-8/) including C++17 LWG2911 
    * [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](https://learn.microsoft.com/en-us/cpp/overview/cpp-conformance-improvements) including C++23 P2334R1 
    * [CWG 2518 not yet implemented - static_assert in uninstantiated template produces error](https://developercommunity.visualstudio.com/t/CWG-2518-not-yet-implemented---static_as/10554332) including C++23 CWG2518 
    * [MSVC Compiler Language Updates in Visual Studio 2022 version 17.12](https://devblogs.microsoft.com/cppblog/msvc-compiler-language-updates-in-visual-studio-2022-version-17-12/) including C++23 P2128R6 
    * [C++ Language Updates in MSVC in Visual Studio 2022 17.13](https://devblogs.microsoft.com/cppblog/msvc-compiler-updates-in-visual-studio-2022-version-17-13/) including C++23 P0330R8, P0847R7 and P2242R3 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=6 "Edit section: Intel C++ \(updated 2023-01\)")] Intel C++ (updated 2023-01)

  * [C++11 core language support status](https://software.intel.com/en-us/articles/c0x-features-supported-by-intel-c-compiler) (complete as of 15.0) 
  * [C++14 core language support status](https://software.intel.com/en-us/articles/c14-features-supported-by-intel-c-compiler) (functionally complete as of 17.0 - N3664 is an optimization) 
  * [C++17 core language support status](https://software.intel.com/en-us/articles/c17-features-supported-by-intel-c-compiler) (incomplete) 
  * [C++20 core language support status](https://www.intel.com/content/www/us/en/developer/articles/technical/c20-features-supported-by-intel-cpp-compiler.html) (incomplete) 
  * [C++17 features of Intel 19.0 beta](https://software.intel.com/en-us/articles/intel-c-compiler-190-for-linux-release-notes-for-intel-parallel-studio-xe-2019#cpp17)
  * Intel does not ship an implementation of the C++ standard library, except for 
    * [Parallel STL](https://software.intel.com/en-us/get-started-with-pstl) (an implementation of the C++17 standard library algorithms with support for execution policies) 
  * [Intel's compatibility with versions of libstdc++ from GCC](https://charm.cs.illinois.edu/redmine/issues/1560#note-6)



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=7 "Edit section: EDG \(updated 2025-01\)")] EDG (updated 2025-01)

  * [C++11 core language support status](https://www.edg.com/features.html)
  * [C++14 core language support status](https://www.edg.com/cpp14_features.html)
  * [C++17 core language support status](https://www.edg.com/cpp17_features.html)
  * [C++20 core language support status](https://www.edg.com/cpp20_features.html)
  * [C++23 core language support status](https://www.edg.com/cpp23_features.html)
  * [C++26 core language support status](https://www.edg.com/cpp26_features.html)
  * EDG does not ship an implementation of the C++ standard library 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=8 "Edit section: Oracle C++ \(updated 2017-07\)")] Oracle C++ (updated 2017-07)

  * Version number is compiler version, not Oracle Studio version 
  * [C++11 core language support status in 5.13](https://docs.oracle.com/cd/E37069_01/html/E37071/gncix.html)
    * [Missing C++11 support added in 5.14 (page has a typo, and still says 5.13)](https://docs.oracle.com/cd/E60778_01/html/E60742/gkeza.html#scrolltoc)
  * [C++14 features added in 5.14](https://docs.oracle.com/cd/E60778_01/html/E60742/gncix.html#scrolltoc)
    * Full C++14 support added in 5.15. 
  * Oracle ships 4 implementations of the C++ standard library: 
    * libCstd (RogueWave Standard Library version 2), predates C++98 
    * stlport4 (STLport Standard Library version 4.5.3), predates C++03 
    * stdcxx4 (Apache Standard Library version 4), predates C++11 
    * libstdc++ (GCC runtime library, support for C++11 and C++14 depending on release) 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=9 "Edit section: IBM XL C++ \(updated 2018-05\)")] IBM XL C++ (updated 2018-05)

  * IBM XL C++ for Linux 
    * [Core language support status](https://www.ibm.com/support/knowledgecenter/en/SSXVZZ_16.1.0/com.ibm.xlcpp161.lelinux.doc/language_ref/standard_features.html): C++11 complete as of 13.1.6, C++14 partial in 16.1.0 
    * IBM does not ship an implementation of C++ standard library for Linux (uses GNU libstdc++) 
  * IBM XL C++ for AIX 
    * [Core language support status](https://www.ibm.com/support/knowledgecenter/en/SSGH3R_13.1.3/com.ibm.xlcpp1313.aix.doc/language_ref/cpp0x_exts.html): C++11 partial in 13.1.3 and 16.1.0 (xlC frontend), complete in 16.1.0 (xlclang frontend) 
    * IBM ships [a version of Dinkumware library](https://www-01.ibm.com/support/knowledgecenter/SSGH3R_13.1.0/com.ibm.xlcpp131.aix.doc/standlib/header_files.html?lang=en) for AIX with full support for C++ TR1, including <regex>, but no C++11 
    * [IBM XL C/C++ compilers features](https://www.ibm.com/support/pages/ibm-xl-cc-compilers-features)



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=10 "Edit section: HP aCC")] HP aCC

  * [HP aC++ A.06.28 release notes (including C++11 core language features)](https://h20565.www2.hpe.com/hpsc/doc/public/display?sp4ts.oid=4145774&docLocale=en_US&docId=emr_na-c04221956)
  * HP ships a version of RogueWave STL 2.0 implementation of the C++98 standard library 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=11 "Edit section: Digital Mars C++")] Digital Mars C++

  * [C++11 core language support status](https://www.digitalmars.com/ctg/CPP0x-Language-Implementation.html)



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=12 "Edit section: Embarcadero C++")] Embarcadero C++

  * [Language features compliance status](https://docwiki.embarcadero.com/RADStudio/Berlin/en/C%2B%2B11_Language_Features_Compliance_Status) (RAD Studio 10.1 Berlin), including C++11 features supported by legacy and Clang-enhanced compilers (based on Clang 3.3) 
  * [Language features compliance status](https://docwiki.embarcadero.com/RADStudio/Rio/en/Modern_C%2B%2B_Language_Features_Compliance_Status) (RAD Studio 10.3 Rio), including C++11 features supported by legacy compilers and C++11, C++14, and C++17 features supported by the Clang-enhanced compilers (based on Clang 5.0) 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=13 "Edit section: Cray \(updated 2023-02\)")] Cray (updated 2023-02)

  * [Cray C and C++ Reference Manual (8.4)](https://docs.cray.com/books/S-2179-84/S-2179-84.pdf) For version 8.4, claims all of C++14 is supported except alignas 
  * [Cray C and C++ Reference Manual (8.6)](https://pubs.cray.com/content/S-2179/8.6/cray-c-and-c++-reference-manual-s-2179-86/cray-c-and-c++-dialect-use#concept_kgd_fcr_3s) For version 8.6, claims all of C++14 is supported 
  * [Cray C and C++ Reference Manual (9.1)](https://pubs.cray.com/pdf-attachments/attachment?pubId=00761211-DC&attachmentId=pub_00761211-DC.pdf) for version 9.1 doesn't claim support beyond C++14 
  * [HPE Cray Clang C and C++ Quick Reference (14.0) (S-2179)](https://support.hpe.com/hpesc/public/docDisplay?docLocale=en_US&docId=a00123566en_us) Versions from 11 onward (through at least 14) are based on Clang, and are generally expected to have corresponding language support. Features that entail 'interesting' code generation or linking behaviors such as coroutines or modules may lag behind, since the compiler supports generating code for GPUs and other similarly limited devices 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=14 "Edit section: Portland Group \(PGI\) \(updated 2019-01\)")] Portland Group (PGI) (updated 2019-01)

  * [Release notes for 2016](https://www.pgroup.com/doc/pgirn161.pdf) claim C++14 support, except "generalized constexpr and constexpr member functions and implicit const, variable templates, clarifying memory allocation (merged allocation)" 
  * [Release notes for 2018](https://www.pgroup.com/resources/docs/18.1/pdf/pgirn181-x86.pdf)
  * [Reference manual of PGI 19.1](https://www.pgroup.com/resources/docs/19.1/x86/pgi-ref-guide/index.htm)
  * PGI does not ship an implementation of C++ standard library 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=15 "Edit section: Nvidia Cuda nvcc \(updated 2023-01-12\)")] Nvidia Cuda nvcc (updated 2023-01-12)

  * [CUDA C++ Programming Guide (v12.0)](https://docs.nvidia.com/cuda/cuda-c-programming-guide/index.html#c-language-support)
  * All C++17 language features are supported in nvcc version 11.0 and later, subject to restrictions described [here](https://docs.nvidia.com/cuda/cuda-c-programming-guide/index.html#cpp17)
  * All C++20 language features are supported in nvcc version 12.0 and later, subject to restrictions described [here](https://docs.nvidia.com/cuda/cuda-c-programming-guide/index.html#cpp20)
  * NVCC does not ship a C++ standard library implementation 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=16 "Edit section: Texas Instruments \(updated 2018-05\)")] Texas Instruments (updated 2018-05)

  * [cl430 version v18.1.0](https://www.ti.com/lit/ug/slau132r/slau132r.pdf) claims C++14 support 



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/compiler_support/vendors&action=edit&section=17 "Edit section: Analog Devices \(updated 2018-05\)")] Analog Devices (updated 2018-05)

  * [CrossCore Embedded Studio 2.8.0 for SHARC](https://www.analog.com/media/en/dsp-documentation/software-manuals/cces-SharcCompiler-manual.pdf) claims C++11 support 


