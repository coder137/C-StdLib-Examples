# signal

Terminates the program once the `ctrl+C` signal is received

### Functions used

```c
void (*signal(int signum, void (*func)(int))) (int)
```

### Explanation

1. `signum` takes in the Parameters of SIGNAL Number
	* SIGABRT

	Abnormal program termination.

	* SIGFPE

	Floating-point error like division by zero.

	* SIGILL

	Illegal operation.

	* SIGINT

	Interrupt signal such as ctrl-C.

	* SIGSEGV

	Invalid access to storage like segment violation.

	* SIGTERM

	Termination request.

2. Add in a callback function with `int signum` as parameter. This runs when the appropriate signal is received by the program
