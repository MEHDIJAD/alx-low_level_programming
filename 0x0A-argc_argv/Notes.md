# 📕 Notes

### Unused variables

> An "unused variable" in C refers to a variable that has been declared within a program but is never actually read from or used in any operation.

* For situations where a variable must be declared but is intentionally unused, we can use attributes to suppress the warning.

```c
#include <stdio.h>

void myFunction(int usedArg, int unusedArg __attribute__((unused))) {
    printf("Used argument: %d\n", usedArg);
}

int main() {
    int myUnusedVariable __attribute__((unused)) = 42; // Compiler won't warn about it
    myFunction(5, 10);
    return 0;
}
// OR

int myUnusedVariable;
    (void)myUnusedVariable;
	
```

### ❔ When would we ever need to declare a variable and not use it.

Required by function signature
Some callback functions or handlers require a specific signature, even if you don’t use all parameters.

```c
void my_callback(int signal __attribute__((unused))) {
    // Not using signal, but required by the function signature
}
...
```