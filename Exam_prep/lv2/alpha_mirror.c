#include <unistd.h>

int	main(int ac, char *av[])
{
	int i;
	char temp;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	else if (ac == 2)
	{
		i = 0;

		while (av[1][i])
		{
			temp = av[1][i];
			if (temp >= 'A' && temp <= 'Z')
			{
				temp = 90 - temp + 65;
			}
			else if (temp >= 'a' && temp <= 'z')
			{
				temp = 122 - temp + 97;
			}
			write(1, &temp, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}