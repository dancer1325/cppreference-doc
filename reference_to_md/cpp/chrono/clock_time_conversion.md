
  


[Date and time library](../chrono.html "cpp/chrono")

| [Time point](../chrono.html#Time_point "cpp/chrono")  
---  
[time_point](time_point.html "cpp/chrono/time point")(C++11)  
**clock_time_conversion**(C++20)` `  
[clock_cast](clock_cast.html "cpp/chrono/clock cast")(C++20)  
[Duration](../chrono.html#Duration "cpp/chrono")  
[duration](duration.html "cpp/chrono/duration")(C++11)  
[Clocks](../chrono.html#Clocks "cpp/chrono")  
[system_clock](system_clock.html "cpp/chrono/system clock")(C++11)  
[steady_clock](steady_clock.html "cpp/chrono/steady clock")(C++11)  
[is_clock](is_clock.html "cpp/chrono/is clock")(C++20)  
[utc_clock](utc_clock.html "cpp/chrono/utc clock")(C++20)  
[tai_clock](tai_clock.html "cpp/chrono/tai clock")(C++20)  
[high_resolution_clock](high_resolution_clock.html "cpp/chrono/high resolution clock")(C++11)  
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
  


Defined in header `[<chrono>](../header/chrono.html "cpp/header/chrono")` |  |   
---|---|---  
template< class Dest, class Source >  
struct clock_time_conversion {}; |  |  (since C++20)  
| |   
  
`std::chrono::clock_time_conversion` is a trait that specifies how to convert a [std::chrono::time_point](time_point.html "cpp/chrono/time point") of the `Source` clock to that of the `Dest` clock. It does so by providing a const-callable `operator()` that accepts an argument of type [std::chrono::time_point](time_point.html)<Source, Duration> and returns a [std::chrono::time_point](time_point.html)<Dest, OtherDuration> that represents an equivalent point in time. The duration of the returned time point is computed from the source duration in a manner that varies for each specialization. `clock_time_conversion` is normally only used indirectly, via std::chrono::clock_cast. 

A program may specialize `clock_time_conversion` if at least one of the template parameters is a user-defined clock type. 

The primary template is an empty struct. The standard defines the following specializations: 

template< class Clock >  
struct clock_time_conversion<Clock, Clock>; |  (1)  |  (since C++20)  
---|---|---  
template<>  
struct clock_time_conversion<[std::chrono::system_clock](system_clock.html), [std::chrono::system_clock](system_clock.html)>; |  (2)  |  (since C++20)  
template<>  
struct clock_time_conversion<[std::chrono::utc_clock](utc_clock.html), [std::chrono::utc_clock](utc_clock.html)>; |  (3)  |  (since C++20)  
template<>  
struct clock_time_conversion<[std::chrono::system_clock](system_clock.html), [std::chrono::utc_clock](utc_clock.html)>; |  (4)  |  (since C++20)  
template<>  
struct clock_time_conversion<[std::chrono::utc_clock](utc_clock.html), [std::chrono::system_clock](system_clock.html)>; |  (5)  |  (since C++20)  
template< class Clock >  
struct clock_time_conversion<Clock, [std::chrono::system_clock](system_clock.html)>; |  (6)  |  (since C++20)  
template< class Clock >  
struct clock_time_conversion<[std::chrono::system_clock](system_clock.html), Clock>; |  (7)  |  (since C++20)  
template< class Clock >  
struct clock_time_conversion<Clock, [std::chrono::utc_clock](utc_clock.html)>; |  (8)  |  (since C++20)  
template< class Clock >  
struct clock_time_conversion<[std::chrono::utc_clock](utc_clock.html), Clock>; |  (9)  |  (since C++20)  
| |   
  
1-3) Identity conversion: `operator()` returns a copy of the argument.

4,5) Conversions between std::chrono::sys_time and std::chrono::utc_time: `operator()` calls std::chrono::utc_clock::to_sys and std::chrono::utc_clock::from_sys, respectively.

6,7) Conversions to and from std::chrono::sys_time when `Clock` supports `from_sys` and `to_sys`: `operator()` calls Clock::to_sys and Clock::from_sys, respectively.

8,9) Conversions to and from std::chrono::utc_time when `Clock` supports `from_utc` and `to_utc`: `operator()` calls Clock::to_utc and Clock::from_utc, respectively.

