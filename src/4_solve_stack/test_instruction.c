/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 17:10:23 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_solve_stack.h"

//TODO REMOVE
/*
*/
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

void	ps_stack_solve(t_data *data)
{
	ps_pb(data);debug_stack(data);
	ps_pb(data);debug_stack(data);
	ps_pb(data);debug_stack(data);
	ps_pb(data);debug_stack(data);
	
	ps_ra(data);debug_stack(data);
	ps_ra(data);debug_stack(data);
	ps_ra(data);debug_stack(data);
	ps_ra(data);debug_stack(data);

	ps_rb(data);debug_stack(data);
	ps_rb(data);debug_stack(data);
	ps_rb(data);debug_stack(data);
	ps_rb(data);debug_stack(data);
	
	ps_rr(data);debug_stack(data);
	ps_rr(data);debug_stack(data);
	ps_rr(data);debug_stack(data);
	ps_rr(data);debug_stack(data);

	
}
