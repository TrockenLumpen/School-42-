/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itao.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:40 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/10 14:47:19 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_lenght(int n)
{
	int	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

/**
 * Converts an integer number into a string.
 * Supports all negative and positive integers.
 *
 * @param n The integer to convert.
 * @result A new string containing the number.
 */
char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	size_t	s;

	num = (long)n;
	s = get_num_lenght(n);
	if (n < 0)
	{
		num *= -1;
	}
	result = (char *)malloc(s + 1);
	if (!result)
		return (NULL);
	*(result + s--) = '\0';
	while (num > 0)
	{
		*(result + s--) = (num % 10) + '0';
		num /= 10;
	}
	if (s == 0 && result[1] == '\0')
		*(result + s) = '0';
	else if (s == 0 && result[1])
		*(result + s) = '-';
	return (result);
}
