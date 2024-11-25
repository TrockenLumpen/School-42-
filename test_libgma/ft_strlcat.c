/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:23:01 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/11 14:56:32 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (destlen >= n)
		destlen = n;
	if (destlen == n)
		return (destlen + srclen);
	if (srclen + destlen < n)
		ft_memcpy(dst + destlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + destlen, src, n - destlen - 1);
		dst[n - 1] = '\0';
	}
	return (destlen + srclen);
}
