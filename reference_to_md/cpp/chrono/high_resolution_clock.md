
  


[Date and time library](../chrono.html "cpp/chrono")

| [Time point](../chrono.html#Time_point "cpp/chrono")  
---  
[time_point](time_point.html "cpp/chrono/time point")(C++11)  
[clock_time_conversion](clock_time_conversion.html "cpp/chrono/clock time conversion")(C++20)` `  
[clock_cast](clock_cast.html "cpp/chrono/clock cast")(C++20)  
[Duration](../chrono.html#Duration "cpp/chrono")  
[duration](duration.html "cpp/chrono/duration")(C++11)  
[Clocks](../chrono.html#Clocks "cpp/chrono")  
[system_clock](system_clock.html "cpp/chrono/system clock")(C++11)  
[steady_clock](steady_clock.html "cpp/chrono/steady clock")(C++11)  
[is_clock](is_clock.html "cpp/chrono/is clock")(C++20)  
[utc_clock](utc_clock.html "cpp/chrono/utc clock")(C++20)  
[tai_clock](tai_clock.html "cpp/chrono/tai clock")(C++20)  
**high_resolution_clock**(C++11)  
[gps_clock](gps_clock.html "cpp/chrono/gps clock")(C++20)  
[file_clock](file_clock.html "cpp/chrono/file clock")(C++20)  
[local_t](local_t.html "cpp/chrono/local t")(C++20)  
[Time of day](../chrono.html#Time_of_day "cpp/chrono")  
[is_amis_pm](hour_fun.html "cpp/chrono/hour fun")(C++20)(C++20)  
[make12make24](hour_fun.html "cpp/chrono/hour fun")(C++20)(C++20)  
[hh_mm_ss](hh_mm_ss.html "cpp/chrono/hh mm ss")(C++20)  
  
| [Calendar](../chrono.html#Calendar "cpp/chrono")  
---  
[day](day.html "cpp/chrono/day")(C++20)  
[month](month.html "cpp/chrono/month")(C++20)  
[year](year.html "cpp/chrono/year")(C++20)  
[weekday](weekday.html "cpp/chrono/weekday")(C++20)  
[operator/](operator_slash.html "cpp/chrono/operator slash")(C++20)  
[year_month_day](year_month_day.html "cpp/chrono/year month day")(C++20)  
[year_month_day_last](year_month_day_last.html "cpp/chrono/year month day last")(C++20)  
[year_month_weekday](year_month_weekday.html "cpp/chrono/year month weekday")(C++20)  
[year_month_weekday_last](year_month_weekday_last.html "cpp/chrono/year month weekday last")(C++20)` `  
[weekday_indexed](weekday_indexed.html "cpp/chrono/weekday indexed")(C++20)  
[weekday_last](weekday_last.html "cpp/chrono/weekday last")(C++20)  
[month_day](month_day.html "cpp/chrono/month day")(C++20)  
[month_day_last](month_day_last.html "cpp/chrono/month day last")(C++20)  
[month_weekday](month_weekday.html "cpp/chrono/month weekday")(C++20)  
[month_weekday_last](month_weekday_last.html "cpp/chrono/month weekday last")(C++20)  
[year_month](year_month.html "cpp/chrono/year month")(C++20)  
[last_speclast](last_spec.html "cpp/chrono/last spec")(C++20)(C++20)  
[`chrono` I/O](../chrono.html#chrono_I.2FO "cpp/chrono")  
[parse](parse.html "cpp/chrono/parse")(C++20)  
  
  
  
| [Time zone](../chrono.html#Time_zone "cpp/chrono")  
---  
[tzdb](tzdb.html "cpp/chrono/tzdb")(C++20)  
[tzdb_list](tzdb_list.html "cpp/chrono/tzdb list")(C++20)  
[get_tzdbget_tzdb_listreload_tzdbremote_version](tzdb_functions.html "cpp/chrono/tzdb functions")(C++20)(C++20)(C++20)(C++20)  
[sys_info](sys_info.html "cpp/chrono/sys info")(C++20)  
[local_info](local_info.html "cpp/chrono/local info")(C++20)  
[nonexistent_local_time](nonexistent_local_time.html "cpp/chrono/nonexistent local time")(C++20)  
[ambiguous_local_time](ambiguous_local_time.html "cpp/chrono/ambiguous local time")(C++20)  
[locate_zone](locate_zone.html "cpp/chrono/locate zone")(C++20)  
[current_zone](current_zone.html "cpp/chrono/current zone")(C++20)  
[time_zone](time_zone.html "cpp/chrono/time zone")(C++20)  
[choose](choose.html "cpp/chrono/choose")(C++20)  
[zoned_traits](zoned_traits.html "cpp/chrono/zoned traits")(C++20)  
[zoned_time](zoned_time.html "cpp/chrono/zoned time")(C++20)  
[time_zone_link](time_zone_link.html "cpp/chrono/time zone link")(C++20)  
[leap_second](leap_second.html "cpp/chrono/leap second")(C++20)  
[leap_second_info](utc_clock/leap_second_info.html "cpp/chrono/utc clock/leap second info")(C++20)  
[get_leap_second_info](utc_clock/get_leap_second_info.html "cpp/chrono/utc clock/get leap second info")(C++20)  
[C-style date and time](c.html "cpp/chrono/c")  
  


**`std::chrono::high_resolution_clock`**

Member functions  
---  
[high_resolution_clock::now](high_resolution_clock/now.html "cpp/chrono/high resolution clock/now")  
  


Defined in header `[<chrono>](../header/chrono.html "cpp/header/chrono")` |  |   
---|---|---  
class high_resolution_clock; |  |  (since C++11)  
| |   
  
Class `std::chrono::high_resolution_clock` represents the clock with the smallest tick period provided by the implementation. It may be an alias of [std::chrono::system_clock](system_clock.html "cpp/chrono/system clock") or [std::chrono::steady_clock](steady_clock.html "cpp/chrono/steady clock"), or a third, independent clock. 

`std::chrono::high_resolution_clock` meets the requirements of [TrivialClock](../named_req/TrivialClock.html "cpp/named req/TrivialClock"). 

## Contents

  * [1 Member types](high_resolution_clock.html#Member_types)
  * [2 Member constants](high_resolution_clock.html#Member_constants)
  * [3 Member functions](high_resolution_clock.html#Member_functions)
  * [4 Notes](high_resolution_clock.html#Notes)
  * [5 See also](high_resolution_clock.html#See_also)
  * [6 External links](high_resolution_clock.html#External_links)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`rep` |  arithmetic type representing the number of ticks in the clock's duration   
`period` |  a [std::ratio](../numeric/ratio/ratio.html "cpp/numeric/ratio/ratio") type representing the tick period of the clock, in seconds   
`duration` |  [std::chrono::duration](duration.html)<rep, period>  
`time_point` |  [std::chrono::time_point](time_point.html)<std::chrono::high_resolution_clock>  
  
### Member constants

constexpr bool is_steady[static] |  true if the time between ticks is always constant, i.e. calls to [`now()`](high_resolution_clock/now.html "cpp/chrono/high resolution clock/now") return values that increase monotonically even in case of some external clock adjustment, otherwise false   
(public static member constant)  
---|---  
  
### Member functions

[ now](high_resolution_clock/now.html "cpp/chrono/high resolution clock/now")[static] |  returns a [std::chrono::time_point](time_point.html "cpp/chrono/time point") representing the current value of the clock   
(public static member function)  
---|---  
  
### Notes

There has been some controversy around the use of `high_resolution_clock`. Howard Hinnant, who claims to have introduced `high_resolution_clock` to the language, stated in 2016 on the [ISO C++ Standard - Discussion mailing list](https://lists.isocpp.org/mailman/listinfo.cgi/std-discussion) that he was in favor of deprecating it. His rationale was that, because the standard allows for it to be an alias for [std::chrono::steady_clock](steady_clock.html "cpp/chrono/steady clock") or [std::chrono::system_clock](system_clock.html "cpp/chrono/system clock"), its use adds uncertainty to a program without benefit. However, other participants in the thread spoke out its favor, for instance on the basis that, because neither [std::chrono::steady_clock](steady_clock.html "cpp/chrono/steady clock") nor [std::chrono::system_clock](system_clock.html "cpp/chrono/system clock") come with any particular resolution guarantees, `high_resolution_clock` serves a useful role by giving the vendor an opportunity to supply the platform's highest-resolution clock, when neither its [std::chrono::steady_clock](steady_clock.html "cpp/chrono/steady clock") nor its [std::chrono::system_clock](system_clock.html "cpp/chrono/system clock") would be that. 

It is often just an alias for [std::chrono::steady_clock](steady_clock.html "cpp/chrono/steady clock") or [std::chrono::system_clock](system_clock.html "cpp/chrono/system clock"), but which one it is depends on the library or configuration. When it is a `system_clock`, it is not monotonic (e.g., the time can go backwards). For example, as of 2023, libstdc++ has it aliased to `system_clock` "until higher-than-nanosecond definitions become feasible"[[1]](high_resolution_clock.html#cite_note-1), MSVC has it as `steady_clock`[[2]](high_resolution_clock.html#cite_note-2), and libc++ uses `steady_clock` when the C++ standard library implementation supports a monotonic clock and `system_clock` otherwise[[3]](high_resolution_clock.html#cite_note-3). 

### See also

[ system_clock](system_clock.html "cpp/chrono/system clock")(C++11) |  wall clock time from the system-wide realtime clock   
(class)  
---|---  
[ steady_clock](steady_clock.html "cpp/chrono/steady clock")(C++11) |  monotonic clock that will never be adjusted   
(class)  
  
### External links

  1. [↑](high_resolution_clock.html#cite_ref-1) [libstdc++ `<chrono.h>`](https://github.com/gcc-mirror/gcc/blob/63663e4e69527b308687c63bacb0cc038b386593/libstdc%2B%2B-v3/include/bits/chrono.h#L1285)
  2. [↑](high_resolution_clock.html#cite_ref-2) [MSVC `high_resolution_clock`](https://learn.microsoft.com/en-us/cpp/standard-library/high-resolution-clock-struct?view=msvc-170)
  3. [↑](high_resolution_clock.html#cite_ref-3) [libc++ `<high_resolution_clock.h>`](https://github.com/llvm/llvm-project/blob/aa97f6b4947e599e17e900aebd511d8d497c3be9/libcxx/include/__chrono/high_resolution_clock.h#L26)

  
---
