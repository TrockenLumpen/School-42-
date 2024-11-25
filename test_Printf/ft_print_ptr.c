/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:10:52 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/25 13:11:38 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(void *ptr, int *i)
{
	unsigned long	p;

	p = (unsigned int)ptr;
	if (p)
	{
		ft_print_char('0x', i);
		ft_print_num_base(p, "123456789abcdef", i);
	}
	else
		ft_print_str("(nol)", i);
}
