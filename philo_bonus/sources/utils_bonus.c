/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:52:41 by mlitvino          #+#    #+#             */
/*   Updated: 2025/03/16 23:20:50 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	error(char *message)
{
	write(2, message, ft_strlen(message));
	write(1, "\n", 1);
	exit(1);
}

int	ft_strlen(char *message)
{
	int	res;

	res = 0;
	while (message[res])
		res++;
	return (res);
}

int	ft_isspace(int x)
{
	return (x == '\n' || x == '\v' || x == '\t'
		|| x == ' ' || x == '\f' || x == '\r');
}

long long	get_msec(struct timeval *tv)
{
	gettimeofday(tv, NULL);
	return ((tv->tv_sec * 1000) + (tv->tv_usec / 1000));
}

long long	get_usec(struct timeval *tv)
{
	gettimeofday(tv, NULL);
	return ((((long long)tv->tv_sec * 1000000) + tv->tv_usec));
}
