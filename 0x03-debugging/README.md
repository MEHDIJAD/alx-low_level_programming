# 0x03. C - Debugging

## Project Description

This project is part of the ALX Low-Level Programming curriculum and focuses on the fundamental concepts and practices of debugging C code. It involves identifying and correcting errors in pre-existing C programs to make them function as intended. The exercises cover common issues like incorrect logic, infinite loops, and mishandling specific edge cases (e.g., leap years).

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

*   What is debugging
*   What are some methods of debugging manually
*   How to read the error messages

## Requirements

*   Allowed editors: `vi`, `vim`, `emacs`
*   All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
*   All files should end with a new line
*   Code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
*   A `README.md` file at the root of the repo, containing a description of the repository (this is usually for the `alx-low_level_programming` root).
*   This `README.md` file, at the root of the folder of this project (`0x03-debugging`), describing what this project is about.

## Tasks

### 0. Multiple mains
*   **Files:** `0-main.c`, `main.h`
*   **Description:** Tests the `positive_or_negative()` function with the input `0`. The task involves modifying `0-main.c` to correctly test this specific case.

### 1. Like, comment, subscribe
*   **File:** `1-main.c`
*   **Description:** Fixes an infinite loop in the provided `1-main.c` file by commenting out the problematic code block.

### 2. 0 > 972?
*   **Files:** `2-largest_number.c`, `main.h`
*   **Description:** Corrects the logic in the `largest_number()` function within `2-largest_number.c` to accurately determine and return the largest of three given integers.

### 3. Leap year
*   **Files:** `3-print_remaining_days.c`, `main.h`
*   **Description:** Fixes the `print_remaining_days()` function in `3-print_remaining_days.c`. The goal is to ensure it correctly calculates and prints the day of the year and remaining days, accurately accounting for leap years and handling invalid dates (e.g., Feb 29 in a non-leap year). The `convert_day()` function is provided and used by `print_remaining_days()`.

## Author

[Your Name/GitHub Username]