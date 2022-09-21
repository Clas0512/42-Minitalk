/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:03:39 by anargul           #+#    #+#             */
/*   Updated: 2022/09/21 21:52:33 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static char	g_str[8];

void	ft_putmessage(siginfo_t	*info)
{
	char	a;
	int		n;
	int		i;
	int		cpid;

	a = 0;
	i = 0;
	n = 128;
	while (i < 8)
	{
		if (g_str[i] == 1)
			a += n;
		n = n / 2;
		i++;
	}
	if (a == 0)
	{
		cpid = info->si_pid;
		kill(cpid, SIGUSR1);
		ft_printf("\n");
	}
	ft_printf("%c", a);
}

void	sg_handler(int signalnum, siginfo_t *info, void *a)
{
	static int	i;

	(void)a;
	if (signalnum == SIGUSR1)
		g_str[i] = 1;
	else if (signalnum == SIGUSR2)
		g_str[i] = 0;
	i++;
	if (i % 8 == 0)
	{
		ft_putmessage(info);
		i = 0;
	}
}

int	main(void)
{
	struct sigaction	sgact;
	int					i;

	i = getpid();
	ft_printf("PID --> %d\n", i);
	sgact.sa_flags = SA_SIGINFO;
	sgact.sa_sigaction = sg_handler;
	sigaction(SIGUSR1, &sgact, 0);
	sigaction(SIGUSR2, &sgact, 0);
	while (1)
		pause();
}
