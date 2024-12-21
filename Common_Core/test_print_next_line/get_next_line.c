/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:43:32 by lkohn             #+#    #+#             */
/*   Updated: 2024/12/21 13:41:00 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * The ft_free funtion exists as a utility to manage memory dynamically
 * and to simplify the process of joining strings while avoiding memory leaks.
 * By doing this all we prevent the programm to give out memory leaks.


 * @param buffer A pointer to a dynamically allocated string that needs to be freed
 * after being combined with buf.
 * @param buf A string to cocatenate to buffer.
 * @return A pointer to the newly allocated string that is
 * the result of cocatenating buffer and buf.
 */
char	*ft_free(char *buffer, const char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}
char	*get_next_line(int fd)
{
}
