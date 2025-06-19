/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dream.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:32:56 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/19 12:37:26 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

void dream(t_philo* philo)
{
    ft_print_message("is sleeping", philo, philo->id);
    ft_usleep(philo->time_to_sleep);
}