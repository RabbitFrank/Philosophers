/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:10:11 by mlitvino          #+#    #+#             */
/*   Updated: 2025/03/14 17:38:48 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	t_forks	*forks;
	t_philo *philos;
	t_info	info;

	forks = NULL;
	philos = NULL;
	int temp = 0;
	while (1)
	{temp++;}
	if (argc < 5)
		return (error("Error: wrong format"), -1);
	if (check_args(argc, argv, &info) == -1)
		return (error("Error: invalid argument"), -1);
	forks = init_forks(&info, forks, info.max_philos);
	if (!forks)
		return (-1);
	philos = init_philos(philos, forks, &info);
	if (!philos)
		return (-1);
	if (create_philos(philos, &info) == -1)
		return (-1);
	join_clean(philos, &info);
	return (0);
}
