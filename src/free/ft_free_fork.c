/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:43:18 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 17:02:12 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

void ft_free_fork(pthread_mutex_t* fork, int size_philo)
{
    int i = 0;

    if (fork)
    {
        while (i < size_philo)
        {
            pthread_mutex_destroy(&(fork[i]));
            ++i;
        }
        free(fork);
    }
    return;
}