/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_solve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:55:22 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 12:08:39 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_solve_stack.h"
#include "ps_instruction.h"
#include "libft.h"
#include "ps_exit_prog.h"
#include <stdlib.h>

#include <stdio.h>//TODO REMOVE

//TODO REMOVE
/*
#include <stdio.h>
static void	debug_stack(t_data *data)
{
	printf("[ A ] [ B ]\n");
	for (int i = 0; i < data->ac; i++)
	{
		if (i < data->a.len)
			printf("|%-4d", data->a.mem[i]);
		else
			printf("|    ");
		if (i < data->b.len)
			printf("|%-4d|\n", data->b.mem[i]);
		else
			printf("|    |\n");
	}
}
*/


void	ps_three_solver(t_data *data, int offset)
{
	if (ps_check_solver(data, "1 3 2", offset))
	{
		ps_sa(data);
		ps_ra(data);
	}
	else if (ps_check_solver(data, "2 1 3", offset))
	{
		ps_sa(data);
	}
	else if (ps_check_solver(data, "2 3 1", offset))
	{
		ps_rra(data);
	}
	else if (ps_check_solver(data, "3 1 2", offset))
	{
		ps_ra(data);
	}
	else if (ps_check_solver(data, "3 2 1", offset))
	{
		ps_sa(data);
		ps_rra(data);
	}
}

void	ps_four_solver(t_data *data)
{
	if (ps_check_solver(data, "x 1 x x", 0))
	{
		ps_sa(data);
	}
	else if (ps_check_solver(data, "x x 1 x", 0))
	{
		ps_ra(data);
		ps_ra(data);
	}
	else if (ps_check_solver(data, "x x x 1", 0))
	{
		ps_rra(data);
	}
	ps_pb(data);
	// debug_stack(data);//TODO REMOVE
	ps_three_solver(data, -1);
	ps_pa(data);
}

void	ps_two_solver(t_data *data)
{
	if (ps_check_solver(data, "2 1", 0))
		ps_sa(data);
}

/**
 * @brief
 *
 * @param data
 */
void	ps_small_solve(t_data *data)
{
	if (data->ac == 2)
		ps_two_solver(data);
	else if (data->ac == 3)
		ps_three_solver(data, 0);
	else if (data->ac == 4)
		ps_four_solver(data);
}
