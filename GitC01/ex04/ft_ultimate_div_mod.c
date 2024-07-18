/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:24:35 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/17 16:31:56 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("Result of division: %d\n", a);
	printf("Remainder: %d\n", b);
	return (0);
}
*/
