/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_solve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:55:22 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/23 17:30:26 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_solve_stack.h"
#include "ps_instruction.h"

#include <stdio.h>//TODO REMOVE

void	ps_three_solver(t_data *data)
{
	ps_two_solver(data);
	if (data->a.mem[1] > data->a.mem[2])//TODO WIP
		ps_sa(data);
}

void	ps_two_solver(t_data *data)
{
	if (data->a.mem[0] > data->a.mem[1])
		ps_sa(data);
}



/**
 * @brief 
 * 
 * @param data 
 */
void	ps_small_solve(t_data *data)
{
	(void)data;//TODO TODO WIP
	if (data->ac == 2)
		ps_two_solver(data);
}
