/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:59:16 by lkohn             #+#    #+#             */
/*   Updated: 2024/10/15 16:01:40 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int factorial, int number)
{
	factorial *= number;
	number--;
	if (number > 0)
	{
		return (ft_recursive_factorial_recursive(factorial, number));
	}
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial_recursive(1, nb));
}
