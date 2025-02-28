#include <unistd.h>

void	ft_putstr(char *string)
{
	int	i;

	i = 0;
	if (!string)
		write(1, "You Dumb", 8);
	while (string[i])
	{
		write(1, &string[i], 1);
	}
	i++;
}
int	main(void)
{
	char *string = "Hello World";

	ft_putstr(string);
	write(1, "\n", 1);
	return (0);
}