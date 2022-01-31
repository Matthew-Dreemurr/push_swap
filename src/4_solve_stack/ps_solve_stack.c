/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/31 19:39:54 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_solve_stack.h"

//TODO REMOVE
#include <stdio.h>
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
	
	int	x;

	debug_stack(data);
	x = 0;
	while (data->a.mem[0] != data->solve[(data->ac - 1)])
	{
		debug_stack(data);
		ps_ra(data);
		printf("%d\n\n",  data->solve[(data->ac - 1)]);//TODO WIP ./push_swap 3 2 5 
		getchar();
		// printf("\033[2J");
	}
	ps_pb(data);
	while (data->a.len)
	{
		while (x < (data->a.len))
		{
			if ((data->b.mem[0] - 1) == data->a.mem[0])
				ps_pb(data);
			ps_ra(data);
			x++;
		}
		x = 0;
	}
	//tmp//debug_stack(data);
	printf("[%d]\n", ps_check_stack_sort(&data->a));
}
