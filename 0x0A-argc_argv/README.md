# 0x0A. C - argc, argv

## Description

This project is focused on learning how to work with command line arguments in C using `argc` and `argv`.

## Learning Objectives

By the end of this project, you should be able to:

- Use arguments passed to your C programs
- Understand the prototypes of `main`:  
  `int main(void)` and `int main(int argc, char *argv[])`
- Handle unused variables using `__attribute__((unused))` or `(void)`
- Write programs that handle multiple inputs from the command line
- Parse command line arguments with `atoi`
- Perform input validation

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No global variables
- Max 5 functions per file
- Betty style checked

## Files and Programs

| File | Description |
|------|-------------|
| `0-whatsmyname.c` | Prints the program's name |
| `1-args.c` | Prints the number of arguments passed |
| `2-args.c` | Prints all arguments received |
| `3-mul.c` | Multiplies two numbers from the command line |
| `4-add.c` | Adds positive numbers from the command line |
| `100-change.c` | Calculates the minimum number of coins for change |

## Usage

Example for compiling:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
```

