/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:39:10 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/18 15:18:34 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab [i] > tab [i + 1])
			{
				temp = tab [i];
				tab [i] = tab [i + 1];
				tab [i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
