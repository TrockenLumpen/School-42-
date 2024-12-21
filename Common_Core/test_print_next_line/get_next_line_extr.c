/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_extr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:39:27 by lkohn             #+#    #+#             */
/*   Updated: 2024/12/21 11:41:58 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * Calculates the lenght of a given string.
 *
 * @param s The string to calculate the lenght of.
 * @return The lenght of the string.
 */
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
/**
 * This function takes 2 strings and joins them, togheter.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A newly created string consisting of the 2 strings.
 */
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
		result = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
		if (!result)
		{
			return (NULL);
		}
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
/**
 * Fills a certain space in memory up with the value c, starting
 * from s, and up to n charackters.
 * @param s The starting destination in the memory.
 * @param c The charackter, or number, that will fill.
 * @param len How manz bytes should be filled.
 * @return A pointer to the starting destination.
 */
void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (len);
}
/**
 * Allocates a certain amount of memory and
 * initializes all the alloocated bytes to zero.
 *
 * @param count The amount of blocks to allocate.
 * @param size The size to allocate.
 * @return A pointer to the whole allocated block.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
/**
 * Searches for a specified charackter c in a given string s.
 *
 * @param s the string to perform the search operation on.
 * @param c The charackter to the charackter thaqt should be found.
 */
char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}