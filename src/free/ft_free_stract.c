/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stract.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:45:08 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/17 16:46:53 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/philo.h"

void ft_free_struct(t_program **program)
{
    if (*program)
    {
        free((*program)->philo);
        (*program)->philo = NULL;
        free((*program));
        (*program) = NULL;
    }
    return ;
}