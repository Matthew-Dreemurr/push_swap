/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_big_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:44:34 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/21 16:36:25 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_instruction.h"
#include "ps_solve_set.h"
#include "libft.h"
#include "ps_exit_prog.h"
#include <stdlib.h>

//TODO REMOVE
#include <stdio.h>
/**
static void	debug_print_tab(int *tab, int len)
{
	for (int i = 0; i < len; i++)
		printf("%3d|[%d]\n", i, tab[i]);
}
**/

void	ps_big_solver(t_data *data)//TODO
{
	int	i;
	int	x;
	int	tmp;

	i = 1;
	while (i < data->ac)
	{
		tmp = data->solve[i];
		x = i - 1;
		while (x >= 0 && data->solve[x] > tmp)
		{
			data->solve[x + 1] = data->solve[x];
			x--;
		}
		data->solve[x + 1] = tmp;
		i++;
	}
	//TODO REMOTE
	// printf("Solve\n");//TODO REMOVE DEBUG
	// debug_print_tab(data->solve, data->ac);//TODO REMOVE DEBUG
}
