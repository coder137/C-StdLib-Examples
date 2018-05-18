# time

Used to return the time since epoch (January 1st 1970)

### Functions Used

```c
time_t time(time_t *timer)
```

### Explanation

```c
time_t seconds = time(NULL);
```

OR

```c
time_t seconds;
time(&seconds);
```

> Both of these help set the `time_t seconds` to the current time (since epoch)
