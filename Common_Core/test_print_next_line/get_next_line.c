/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:43:32 by lkohn             #+#    #+#             */
/*   Updated: 2025/01/31 17:22:43 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *buffer, const char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}
char	*ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*linie;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	linie = ft_calloc((ft_strlen(buffer) - i + 1), size_of(char));
	i++;
	j = 0;
	while (buffer[i])
		linie[i++] = buffer[i++];
	free(buffer);
	return (linie);
}
char	*ft_line(char *buffer)
{
	char	*linie;
	int		i;

	i = 0;
	if (!buffer[i])
		return (0);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	linie = ft_calloc(i + 2, size_of(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		linie[i] = buffer[i];
	i++;
	if (buffer[i] && buffer[i] == '\n')
		linie[i++] = '\n';
	return (linie);
}
char	*read_file(const int fd, char *res)
{
	char	*buff;
	int		byte_read;

	if (!res)
		res = ft_calloc(1, 1);
	buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	byte_read = 1;
	while (byte_read > 0)
		byte_read = read(fd, buff, BUFFER_SIZE);
	if (byte_read == -1)
		return (free(res), free(buff), NULL);
	buff[byte_read] = '\0';
	res = ft_free(res, buff);
	if (ft_strchr(buff, '\n'))
	{
		break ;
	}
	free(buff);
	return (res);
}
char	*ft_get_next_line(int fd)
{
	static char *buffer;
	char *line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next(buffer);
	return (line);
}