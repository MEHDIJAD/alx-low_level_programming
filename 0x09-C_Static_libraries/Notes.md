# Notes

## What Is A "C" Library?

> A library is a file containing several object files, that can be used as a single entity in a linking phase of a program

## What Is It Good For?

>  Normally the library is indexed, so it is easy to find symbols (functions, variables and so on) in them. For this reason, **linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on the disk.** Also, when using a library, we have fewer files to look for and open, which even further speeds up linking.

## Static VS Dynamic lib in unix systems

### 📦 Static lib

> Static libraries are just collections of object files (.o) **that are linked into the program during the linking phase of compilation**, and are not relevant during **runtime**.

```bash
Compile → Link (copies library code into executable) → Run (no library needed)
```

#### Creating A Static "C" Library Using "ar" and "ranlib"

This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it.

The 'c' flag tells ar to create the library if it doesn't already exist.

The 'r' flag tells it to replace older object files in the library, with the new object files.

```bash
ar rc libutil.a util_file.o util_net.o util_math.o
```
To index the archive (optinal)

```bash
ranlib libutil.a
```

#### Using A "C" Library In A Program

```bash
cc main.o -L. -lutil -o prog
```

-L. = look in current directory for libraries

-lmymath = link with libutil.a (notice: no lib and no .a in the name)


### 🔗 Dynamic lib

> Shared libraries (also called dynamic libraries) are linked into the program in **two stages**. **First, during compile time, the linker verifies that all the symbols (again, functions, variables and the like) required by the program, are either linked into the program, or in one of its shared libraries.** However, the object files from the dynamic library are not inserted into the executable file. Instead,**when the program is started, a program in the system (called a dynamic loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches them to the copy of the program in memory.**

```bash
Compile → Link (reference library) → Run (loader loads and links shared library into memory)
```

#### Creating A Shared "C" Library Using "ld"

#### Using A Shared "C" Library - Quirks And Solutions








