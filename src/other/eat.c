/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:26:07 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/19 12:52:55 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

void eat(t_philo* philo)
{
    pthread_mutex_lock(philo->l_lock);
    pthread_mutex_lock(philo->r_lock);
    ft_usleep(philo->time_to_eat);
    ft_print_message("is eating", philo, philo->id);
    pthread_mutex_unlock(philo->r_lock);
    pthread_mutex_unlock(philo->l_lock);
}