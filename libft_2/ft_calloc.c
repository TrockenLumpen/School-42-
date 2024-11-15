/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:36:16 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/01 17:40:35 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = num * size;
	if (num != 0 && size > SIZE_MAX / num)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr)
	{
		ft_bzero(ptr, total_size);
	}
	return (ptr);
}
