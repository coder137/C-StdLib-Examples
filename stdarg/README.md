# stdarg.h Standard Library

This library is used to add **VARIADIC ARGUMENTS** to functions

### Examples Created

- [x] simpleExample
- [x] commandLineArgsExample

### Functions used

```c
// Initializes the AP variable
void va_start(va_list ap, last_arg);

// Returns type argument from va_list
type va_arg(va_list ap, type);

// Call this function before returning from a function
// ELSE: result --> undefined
void va_end(va_list ap)
```

### Datatypes used

1. `va_list`
