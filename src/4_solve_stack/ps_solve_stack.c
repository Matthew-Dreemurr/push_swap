/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/19 14:06:54 by mahadad          ###   ########.fr       */
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
	//TODO make a set indexing and check the biggest numbre to avoid check all 32 bits
	//TODO
	//TODO int	ps_max_bit_size();
	//TODO   while
	//TODO     if 1&(nb<<bit) is true
	//TODO      then tmp = bit
	//TODO     bit++
	//TODO   return tmp
	/**
	int	i;
	int	x;
	int	int_bits;

	i = 0;
	x = 0;
	int_bits = (int)(sizeof(int) * 8);
	while (i < int_bits)
	{
		printf("check bit [%d]\n", i);
		while (x < data->ac)
		{
			if (!ps_get_bit(data->a.mem[0], i))
				ps_pb(data);
			else
				ps_ra(data);
			x++;
		}
		ps_ppa(data);
		i++;
		x = 0;
	}
	**/
	debug_stack(data);
}
