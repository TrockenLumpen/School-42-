### ft_strcmp.c
```
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
```
## Purpose
> This function is there to compare to strings togheter and tell you the diffrence of it with the Ascii list.
> `*s1`and`*s2`are the strings where the values get compared.
