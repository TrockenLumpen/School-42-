/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:53:18 by lkohn             #+#    #+#             */
/*   Updated: 2025/03/03 15:52:48 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>    // INTMAX, INTMIN,etc...
#include <signal.h>    // signal,sigemptyset,sigaddset,sigaction
#include <sys/types.h> // fork(),getpid(),kill(),[pid_t]
#include <unistd.h>    // write,sleep,usleep

// this function will read the lenght of the string byte by byte and sends it to the server.
static void	char_bit_by_bit(int lenght, unsigned int pid)
{
	unsigned int	i;

	i = 0;
	while (i++ < 8)
	{
		if (lenght & 0x01)
			kill(pid, SIGUSR2);
		else
		{
			kill(pid, SIGUSR1);
			lenght = lenght >> 1;
			usleep(100);
			i++;
		}
	}
}
// this function reads byte by byte a string and sends it to the server.
static void	strlen_bit_by_bit(int lenght, unsigned int pid)
{
	unsigned int	i;

	i = 0;
	while (i++ < 32)
	{
		if (lenght & 0x01)
			kill(pid, SIGUSR2);
		else
		{
			kill(pid, SIGUSR1);
			lenght = lenght >> 1;
			usleep(100);
			i++;
		}
	}
}
/*this function is checking if there is a 3 argument or
numbers as an input for the pid.*/
static int	error_oc(int ac, char **av)
{
	unsigned int	i;

	i = 0;
	if (ac != 3)
	{
		return (1);
	}
	while (av[1][i++])
	{
		if (!ft_strchr("0123456789", av[1][i]))
			return (1);
	}
	return (0);
}
/*1. if there is a error return -1.
  2. pid = av[1]/if pid is equal tiny than 0 return -1.
  3. send_string = av[2]/we calculate with strlen send_string and give lenght the value.
  4. */
int	main(int ac, char **av)
{
	int i;
	int pid;
	char send_string;
	int lenght;

	if (error_oc(ac, av))
		return (-1);
	pid = ft_atoi(av[1]);
	if (pid <= 0)
		return (-1);
	send_string = av[2];
	lenght = ft_strlen(send_string);

	i = 0;
	strlen_bit_by_bit(lenght, pid);
	while (send_string[i] != '\0')
		char_bit_by_bit(send_string[i], pid);
	i++;
	strlen_bit_by_bit(send_string[i], pid);
}