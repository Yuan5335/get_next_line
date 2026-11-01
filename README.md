*This project has been created as part of the 42 curriculum by <aybaassi>.*

# Description

get_next_line is a project from the 42 School curriculum that involves developing a function capable of reading a file or input stream one line at a time.

The main goal of this project is to understand file descriptors, file reading, static variables, memory allocation, and string manipulation in C.

The project requires implementing the following function:

```c
char *get_next_line(int fd);
```

Each call to get_next_line() returns the next line read from the given file descriptor, including the newline character (\n) if one is present.

When there is nothing left to read, or an error occurs, the function returns NULL.

The function must work with different buffer sizes, handle end-of-file conditions correctly, and manage dynamically allocated memory without memory leaks.

**Main objectives**
- Understand how file descriptors work.
- Learn to use the read() system call.
- Manage memory dynamically using malloc() and free().
- Understand and implement static variables.
- Manipulate strings efficiently.
- Handle different input conditions and potential errors.
- Develop a reliable line-reading algorithm.

# Instructions

## Compilation

The project is written in C and compiled using cc or gcc.

To compile the source files, use:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 \
get_next_line.c get_next_line_utils.c main.c -o get_next_line
```

BUFFER_SIZE determines the number of bytes read during each call to read().

You can change its value to test the function with different buffer sizes.

For example:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 \
get_next_line.c get_next_line_utils.c main.c -o get_next_line
```
# Resources

The following resources were useful for understanding the concepts involved in this project:

**Documentation**
- read() — Linux manual page
- open() — Linux manual page
- close() — Linux manual page
- malloc() — Linux manual page
- Static variables in C

**Learning resources**
- The C Programming Language — Brian W. Kernighan and Dennis M. Ritchie
- GNU C Library Documentation

**AI Usage**

AI was used as supplementary learning and documentation resource during this project.

AI assistance was used for:

Clarifying concepts related to file descriptors, static variables, memory allocation, and the read() system call.
Structuring and writing this README file.
Improving the clarity of technical explanations.
