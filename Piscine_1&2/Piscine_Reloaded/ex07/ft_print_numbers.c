/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:42:27 by lkohn             #+#    #+#             */
/*   Updated: 2024/10/14 17:13:20 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = 0;
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}
/*int	main()
{
	ft_print_numbers();
	write(1 ,'\n', 1);

	return 0;
}*/
