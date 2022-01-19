/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:06:37 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/19 16:47:20 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_solve_set.h"
#include "ps_struct.h"
#include "libft.h"
#include "stdlib.h"
#include "ps_exit_prog.h"

//TODO REMOVE
#include <stdio.h>

static void	init(t_data *data)
{
	data->solve = ft_calloc(data->ac, sizeof(int));
	if (!data->solve)
		ps_exit_prog(EXIT_FAILURE, data, "Fail malloc data->set\n");
	ft_memcpy(data->solve, data->set, data->ac * sizeof(int));
}

void	ps_solve_set(t_data *data)//TODO implement hardcode solver for n <= 5
{
	init(data);
	if (data->ac <= 5)
		ps_litle_solver(data);
	else
		ps_big_solver(data);
}
