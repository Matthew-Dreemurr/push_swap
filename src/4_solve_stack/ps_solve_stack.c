/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/21 17:45:07 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_solve_stack.h"
#include "ps_debug.h"
#include "ps_struct.h"

//TODO REMOVE
#include <stdio.h>
#include "ps_exit_prog.h"
/*
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

/**
 * When i have the index that i shearch, i will calculate how mutch
 *  `ra` or `rra` i need to put the shearch index at the firt place.
 * Then i push to `B`.
 */
void	ps_stack_solve(t_data *data)
{
	if (ps_check_stack_sort(&data->a))
	{
		if (PS_DEBUG)
			ft_putstr("Stack sort :)\n");
		return ;
	}
	if (data->ac < 6)
		ps_small_solve(data);
	else
		ps_big_solve(data);
	if (!ps_check_stack_sort(&data->a))
		if (PS_DEBUG)
			ft_putstr("Stack no sort !?\n");
	// debug_stack(data);//TODO REMOVE DEBUG
}
