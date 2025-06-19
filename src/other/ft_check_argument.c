/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:43:54 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 16:03:47 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

int ft_check_argument(char** argv)
{
    if ((ft_atoi(argv[1]) <= 0 || ft_atoi(argv[1]) > MAX_PHILO) || (!ft_is_digit(argv[1])))
        return (printf("Invalid number of philosophers\n"), 0);
    if (ft_atoi(argv[2]) <= 0 || !ft_is_digit(argv[2]))
        return (printf("Invalid time to die\n"), 0);
    if (ft_atoi(argv[3]) <= 0 || !ft_is_digit(argv[3]))
        return (printf("Invalid time_to_eat\n"), 0);
    if (ft_atoi(argv[4]) <= 0 || !ft_is_digit(argv[4]))
        return (printf("Invalid time_to_sleep\n"), 0);
    return (1);
}