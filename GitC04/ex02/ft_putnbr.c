/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:03:02 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/31 16:22:18 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		write(1, "-", 1);
		long_nb = -1 * long_nb;
	}
	if (long_nb > 9)
	{
		ft_putnbr(long_nb / 10);
	}
	ft_putchar((long_nb % 10) + '0');
}
/*
int	main(void)
{
	ft_putnbr(-73354);
}
*/		
