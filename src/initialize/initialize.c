/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:22:36 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 16:08:11 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

int initialize(char** argv, t_program** program, pthread_mutex_t **fork)
{
    *program = (t_program*)malloc(sizeof(t_program));
    if (!(*program))
        return (printf("program malloc not allocated\n"), 0);
    if (!initialize_program(argv, program, fork))
        return (printf("initilaize_program\n"), 0);
    initialize_philo(argv, program, fork);
    return 1;
}