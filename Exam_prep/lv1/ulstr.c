#include <unistd.h>

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	else if (ac == 2)
	{
		int i;
		char temp;

		i = 0;
		while (av[1][i])
		{
			temp = av[1][i];

			if (temp >= 'A' && temp <= 'Z')
			{
				temp += 32;
			}
			else if (temp >= 'a' && temp <= 'z')
			{
				temp -= 32;
			}
			write(1, &temp, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}