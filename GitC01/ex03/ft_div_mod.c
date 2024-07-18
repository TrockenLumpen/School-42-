/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:57:40 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/17 14:21:54 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int a = 6;
	int b = 2;
	int result_div, result_mod;

	ft_div_mod(a, b, &result_div, &result_mod);
	printf("Result of %d divided by %d: 
	Quotient = %d, Remainder = %d\n", a, b, result_div, result_mod);
	return 0;
}

