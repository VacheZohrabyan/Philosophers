/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_philo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:56:25 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 17:39:37 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

void	initialize_philo(char **argv, t_program **program,
		pthread_mutex_t **fork)
{
	int	i;

	i = 0;
	(*program)->philo->num_of_philos = ft_atoi(argv[1]);
	initialize_fork(*fork, (*program)->philo->num_of_philos);
	printf("%d\n", (*program)->philo->num_of_philos);
	while (i < (*program)->philo->num_of_philos)
	{
		(*program)->philo[i].num_of_philos = ft_atoi(argv[1]);
		(*program)->philo[i].id = i + 1;
		(*program)->philo[i].eating = 0;
		(*program)->philo[i].meals_eaten = 0;
		(*program)->philo[i].write_lock = &((*program)->write_lock);
		(*program)->philo[i].meal_lock = &((*program)->meal_lock);
		(*program)->philo[i].dead_lock = &((*program)->dead_lock);
		(*program)->philo[i].time_to_dead = ft_atoi(argv[2]);
		(*program)->philo[i].time_to_eat = ft_atoi(argv[3]);
		(*program)->philo[i].time_to_sleep = ft_atoi(argv[4]);
		(*program)->philo[i].start_time = get_current_time();
		(*program)->philo[i].last_meal = get_current_time();
		(*program)->philo[i].dead = &((*program)->dead_flag);
		(*program)->philo[i].l_lock = fork[i];
		if (argv[5])
			(*program)->philo[i].r_lock = fork[(*program)->philo[i].num_of_philos - 1 - i];
		else 
			(*program)->philo[i].r_lock = fork[i - 1];
		++i;
	}
}