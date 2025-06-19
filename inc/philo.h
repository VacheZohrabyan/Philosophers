/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:21:56 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/19 12:50:59 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
#define PHILO_H

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>

#define MAX_PHILO 300

typedef struct s_philo
{
    pthread_t thread;
    int id;
    int eating;
    int meals_eaten;
    size_t last_meal;
    size_t time_to_eat;
    size_t time_to_dead;
    size_t time_to_sleep;
    size_t start_time; 
    int 				num_of_philos;
	int 				num_times_to_eat;
    int* dead;
    pthread_mutex_t *l_lock;
    pthread_mutex_t *r_lock;
    pthread_mutex_t *write_lock;
    pthread_mutex_t *dead_lock;
    pthread_mutex_t *meal_lock;
}   t_philo;

typedef struct s_program
{
    int dead_flag;
    pthread_mutex_t write_lock;
    pthread_mutex_t dead_lock;
    pthread_mutex_t meal_lock;
    t_philo *philo;
}   t_program;

int ft_check_argument(char** argv);

int initialize(char** argv, t_program** program, pthread_mutex_t** fork);
int initialize_program (char **argv, t_program** program, pthread_mutex_t** fork);
void initialize_philo(char** argv, t_program** program, pthread_mutex_t **fork);
void initialize_fork(pthread_mutex_t* fork, int size_philo);

size_t ft_atoi(char* str);

int ft_is_digit(char* str);

void ft_free_single(char* str);
void ft_free_double(char** str);
void ft_free_struct(t_program **program);
void ft_free_fork(pthread_mutex_t* fork, int size_philo);
void ft_free(t_program** program, pthread_mutex_t **fork);

int	ft_usleep(size_t milliseconds);
size_t get_current_time();

void eat(t_philo* philo);
void dream(t_philo* philo);
void think(t_philo* philo);
void ft_print_message(char* str, t_philo* philo, int id);

#endif