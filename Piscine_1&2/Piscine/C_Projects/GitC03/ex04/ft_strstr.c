/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:06:13 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/28 11:55:34 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == '\0')
	{
		return (str);
	}
	a = str;
	b = to_find;
	while (true)
	{
		if (*b == '\0')
			return (a - (b - to_find));
		if (*a == *b)
			b++;
		else
			b = to_find;
		if (*a == '\0')
			break ;
		a++;
	}
	return (0);
}
