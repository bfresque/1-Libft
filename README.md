
# **Libft: Your Own Library**

## **Project Description**
The purpose of this project is to create your own C library that contains a set of standard utility functions. These functions can later be reused in your future C projects. You will also deepen your understanding of C programming, memory management, and library creation.

---

## **Project Requirements**

### **Mandatory Part**

1. **Program Name**: `libft.a`  
2. **Files to Submit**:  
   - `Makefile` (must contain the rules `NAME`, `all`, `clean`, `fclean`, `re`)  
   - `libft.h`  
   - `ft_*.c` files  

3. **External Functions Allowed**:  
   - Refer to the provided function list.  
4. **Compilation Flags**:  
   ```bash
   -Wall -Wextra -Werror
   ```  

5. **Technical Constraints**:  
   - No global variables allowed.  
   - Auxiliary functions must be declared `static` to limit their scope.  
   - Use `ar` to create the library (no `libtool` allowed).  

---

## **Mandatory Functions**

### **Libc Functions**
You must reimplement the following `libc` functions with the prefix `ft_`:

- **Character Functions**:  
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`  

- **String Functions**:  
  `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`  

- **Character Case**:  
  `ft_toupper`, `ft_tolower`  

- **Search Functions**:  
  `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`  

- **Conversion**:  
  `ft_atoi`  

- **Memory Management**:  
  `ft_calloc`, `ft_strdup`  

### **Additional Functions**
Implement these additional utility functions:

- `ft_substr`  
- `ft_strjoin`  
- `ft_strtrim`  
- `ft_split`  
- `ft_itoa`  
- `ft_strmapi`  
- `ft_striteri`  
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`  

---

## **Bonus Part**

If the mandatory part is completed perfectly, implement these bonus functions for **linked list management**:

1. **List Functions**:  
   - `ft_lstnew`  
   - `ft_lstadd_front`  
   - `ft_lstsize`  
   - `ft_lstlast`  
   - `ft_lstadd_back`  
   - `ft_lstdelone`  
   - `ft_lstclear`  
   - `ft_lstiter`  
   - `ft_lstmap`  

2. **Struct Definition**:  
   Add the following structure to `libft.h`:
   ```c
   typedef struct s_list
   {
       void            *content;
       struct s_list   *next;
   } t_list;
   ```

---

## **How to Run the Project**

1. **Clone the repository**:
   ```bash
   git clone <your_repository_url>
   cd libft
   ```

2. **Compile the library**:
   Run the following command:
   ```bash
   make
   ```

3. **Clean compiled files**:  
   - `make clean` : Removes object files.  
   - `make fclean` : Removes object files and the library file.  

4. **Recompile**:  
   ```bash
   make re
   ```

---

## **Testing**

It is highly recommended to write your own test programs to verify the correctness of each function. Use the following template to test your library:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Length of 'Hello': %zu\n", ft_strlen("Hello"));
    return 0;
}
```

Compile with:
```bash
gcc -Wall -Wextra -Werror main.c libft.a -o test
./test
```

---

## **Submission and Evaluation**

1. Submit your work to the assigned Git repository.  
2. Ensure that all files are at the root of the repository.  
3. The **bonus** part will only be evaluated if the mandatory part is perfect.

---

### 🚀 **Good luck and have fun coding!** 🎉
