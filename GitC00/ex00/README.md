# ft_putchar.c
```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{

	ft_putchar('c');
}
```
# Library
```c
#include <unistd.h>
```
> [!TIP]
> For the most time you will be working with `<unistd.h>`

> `<unistd.h>` is a library made by 42 so don't be surprised when its new to you.
# Function
```c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
```
> [!NOTE]
> While this function is a straightforward operation, it serves as a fundamental building block in many larger programs, especially in teaching environments or projects focused on low-level programming concepts.


## Purpose
> The ft_putchar function is a custom implementation of the standard library function putchar. It writes a single character to the standard output (stdout).
## Parameters
> `char c`: The character to be printed.
## Behavior
> The function uses the write system call to write the character c to stdout. The first argument 1 specifies stdout as the file descriptor, the second argument &c passes the address of the character to be written, and the third argument 1 indicates that one byte should be written.
```mermaid
a-->b;
b-->a;
```