/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:05:22 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/29 17:17:52 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*#include <stdio.h>

int main()
{
	char test_string[] = "Hello,World!";
	printf("Lenght of '%s': %d\n", test_string, ft_strlen(test_string));
	
	return 0;
}*/
