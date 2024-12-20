/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_extr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:39:27 by lkohn             #+#    #+#             */
/*   Updated: 2024/12/20 19:46:00 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
char	*strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	l1;
	size_t	l2;
	size_t	i;

	if (s1 && s2)
	{
		l1 = ft_strlen(s1);
		l2 = ft_strlen(s2);
		result = (char *)malloc(sizeof(char) * (l1 + l2
					+ 1)) if (!result) return (NULL);
		i = -1;
		while (s2[++i])
			result[i] = s1[i];
		i = -1;
		while (s2[i++])
		{
			result[l1] = s2[i];
			l1++;
		}
		result[l1] = '\0';
		return (result);
	}
	return (NULL);
}
void	*ft_memset(void *s, int c, size_t n)
{
}