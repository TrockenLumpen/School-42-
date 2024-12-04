/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:41:15 by lkohn             #+#    #+#             */
/*   Updated: 2024/10/16 15:56:47 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>//

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int main(void)
{
    printf("%i\n", ft_strcmp("Hello", "Hello"));
    printf("%i\n", ft_strcmp("ello", "Hello"));
    printf("%i\n", ft_strcmp("Hello", "ello"));
    printf("%i\n", ft_strcmp("Hallo", "Hello"));
}*/
