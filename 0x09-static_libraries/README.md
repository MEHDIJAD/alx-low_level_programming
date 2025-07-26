# C - Static libraries

## ✅ gcc — GNU Compiler

#### DESCRIPTION

> When you invoke GCC, it normally does **preprocessing**, **compilation**,
**assembly** and **linking**.  The "overall options" allow you to stop
this process at an intermediate stage.

####  Basic Compilation

| Option         | Description                      |
|----------------|----------------------------------|
| `file.c`       | Input C file                     |
| `-o output`    | Set name of output file          |
| `-c`           | Compile only, do not link        |
| `-E`           | Preprocess only                  |
| `-S`           | Compile to assembly only         |
| `-v`           | Verbose output                   |
| `-x language`  | Specify language (e.g. c, c++)   |

---

#### ⚠️ Warnings

| Option         | Description                      |
|----------------|----------------------------------|
| `-Wall`        | Enable most warnings             |
| `-Wextra`      | More extra warnings              |
| `-Werror`      | Treat warnings as errors         |
| `-Wno-xxx`     | Disable a specific warning       |

---

#### ⚙️ Optimization

| Option         | Description                              |
|----------------|------------------------------------------|
| `-O0`          | No optimization (default)                |
| `-O1`          | Basic optimization                       |
| `-O2`          | Good optimization                        |
| `-O3`          | Maximum optimization                     |
| `-Os`          | Optimize for size                        |
| `-Ofast`       | Fastest, may break standard compliance   |

---

#### 🧠 Debugging

| Option         | Description                      |
|----------------|----------------------------------|
| `-g`           | Include debug information        |
| `-ggdb`        | Full debug info for GDB          |

---

#### 📚 Language Standard

| Option         | Description                                |
|----------------|--------------------------------------------|
| `-std=c89`     | C89 (ANSI C) standard                      |
| `-std=c99`     | C99 standard                               |
| `-std=c11`     | C11 standard                               |
| `-std=gnu99`   | GNU extensions + C99                       |
| `-ansi`        | Same as `-std=c89 -pedantic`               |

---

#### 📦 Linking and Libraries

| Option         | Description                              |
|----------------|------------------------------------------|
| `-l<lib>`      | Link with library `lib` (e.g. `-lm`)     |
| `-L<dir>`      | Add a library search path                |
| `-static`      | Static linking                           |
| `-shared`      | Create shared library                    |
| `-rdynamic`    | Pass all symbols to the linker           |

---

#### 📂 Include and Macro Options

| Option         | Description                      |
|----------------|----------------------------------|
| `-I<dir>`      | Add include directory            |
| `-D<macro>`    | Define a macro                   |
| `-U<macro>`    | Undefine a macro                 |

---

#### 🧪 Misc

| Option         | Description                      |
|----------------|----------------------------------|
| `--help`       | Show help message                |
| `--version`    | Show GCC version                 |


## 📦 AR - GNU Development Tools (Archive Tool)

#### DESCRIPTION

> The GNU ar program creates, modifies, and extracts from archives.
An archive is a single file holding a collection of other files in
a structure that makes it possible to retrieve the original
individual files (called members of the archive).

It collects object files (.o) into a **static library**.

A static library is just a group of .o files with a .a extension (like libmylib.a).


```bash
ar rcs libmylib.a file1.o file2.o
```

**r:** insert or replace files

**c:** create the archive

**s:** write index (can skip if using ranlib next)

## 3. 📚 ranlib — Indexing the Library

It adds an index to the static library (.a) so the linker can use it faster.

```bash
ranlib libmylib.a
```

**Sometimes ar already adds the index (s option), so ranlib is optional.**



