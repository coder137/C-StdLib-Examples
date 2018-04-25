# strtok

Split a string into various tokens using strtok function

### Functions used

```c
char *strtok(char *str, const char *delim);
```

### Explanation

1. We can split a string using strtok using `char array` or `dynamically allocated arrays`.

	**NOTE: char pointers will crash the program**

2. Run the strtok function with the `str` input the first time
3. Pass `NULL` parameter to parse the same data other times

	**NOTE: This is made possible due to a static variable inside the strtok function that retains the previous value of the parsed string**

4. To parse a different string instead of `NULL` pass a different string value
