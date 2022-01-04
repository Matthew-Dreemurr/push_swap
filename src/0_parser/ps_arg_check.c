/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:01:36 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 14:31:27 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_parser.h"
#include "libft.h"
#include <stdlib.h>

/**
 * @brief Check if is not < INT_MAX || > INT_MIN and conv to int
 * 
 * @param str 
 */
static int	conv_atoi(const char *str, t_data *data)
{
	long	nb;

	nb = fk_atol(str);
	if (nb > INT_MIN || nb < INT_MIN)
		ps_exit_prog(EXIT_FAILURE, data);
	return ((int)nb);
}

/**
 * @brief 
 * 
 * @param av 
 */
void	ps_arg_check(char **av, t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size)
		data->set[i] = conv_atoi(av[i], data);
}
