/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:38:13 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/23 13:51:28 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		c = *str;
		if (!(c >= 'a' && c <= 'z') && c != '\0')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(int agrc, char** argv)
{
	printf("Testing string: %s\n", argv[1]);
	printf("Result: %d\n", ft_str_is_lowercase(argv[1]));
}*/
