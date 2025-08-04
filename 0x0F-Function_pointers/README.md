# 0x0F. C - Function pointers

## Function Pointer Declaration

```c
return_type (*pointer_name)(parameter_types);
```
* **return_type:** The type of the value that the function returns.
* **parameter_types:** The types of the parameters the function takes.
* **pointer_name:** The name of the function pointer.

### exemple 
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
  
    // Declare a function pointer that matches
  	// the signature of add() function
    int (*fptr)(int, int);

    // Assign to add()
    fptr = &add;

    // Call the function via ptr
    printf("%d", fptr(10, 5));
    return 0;
}
```

## Initialization

```c
pointer_name = &function_name
// OR 
pointer_name = function_name
```
