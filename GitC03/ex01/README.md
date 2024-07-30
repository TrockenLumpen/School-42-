### ft_strncmp.c
```
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (*s1 == *s2 && *s1 && (i < n - 1))
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
```
## Purpose
> The purpose of the `ft_strncmp` function is to compare the first `n` characters of two strings, `s1` and `s2`, and return an integer indicating whether they are equal up to that point.
>  This comparison stops as soon as it has compared `n` characters or when it reaches the end of either string, whichever comes first.
