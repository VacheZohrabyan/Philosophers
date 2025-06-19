/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_program.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:31:04 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 16:03:04 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

int initialize_program (char **argv, t_program** program, pthread_mutex_t **fork)
{
    (*program)->dead_flag = 0;
    pthread_mutex_init(&((*program)->write_lock), NULL);
    pthread_mutex_init(&((*program)->meal_lock), NULL);
    pthread_mutex_init(&((*program)->dead_lock), NULL);
    (*program)->philo = (t_philo*)malloc(sizeof(t_philo) * ft_atoi(argv[1]));
    if (!((*program)->philo))
        return (printf("Philo malloc not allocated\n"), 0);
    (*fork) = (pthread_mutex_t*)malloc(sizeof(pthread_mutex_t) * ft_atoi(argv[1]));
    if (!(*fork))
        return (printf("fork malloc not allocated\n"), 0);
    return (1);
}