## Contents

  * [1 Member functions](clock_time_conversion.html#Member_functions)
  * [2 std::chrono::clock_time_conversion::operator()](clock_time_conversion.html#std::chrono::clock_time_conversion::operator.28.29)
    * [2.1 Parameters](clock_time_conversion.html#Parameters)
    * [2.2 Return value](clock_time_conversion.html#Return_value)
    * [2.3 See also](clock_time_conversion.html#See_also)

  
---  
  
### Member functions

Each specialization has an implicitly-declared default constructor, copy constructor, move constructor, copy assignment operator, move assignment operator, and destructor. 

##  std::chrono::clock_time_conversion::operator()

template< class Duration >  
[std::chrono::time_point](time_point.html)<Clock, Duration>  
operator()( const [std::chrono::time_point](time_point.html)<Clock, Duration>& t ) const; |  (1)  |  (member of specialization (1))  
---|---|---  
template< class Duration >  
[std::chrono::sys_time](system_clock.html)<Duration>  
operator()( const [std::chrono::sys_time](system_clock.html)<Duration> & t ) const; |  (2)  |  (member of specialization (2))  
template< class Duration >  
[std::chrono::utc_time](utc_clock.html)<Duration>  
operator()( const [std::chrono::utc_time](utc_clock.html)<Duration>& t ) const; |  (3)  |  (member of specialization (3))  
template< class Duration >  
[std::chrono::sys_time](system_clock.html)<Duration>  
operator()( const [std::chrono::utc_time](utc_clock.html)<Duration>& t ) const; |  (4)  |  (member of specialization (4))  
template< class Duration >  
[std::chrono::utc_time](utc_clock.html)<Duration>  
operator()( const [std::chrono::sys_time](system_clock.html)<Duration>& t ) const; |  (5)  |  (member of specialization (5))  
template< class Duration >  
auto operator()( const [std::chrono::sys_time](system_clock.html)<Duration>& t ) const  
-> decltype(Clock::from_sys(t)); |  (6)  |  (member of specialization (6))  
template< class Duration >  
auto operator()( const [std::chrono::time_point](time_point.html)<SourceClock, Duration>& t ) const  
-> decltype(Clock::to_sys(t)); |  (7)  |  (member of specialization (7))  
template< class Duration >  
auto operator()( const [std::chrono::utc_time](utc_clock.html)<Duration>& t ) const  
-> decltype(Clock::from_utc(t)); |  (8)  |  (member of specialization (8))  
template< class Duration >  
auto operator()( const [std::chrono::time_point](time_point.html)<Clock, Duration>& t ) const  
-> decltype(Clock::to_utc(t)); |  (9)  |  (member of specialization (9))  
| |   
  
Converts the argument [std::chrono::time_point](time_point.html "cpp/chrono/time point") to the destination clock. 

1-3) Identity conversion. Returns `t` unchanged.

4) Returns [std::chrono::utc_clock::to_sys](utc_clock/to_sys.html)(t).

5) Returns [std::chrono::utc_clock::from_sys](utc_clock/from_sys.html)(t).

6) Returns Clock::from_sys(t). This overload participates in overload resolution only if the expression Clock::from_sys(t) is well-formed. The program is ill-formed if Clock::from_sys(t) does not return [std::chrono::time_point](time_point.html)<Clock, Duration> where `Duration` is some valid specialization of [std::chrono::duration](duration.html "cpp/chrono/duration").

7) Returns Clock::to_sys(t). This overload participates in overload resolution only if the expression Clock::to_sys(t) is well-formed. The program is ill-formed if Clock::to_sys(t) does not return [std::chrono::sys_time](system_clock.html)<Duration> where `Duration` is some valid specialization of [std::chrono::duration](duration.html "cpp/chrono/duration").

8) Returns Clock::from_utc(t). This overload participates in overload resolution only if the expression Clock::from_utc(t) is well-formed. The program is ill-formed if Clock::from_utc(t) does not return [std::chrono::time_point](time_point.html)<Clock, Duration> where `Duration` is some valid specialization of [std::chrono::duration](duration.html "cpp/chrono/duration").

9) Returns Clock::to_utc(t). This overload participates in overload resolution only if the expression Clock::to_utc(t) is well-formed. The program is ill-formed if Clock::to_utc(t) does not return [std::chrono::utc_time](utc_clock.html)<Duration> where `Duration` is some valid specialization of [std::chrono::duration](duration.html "cpp/chrono/duration").

###  Parameters

t  |  \-  |  time point to convert   
---|---|---  
  
###  Return value

The result of the conversion as described above: 

1-3) t.

4) [std::chrono::utc_clock::to_sys](utc_clock/to_sys.html)(t).

5) [std::chrono::utc_clock::from_sys](utc_clock/from_sys.html)(t).

6) Clock::from_sys(t).

7) Clock::to_sys(t).

8) Clock::from_utc(t).

9) Clock::to_utc(t). 

### See also

[ clock_cast](clock_cast.html "cpp/chrono/clock cast")(C++20) |  convert time points of one clock to another   
(function template)   
---|---
