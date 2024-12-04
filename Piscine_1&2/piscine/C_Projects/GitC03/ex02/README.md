### ft_strcat.c

```
char *ft_strcat(char *dest, char *src)
{
    // Initialize a pointer named 'result' to point to the beginning of 'dest'.
    char *result = dest;

    // Loop through 'dest' until a null terminator ('\0') is found.
    // This loop effectively finds the end of 'dest'.
    while (*result)
    {
        result++; // Move the 'result' pointer to the next character.
    }

    // At this point, 'result' points just past the end of 'dest'.
    // We now start copying characters from 'src' to the end of 'dest'.

    // Loop through 'src', copying each character to the end of 'dest'.
    while (*src)
    {
        // Copy the current character from 'src' to the position pointed to by 'result'.
        // Note: Casting 'src' to 'unsigned char *' ensures that negative values are correctly handled.
        *result = *(unsigned char *)src;
        
        // Advance both 'result' and 'src' to the next character.
        result++;
        src++;
    }

    // After copying all characters from 'src', append a null terminator to 'dest'.
    // This marks the end of the concatenated string.
    *result = '\0';

    // Return the modified 'dest' string.
    return (dest);
}
```

## Purpose
> The `ft_strcat` function is designed to join two strings together. Imagine you have two pieces of paper, one with some words on it `(dest)` and another with more words `(src)`.
>  You want to take all the words from the second piece `(src)` and stick them onto the end of the first piece `(dest)`.
>  That's exactly what `ft_strcat` does with strings!
