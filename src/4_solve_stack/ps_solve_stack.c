/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/01 16:23:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_solve_stack.h"

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

void	ps_stack_solve(t_data *data)
{
	//TODO 
	//TODO 
	//TODO La stack `a` contiend mtn les hash des nombre
	//TODO Trouver une logique pour générer les instruction
	//TODO Check -> https://discord.com/channels/@me/927974007058337843/927980541960134716
	//TODO Push le premier `a`, chercher son suivent 
	//TODO 
	//TODO 
	//TODO make rra rrb rrr !!!
	int	x;

	x = 0;
	debug_stack(data);
	printf("up or down ? [%d]\n", ps_solve_stack_find_last(data));
	// ps_pb(data);
	//tmp//debug_stack(data);
	printf("[%d]\n", ps_check_stack_sort(&data->a));
}
