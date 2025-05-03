# Project: 0x00 C - Hello, World

This project covers the basics of compilation, C programming fundamentals (using `printf`, `puts`), understanding data types, and basic scripting in the ALX Low-Level Programming curriculum.

**GitHub Repository:** `alx-low_level_programming`
**Directory:** `0x00-hello_world`

---

## Tasks

### 0. Preprocessor

**Description:**
Write a Bash script that runs a C file through the preprocessor and saves the result into another file.

**Requirements:**
*   The C file name will be provided via the environment variable `$CFILE`.
*   The output must be saved in the file named `c`.

**File:** `0-preprocessor`

---

### 1. Compiler

**Description:**
Write a Bash script that compiles a C file but does not link.

**Requirements:**
*   The C file name will be provided via the environment variable `$CFILE`.
*   The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
    *   Example: if the C file is `main.c`, the output file should be `main.o`.

**File:** `1-compiler`

---

### 2. Assembler

**Description:**
Write a Bash script that generates the assembly code of a C file and saves it in an output file.

**Requirements:**
*   The C file name will be provided via the environment variable `$CFILE`.
*   The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    *   Example: if the C file is `main.c`, the output file should be `main.s`.

**File:** `2-assembler`

---

### 3. Name

**Description:**
Write a Bash script that compiles a C file and creates an executable named `cisfun`.

**Requirements:**
*   The C file name will be provided via the environment variable `$CFILE`.
*   The output executable file must be named `cisfun`.

**File:** `3-name`

---

### 4. Hello, puts

**Description:**
Write a C program that prints the exact string `"Programming is like building a multilingual puzzle"`, followed by a new line.

**Requirements:**
*   Use the function `puts`.
*   You are not allowed to use `printf`.
*   Your program should end with the value `0`.

**File:** `4-puts.c`

---

### 5. Hello, printf

**Description:**
Write a C program that prints the exact string `"with proper grammar, but the outcome is a piece of art,"`, followed by a new line.

**Requirements:**
*   Use the function `printf`.
*   You are not allowed to use the function `puts`.
*   Your program should return `0`.
*   Your program should compile without warning when using the `-Wall` gcc option.

**File:** `5-printf.c`

---

### 6. Size is not grandeur, and territory does not make a nation

**Description:**
Write a C program that prints the size of various fundamental data types (on the computer it is compiled and run on), matching the specified output format.

**Requirements:**
*   Produce the exact same output format as shown in the example.
*   Your program should return `0`.
*   Warnings during compilation are allowed for this task.
*   (Note: May require `libc6-dev-i386` package for `-m32` testing).

**File:** `6-size.c`

---

### 7. Intel (#advanced)

**Description:**
Write a script that generates the assembly code (using Intel syntax) of a C file and saves it in an output file.

**Requirements:**
*   The C file name will be provided via the environment variable `$CFILE`.
*   The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
*   The generated assembly must be in Intel syntax.

**File:** `100-intel`

---

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (#advanced)

**Description:**
Write a C program that prints the exact string `"and that piece of art is useful\" - Dora Korpar, 2015-10-19"`, followed by a new line, to the standard error stream.

**Requirements:**
*   You are not allowed to use any functions listed in the NAME section of `man (3) printf` or `man (3) puts`.
*   Your program should return `1`.
*   Your program should compile without any warnings when using the `-Wall` gcc option.

**File:** `101-quote.c`

---