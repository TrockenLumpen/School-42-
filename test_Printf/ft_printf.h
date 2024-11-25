/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:05:01 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/25 11:17:23 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_main(va_list args, char *str, int *i);
void	ft_print_char(char c, int *i);
void	ft_print_ptr(void *ptr, int *i);
void	ft_print_string(char *str, int i);
void	ft_print_hex(unsigned int num, int *i, char *base);
void	ft_print_num_base(unsigned long int p, char *base, int *i);
void	ft_print_unsigned_num(unsigned int num, int *i);

#endif
