/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:52:49 by lkohn             #+#    #+#             */
/*   Updated: 2024/12/02 15:27:14 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	lenght;

	lenght = 0;
	if (!str)
		return (0);
	while (str[lenght])
		lenght++;
	return (lenght);
}

void	ft_print_num_base(unsigned long int p, char *base, int *i)
{
	unsigned long int	lenght;

	lenght = ft_strlen(base);
	if (p / lenght)
		ft_print_num_base(p / lenght, base, i);
	ft_print_char(base[p % lenght], i);
}
