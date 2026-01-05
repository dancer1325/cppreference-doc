
  


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
**time_zone_link**(C++20)  
[leap_second](leap_second.html "cpp/chrono/leap second")(C++20)  
[leap_second_info](utc_clock/leap_second_info.html "cpp/chrono/utc clock/leap second info")(C++20)  
[get_leap_second_info](utc_clock/get_leap_second_info.html "cpp/chrono/utc clock/get leap second info")(C++20)  
[C-style date and time](c.html "cpp/chrono/c")  
  


**`std::chrono::time_zone_link`**

Member functions  
---  
[time_zone_link::nametime_zone_link::target](time_zone_link/accessors.html "cpp/chrono/time zone link/accessors")  
Nonmember functions  
[operator==operator<=>](time_zone_link/operator_cmp.html "cpp/chrono/time zone link/operator cmp")  
  


Defined in header `[<chrono>](../header/chrono.html "cpp/header/chrono")` |  |   
---|---|---  
class time_zone_link; |  |  (since C++20)  
| |   
  
The class `time_zone_link` represents an alternative name for a time zone. 

Users cannot construct `time_zone_link` objects. The library implementation creates `time_zone_link` objects when it initializes the time zone database and provides const access to these objects. 

`time_zone_link` is not copyable but does have a defaulted move constructor and a defaulted move assignment operator. However, as users have only const access to `time_zone_link` objects, these functions cannot be called in user code without invoking [undefined behavior](../language/ub.html "cpp/language/ub"). 

### Member functions

[ nametarget](time_zone_link/accessors.html "cpp/chrono/time zone link/accessors") |  accesses the name and target of this `time_zone_link`   
(public member function)   
---|---  
  
### Nonmember functions

[ operator==operator<=>](time_zone_link/operator_cmp.html "cpp/chrono/time zone link/operator cmp")(C++20) |  compares two `time_zone_link` objects   
(function)   
---|---
