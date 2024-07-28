/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:22:56 by lkohn             #+#    #+#             */
/*   Updated: 2024/07/25 12:34:47 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char* first_str = "I can't write";
	char* second_str = "I cmn't write";

	int result = strcmp(first_str, second_str);

	printf("Result of the strcmp(Ascii): %d\n", result);
	return 0;
}*/
