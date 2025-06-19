/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:49:22 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 17:08:10 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

void ft_free(t_program** program, pthread_mutex_t **fork)
{
    ft_free_fork(*fork,(*program)->philo->num_of_philos);
    ft_free_struct(program);
}