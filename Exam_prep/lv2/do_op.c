#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		printf("Error, please enter something at least");
		return (1);
	}
	else if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("result is %d", atoi(av[1]) + atoi(av[3]));
		else if (av[2][0] == '-')
			printf("result is %d", atoi(av[1]) - atoi(av[3]));
		else if (av[2][0] == '*')
			printf("result is %d", atoi(av[1]) * atoi(av[3]));
		else if (av[2][0] == '/')
			printf("result is %d", atoi(av[1]) / atoi(av[3]));
		else if (av[2][0] == '%')
			printf("result is %d", atoi(av[1]) % atoi(av[3]));
		printf("\n");
	}
	return (0);
}