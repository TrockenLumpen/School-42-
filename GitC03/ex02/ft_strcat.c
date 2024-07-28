/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:59:42 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/26 18:06:49 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*result)
	{
		result++;
	}
	while (*src)
	{
		*result = *(unsigned char *)src;
		result++;
		src++;
	}
	*result = '\0';
	return (dest);
}
