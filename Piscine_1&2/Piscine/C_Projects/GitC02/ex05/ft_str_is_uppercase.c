/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:21:54 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/23 14:35:12 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		c = *str;
		if (!(c >= 'A' && c <= 'Z') && c != '\0')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main (int argc, char** argv)
{
	printf("Testing string: %s\n", argv[1]);
	printf("Result: %d\n", ft_str_is_uppercase(argv[1]));
}*/
