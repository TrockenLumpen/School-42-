/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:59:37 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/25 19:03:57 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		c = *str;
		if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && c != 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int main(int argc,char** argv)
{
    printf("Testing string: %s\n",argv[1]);
    printf("Result: %d\n", ft_str_is_alpha(argv[1]));
}*/
