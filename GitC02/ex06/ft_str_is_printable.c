/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:14:10 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/25 19:08:35 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (true)
	{
		c = str[index];
		if (c == '\0')
		{
			break ;
		}
		if (c < 32 || c == 127)
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*int main(int argc, char** argv)
{
	printf("Total string: %s\n", argv[1]);
	printf("Result: %d\n", ft_str_is_printable(argv[1]));
}*/
