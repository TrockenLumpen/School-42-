/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:28:32 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/01 17:27:49 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (!dst && !src)
	{
		return (0);
	}
	if (dst < src)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (dst > src)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dst);
}
