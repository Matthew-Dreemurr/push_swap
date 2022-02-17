/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/17 16:45:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_solve_stack.h"
#include "ps_debug.h"

//TODO REMOVE
#include <stdio.h>
#include "ps_exit_prog.h"
/*
*/
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

/**
static void	find_biggest_nu(t_data *data)
{
	int	test;

	test = ps_solve_stack_find_last(data);
	if (test)
	{
		while (data->a.mem[0] != data->a.len - 1)
		{
			if (test == 1)
				ps_rra(data);
			else
				ps_ra(data);
			// debug_stack(data);//TODO REMOVE DEBUG
			// getchar();
			// printf("\033[2J");
		}
	}
}
**/

/**
 * Will find the preview index of `data->b.mem[0]`.
 */

int	get_pre_index(int index, int max)
{
	if (index < 0 || index > max)
	{
		if (PS_DEBUG)
		{
			printf("get_pre_index(): Negatif index or > max !\n");
			return (-1);
		}
	}
	if (!index)
		return (max - 1);
	else
		return (index - 1);
}

/**
 * When i have the index that i shearch, i will calculate how mutch `ra` or `rra` i need to put the shearch index at the firt place.
 * Then i push to `B`.
 */
void	ps_stack_solve(t_data *data)
{
	int	index;
	int	move;

	index = get_pre_index(data->a.mem[0], data->ac);
	ps_pb(data);
	debug_stack(data);//TODO REMOVE DEBUG
	while (data->a.len)
	{
		move = ps_solve_stack_best_move(data, index);//WIP//TODO faire une version hybride pour check a la fois la stack a et b//TODO

		// printf("move : [%d]\n", move);//TODO REMOVE DEBUG

		if (move == 1)
		{
			while (data->a.mem[0] != index)
				ps_rra(data);
		}
		if (move == -1)
			while (data->a.mem[0] != index)
				ps_ra(data);

		ps_pb(data);
		index = get_pre_index(index, data->ac);

		debug_stack(data);//TODO REMOVE DEBUG
	}
	printf("[%d]\n", ps_check_stack_sort(&data->a));
}
