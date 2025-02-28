#include <unistd.h>

int	main(int ac, char *av[])
{
	int i;
	char temp;

	if (ac == 2)
	{
		i = 0;

		while (av[1][i])
		{
			temp = av[1][i];

			if (temp >= 'A' && temp <= 'Z')
			{
				temp += 32;
				write(1, "_", 1);
			}
			write(1, &temp, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}