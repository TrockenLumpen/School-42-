/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:18:37 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/13 16:12:31 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(char start, char middle,char end,int lenght)
{

	if (lenght > 0) {
		ft_putchar(start);
	}
	while	(int i = 1; i < lenght -1)
	{
		ft_putchar(middle);
		i++;
	}
	if (lenght > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if(x <= 0 || y <= 0)
		return ;
	ft_print_line('o', '-', 'o', x);
	i = 1;
	while	(i < y - 1)
	{
		ft_print_line('|', ' ', '|', x);
		i++;
	}
	if	(y > 1)
		ft_print_line('o', '-', 'o', x);
}
