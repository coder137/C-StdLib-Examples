# time.h Standard Library

- [x] asctime
- [x] clock
- [x] ctime
- [x] difftime
- [ ] gmtime
- [ ] localtime
- [ ] mktime
- [ ] strftime
- [x] time

### Macros Used

1. CLOCKS_PER_SEC
    Number of processor clocks per second

### Data Type

1. `clock_t`
2. `time_t is`
3. `struct tm`

```c
struct tm {
   int tm_sec;         /* seconds,  range 0 to 59          */
   int tm_min;         /* minutes, range 0 to 59           */
   int tm_hour;        /* hours, range 0 to 23             */
   int tm_mday;        /* day of the month, range 1 to 31  */
   int tm_mon;         /* month, range 0 to 11             */
   int tm_year;        /* The number of years since 1900   */
   int tm_wday;        /* day of the week, range 0 to 6    */
   int tm_yday;        /* day in the year, range 0 to 365  */
   int tm_isdst;       /* daylight saving time             */
};
```
