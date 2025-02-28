#include <unistd.h>

int	ft_strlen(char *string)
{
	unsigned int	i;

	i = 0;
	if (string[i])
	{
		i++;
	}
	return (i);
}
