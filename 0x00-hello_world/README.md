## Task 1: C Preprocessor Script

**Description:**

Write a Bash script that runs a C file through the preprocessor and saves the result into another file.

**Requirements:**

*   The C file name will be provided via the environment variable `$CFILE`.
*   The output of the preprocessor must be saved in a file named `c`.

**Script File:** `0-preprocessor` (or adjust filename as needed)

**Example Script Content:**

```bash
#!/bin/bash
gcc -E $CFILE -o c

