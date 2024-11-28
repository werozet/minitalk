/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:42:50 by wzielins          #+#    #+#             */
/*   Updated: 2024/11/28 16:42:54 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

void	send_char(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c >> bit) & 1)
		{
			if (kill(pid, SIGUSR1) == -1)
			{
				ft_printf("Error sending signal.\n");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
			{
				ft_printf("Error sending signal.\n");
				exit(EXIT_FAILURE);
			}
		}
		bit++;
		usleep(400);
	}
}

void	sending_confirmation(int signum)
{
	if (signum == SIGUSR1)
		ft_printf("Message received by server.\n");
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;
	int		i;

	if (argc != 3)
	{
		ft_printf("Usage: ./client <server_pid> <message>\n");
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	signal(SIGUSR1, sending_confirmation);
	i = 0;
	while (message[i])
	{
		send_char(pid, message[i]);
		i++;
	}
	send_char(pid, '\n');
	send_char(pid, '\0');
	return (0);
}