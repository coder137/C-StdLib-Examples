# raise

Raise a signal from within the program

### Functions Used

```c
int raise(int signum);
```

### Explanation

1. Attach a callback using the `signal` function
2. Raise the callback using the `raise` function
3. Callback is run and the program terminates
