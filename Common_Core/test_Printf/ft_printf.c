/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:29:07 by lkohn             #+#    #+#             */
/*   Updated: 2024/12/02 14:34:07 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* Here we define for Printf witch letter meant for each function(like in the original)
	va_list is meant to store information about the designaded functions Arguments like a list */
void	ft_main(va_list args, char *str, int *i)
{
	if (*str == 'c')
		ft_print_char(va_arg(args, int), i);
	else if (*str == 's')
		ft_print_string(va_arg(args, char *), i);
	else if (*str == 'i' || *str == 'd')
		ft_print_num(va_arg(args, int), i);
	else if (*str == 'p')
		ft_print_ptr(va_arg(args, void *), i);
	else if (*str == 'u')
		ft_print_unsigned_num(va_arg(args, unsigned int), i);
	else if (*str == 'x')
		ft_print_hex(va_arg(args, unsigned int), i, HEX_LOW_BASE);
	else if (*str == 'X')
		ft_print_hex(va_arg(args, unsigned int), i, HEX_UPP_BASE);
	else if (*str == '%')
		ft_print_char(*str, i);
}
/* Here we use the list we created above. The & is from va_start and is meant to take the designaded pointer of the function above and utilise it into a another function */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_main(args, (char *)str, &i);
		}
		else
			ft_print_char(*str, &i);
		str++;
	}
	va_end(args);
	return (i);
}
