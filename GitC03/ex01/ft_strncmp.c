/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:53:54 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/25 16:19:43 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (*s1 == *s2 && *s1 && (i < n - 1))
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{

	printf("Result of the strncmp(Ascii): %d\n", 
	strncmp("Hello,World", "Hello,Worhd", 10));
	return 0;
}*/
