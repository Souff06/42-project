*This project has been created as part of the 42 curriculum by smghirat.*

# Libft

## Description
`libft` is the very first project at 42, where the goal is to re-create a subset of the standard C library (`libc`), along with additional utility functions that will be useful throughout the rest of your cursus. Writing these functions from scratch helps build a deep understanding of memory management, pointer arithmetic, data structures, and how standard functions work under the hood.

The library is split into three main categories:
1. **Libc functions:** Re-implementations of standard C library functions (e.g., `ft_strlen`, `ft_strdup`, `ft_memset`, `ft_memcpy`, etc.).
2. **Additional functions:** Extra helper functions not found in the standard library or behaving slightly differently (e.g., `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, `ft_striteri`, etc.).
3. **Bonus functions (Linked Lists):** Functions to manipulate singly and doubly linked lists (e.g., `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstmap`, etc.).

---

## Detailed Description of the Library

The generated library is compiled into a static archive named `libft.a`. Below is an overview of the implemented functions:

### Character Checks & Conversions
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`: Check character types.
- `ft_toupper`, `ft_tolower`: Convert character cases.

### String Manipulation
- `ft_strlen`: Calculate the length of a string.
- `ft_strlcpy`, `ft_strlcat`: Size-bounded string copying and concatenation.
- `ft_strchr`, `ft_strrchr`: Locate characters in strings.
- `ft_strncmp`: Compare two strings up to $n$ characters.
- `ft_strnstr`: Locate a substring in a string.
- `ft_strdup`: Create a duplicate of a string using dynamic memory allocation.

### Memory Operations
- `ft_memset`: Fill memory with a constant byte.
- `ft_bzero`: Zero a byte string.
- `ft_memcpy`, `ft_memmove`: Copy memory areas (handling overlapping memory safely in `memmove`).
- `ft_memchr`: Scan memory for a character.
- `ft_memcmp`: Compare memory areas.
- `ft_calloc`: Allocate and clear memory.

### Non-Standard & Additional Functions
- `ft_substr`: Extract a substring from a string.
- `ft_strjoin`: Concatenate two strings into a new string.
- `ft_strtrim`: Trim specified characters from the beginning and end of a string.
- `ft_split`: Split a string using a delimiter character into an array of strings.
- `ft_itoa`: Convert an integer to a string.
- `ft_strmapi`, `ft_striteri`: Apply functions to characters of a string.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Output characters and strings to a given file descriptor.

### Linked List Functions (Bonus)
- `ft_lstnew`: Create a new list element.
- `ft_lstadd_front`, `ft_lstadd_back`: Add an element to the beginning or end of a list.
- `ft_lstsize`: Count elements in a list.
- `ft_lstlast`: Return the last element of a list.
- `ft_lstdelone`, `ft_lstclear`: Free memory of list elements.
- `ft_lstiter`, `ft_lstmap`: Iterate over list elements and apply functions.

---

## Instructions

### Compilation
To compile the library and generate the `libft.a` static archive, run the following command at the root of the repository:

```shell
make
```

To compile the bonus functions as well, use:

```shell
make bonus
```

### Cleaning Up
- To remove object files (`.o`), run:
  ```shell
  make clean
  ```
- To remove object files and the compiled library (`libft.a`), run:
  ```shell
  make fclean
  ```
- To clean everything and re-compile from scratch:
  ```shell
  make re
  ```

### Usage in Your Projects
Include the header file in your C source files:
```c
#include "libft.h"
```
When compiling your own project, link the library:
```shell
gcc -Wall -Wextra -Werror main.c libft.a -I.
```

---

## Resources

- [C Reference - cppreference.com](https://en.cppreference.com/)
- [Man Pages (`man 3`)](https://man7.org/linux/man-pages/man3/pages.3.html) for standard library behavior details.
- 42 Subject PDF guidelines and intranet resources.

### AI Usage Disclosure
AI was used during this project strictly for the following tasks and parts:
- **Documentation formatting:** Assisting in structuring and writing clear Markdown syntax for this `README.md`.
- **Debugging logic review:** Reviewing edge cases for complex string and memory manipulation functions (such as `ft_split` and `ft_strtrim`) and explaining segmentation fault causes during testing.