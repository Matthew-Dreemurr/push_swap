/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/08 16:00:29 by mahadad          ###   ########.fr       */
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
	find_biggest_nu(data);	//TODO /!\ !!!!!! Je ne suis pas sure du resonnement, je pense qu'on devra dans tout les cas remonter le premier donc autemp le faire tout de suite, verifier sur papier la logique.
							//TODO On peut savoir le prochain index a chercher donc c'est innutile de voiloir push le plus grand index
							//          Il suffit de push directe et de chercher son suivant, si le nombre est le plus grand (data->ac) on reset a 0 pour check ceux qui était en dessous.
							//TODO TODO TODO trouver un moyen de ne pas devoir remonter le plus grand
							//TODO TODO TODO   x = data->a.mem[0] 
							//                 while
							//                    if data->a.mem[0] == x
							//                        ps_push
							//                    if x > data->a.len
							//                        then x = 0;

/**
 * I will push the first element in `[a]`.
 * After i will find the preview index of `data->b.mem[0]`.
 */

/**
int	get_pre_index(int index, int max)
{
	if (index < 0 || index > max)
		if (PS_DEBUG)
		{
			printf("get_pre_index(): Negatif index or > max !\n");
			return (-1);
		}
	if (!index)
		return (max - 1);
	else
		return (index - 1);
}
**/
/*
 * When i have the index that i shearch, i will calculate how mutch `ra` or `rra` i need to put the shearch index at the firt place.
 * Then i push to `B`.
 */

	// ps_pb(data);
	debug_stack(data);//TODO REMOVE DEBUG
	printf("[%d]\n", ps_check_stack_sort(&data->a));
}
