/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:41:11 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/10 15:23:52 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* s : You pass in a string s (like "Hello")
   f : A function that will be applied to each
   charackter of the string. This function will
   take two arguments.
*/
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	if (!f || !s)
	{
		return (NULL);
	}
	map = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!map)
	{
		return (NULL);
	}
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
