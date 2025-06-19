/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_current_time.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:50:02 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 16:16:23 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

size_t get_current_time()
{
    struct timeval time;
    
    if (gettimeofday(&time, NULL))
        printf("Invalid time(get_current_time)\n");
    return ((time.tv_sec / 1000) + (time.tv_usec * 1000));
}