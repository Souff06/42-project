*This project has been created as part of the 42 curriculum by smghirat.*

# ft_printf

## Description

`ft_printf` is a custom implementation of the C standard library function `printf()`.

The goal of this project is to understand how variadic functions work in C and how formatted output is processed. The library reads a format string, detects conversion specifiers, retrieves the corresponding arguments and writes the formatted result to the standard output.

The project is compiled into a static library named `libftprintf.a`, which can be reused in future 42 projects.

## Supported conversions

The mandatory part supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a `void *` pointer in hexadecimal format |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a number in lowercase hexadecimal format |
| `%X` | Prints a number in uppercase hexadecimal format |
| `%%` | Prints a percent sign |

## Files

- `ft_printf.h`: contains the function prototypes and the required includes.
- `ft_printf.c`: contains `ft_printf()` and the function that dispatches each conversion.
- `ft_utils.c`: contains utility functions used to print characters, strings and signed integers.
- `ft_utils2.c`: contains functions used to print unsigned integers, hexadecimal values and pointers.
- `Makefile`: compiles the source files and creates `libftprintf.a`.

## Instructions

To compile the library, run:

```bash
make
```

This command creates the static library `libftprintf.a` at the root of the repository.

To remove the object files, run:

```bash
make clean
```

To remove the object files and the library, run:

```bash
make fclean
```

To recompile the project from scratch, run:

```bash
make re
```

## Usage

Include the header file in your program:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a
```

Example:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s!\n", "world");
	ft_printf("Number: %d\n", 42);
	ft_printf("Hexadecimal: %x\n", 255);
	return (0);
}
```

## Algorithm

The main function, `ft_printf()`, receives a format string and a variable number of arguments.

First, it initializes a `va_list` with `va_start()`. Then, it reads the format string character by character.

- If the current character is not `%`, it is printed directly with `ft_putchar()`.
- If the current character is `%`, the next character is read to identify the conversion specifier.
- The corresponding print function is called with the correct argument type retrieved using `va_arg()`.
- After a conversion is processed, the format string advances by two characters: one for `%` and one for the specifier.
- `va_end()` is called before returning the total number of characters printed.

The conversion functions use recursion to print numbers. For example, to print a decimal number, the function divides the number by 10 until it is smaller than 10, then prints each digit in the correct order using the modulo operator.

For pointers, the address is cast to an `unsigned long` and printed in lowercase hexadecimal format after the `0x` prefix.

## Data structures

This project does not require complex data structures. It mainly uses:

- A `va_list` to access the variable arguments.
- Character arrays to define the hexadecimal bases.
- Recursive functions to convert and print numbers.
- Integer counters to return the total number of characters printed.

## Resources

- [printf(3) Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg(3) Linux manual page](https://man7.org/linux/man-pages/man3/stdarg.3.html)
- [C programming documentation](https://en.cppreference.com/w/c)
- 42 school documentation and peer discussions

## AI usage

AI was used as a learning support to understand the following concepts:

- Variadic functions in C.
- The use of `va_list`, `va_start()`, `va_arg()` and `va_end()`.
- The behavior of `printf()` conversion specifiers.
- The Norminette formatting rules.

The implementation, testing and understanding of the project were done personally.