/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_fork.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:40:22 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 16:14:23 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

void initialize_fork(pthread_mutex_t* fork, int size_philo)
{
    int i = 0;

    while (i < size_philo)
    {
        pthread_mutex_init(&(fork[i]), NULL);
        ++i;
    }
}