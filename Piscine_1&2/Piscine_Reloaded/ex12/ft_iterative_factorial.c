/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:55:05 by lkohn             #+#    #+#             */
/*   Updated: 2024/10/15 14:06:48 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	factorial;

	result = 1;
	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (factorial <= nb)
	{
		result *= factorial;
		factorial++;
	}
	return (result);
}
