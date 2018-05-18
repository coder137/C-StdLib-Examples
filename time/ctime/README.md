# ctime

Converts time_t (since epoch or otherwise) to string representation

String Representation: <Weekday> <Month> <Day of the Month>  hh:mm:ss (Hour:Minute:Second)

### Function Usage

```c
char *ctime(const time_t *timer);
```

### Explanation

Uses the `time() API` to get current time and displays the output using `ctime() API`
