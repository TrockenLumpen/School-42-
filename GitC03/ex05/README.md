# ft_str_length_fast Function Description
```c
unsigned int ft_str_length_fast(char *dest);
```
> [!NOTE]
> This function assumes that the input string is properly null-terminated.
>  It may produce incorrect results if the string contains embedded null bytes.

## Purpose

> The **ft_str_length_fast function** calculates the length of a null-terminated string **(dest)** quickly.
It's optimized for performance over accuracy, assuming the string does not contain embedded null bytes.
## Parameters
> char *dest: Pointer to the destination string whose length is to be determined.
## Return Value
> **unsigned int**: The lenght of the string **dest.**

## Behavior

> The function iterates through the characters of dest until it encounters a null terminator ('\0').
  It increments a counter (count) at each iteration, effectively counting the number of characters in the string.
> Upon reaching the end of the string, it returns the value of count, representing the length of the string.
## ft_strlcat Function Description

```c
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
```

> [!NOTE]
> This function modifies both dest and src.
> It's designed to prevent buffer overflow issues by limiting the number of characters appended based on the available space in dest.

## Purpose

> The ft_strlcat function appends the string pointed to by src to the end of dest. The length of src is added to the original length of dest and stored in dest.
> The final null character is automatically appended at the end of dest.

## Parameters

> char *dest: Destination string where the content of src will be appended.
char *src: Source string to append.
unsigned int size: Maximum size of the destination string including the terminating null byte.
> If the return value of ft_strlcat is greater than or equal to size, the added portion was truncated.

## Return Value

> unsigned int: The total length that would have been written if size had been sufficiently large,
> but it stops after size - strlen(dest) - 1 characters.

## Behavior

> The function calculates the length of dest and src separately. It then copies characters from src to dest until either size - strlen(dest) characters are copied or the null terminator of src is reached.
If there is space left in dest, a null terminator is appended.
The function ensures that the resulting string in dest is null-terminated.
