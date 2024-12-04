/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:26:22 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/24 12:56:51 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
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
		if (c >= 'a' && c <= 'z')
		{
			d = c - 32;
			str[index] = d;
		}
		index++;
	}
	return (str);
}

/*int main (int argc, char** argv)
{
	printf("Input string: %s\n", argv[1]);
	printf("Result: %s\n", ft_strupcase(argv[1]));
}*/
