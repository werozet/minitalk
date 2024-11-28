/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzielins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:43:30 by wzielins          #+#    #+#             */
/*   Updated: 2024/11/28 16:43:42 by wzielins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

void	signal_handling(int signum, siginfo_t *info, void *context)
{
	static int		bits = 0;
	static char		character = 0;

	(void)context;
	if (signum == SIGUSR1)
		character |= (1 << bits);
	bits++;
	if (bits == 8)
	{
		if (character == '\0')
			kill(info->si_pid, SIGUSR1);
		ft_printf("%c", character);
		bits = 0;
		character = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	sa.sa_sigaction = signal_handling;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
	{
		ft_printf("Signal handling error\n");
		return (EXIT_FAILURE);
	}
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
	{
		ft_printf("Signal handling error\n");
		return (EXIT_FAILURE);
	}
	while (1)
		pause();
	return (0);
}