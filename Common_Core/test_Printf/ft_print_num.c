/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:25:00 by lkohn             #+#    #+#             */
/*   Updated: 2024/12/02 16:45:14 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_num(int num, int *i)
{
	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		(*i) += 11;
		return ;
	}
	if (num == INT_MAX)
	{
		write(1, "2147483647", 10);
		(*i) += 10;
		return ;
	}
	if (num < 0)
	{
		ft_print_char('-', i);
		num = -num;
	}
	if (num > 9)
	{
		ft_print_num((num / 10), i);
		ft_print_num((num % 10), i);
	}
	else
		ft_print_char(num + 48, i);
}
