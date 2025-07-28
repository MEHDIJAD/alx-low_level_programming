# malloc and free

> The **malloc** function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and **malloc** will return a pointer to the reserved space.

> When the amount of memory is not needed anymore, you must return it to the operating system by calling the function **free**.




* 🛎️ Note that when using the notation: **char s[] = "ALX"**, the array s holds a copy of the string **"ALX"**. So it is possible to modify this copy.

## Malloc

```c
void *malloc(size_t size);
```

## Free

> The free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).

```c
void free(void *ptr);
```

### Don’t trust anyone

> On error, **malloc returns NULL**. As for any other C library function, you should always check the malloc return value before using it. If you don’t you will run into segfaults.


### 🧠 What happens to string literals like "hello" when you compile your C program?

The compiler puts string literals (like "hello") into a special section called .rodata (read-only data).

The linker gathers all read-only data into one memory segment and marks it as read-only.

When you run the program, the OS loader loads it into memory and sets permissions:

* .rodata → read-only (no writing or executing).

* Code (main, printf, etc.) → read + execute (but no writing).

* Variables (like arrays) → read + write.

* So, if you try to change a string literal like:

```c
str[0] = 'H';  // ❌ Segfault or crash
You get a crash, because you're trying to write to read-only memory.
```
