/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:06:48 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/24 16:24:20 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		index;
	char	c;
	char	d;

	index = 0;
	while (true)
	{
		c = str[index];
		if (c == '\0')
		{
			break ;
		}
		if (c >= 'A' && c <= 'Z')
		{
			d = c + 32;
			str[index] = d;
		}
		index++;
	}
	return (str);
}

/*int main (int argc, char** argv)
{
	printf("string: %s\n", argv[1]);
	printf("Result: %s\n", ft_strlowcase(argv[1]));
}*/
