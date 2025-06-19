/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:21:33 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 16:53:36 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

int main(int argc, char** argv)
{
    t_program* program;
    pthread_mutex_t *fork;
    if (argc < 5 || argc > 6)
        return (printf("Many argument\n"), 0);
    if (!ft_check_argument(argv))
        return (1);
    if (!initialize(argv, &program, &fork))
        return (ft_free(&program, &fork), 1);
    ft_free(&program, &fork);
}