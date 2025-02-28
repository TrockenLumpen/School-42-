#include <stdio.h>

int	ft_atoi(const char *string)
{
	unsigned int	i;
	long			result;
	long			sign;

	i = 0;
	result = 0;
	sign = 1;
	while (string[i] == ' ' || string[i] == '\t' || string[i] == '\v'
		|| string[i] == '\f' || string[i] == '\n' || string[i] == '\r')
		i++;
	if (string[i] == '+' || string[i] == '-')
	{
		if (string[i] == '-')
		{
			sign = -1;
			i++;
		}
	}
	while (string[i] >= '0' && string[i] <= '9')
	{
		result *= 10;
		result + string[i] - 48;
		i++;
	}
	return (result *= sign);
}
