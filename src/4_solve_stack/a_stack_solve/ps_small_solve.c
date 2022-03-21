/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_solve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:55:22 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 13:44:18 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_solve_stack.h"
#include "ps_instruction.h"
#include "libft.h"
#include "ps_exit_prog.h"
#include <stdlib.h>

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

void	ps_four_solver(t_data *data, int offset)
{
	if (ps_check_solver(data, "x 1 x x", offset))
	{
		ps_sa(data);
	}
	else if (ps_check_solver(data, "x x 1 x", offset))
	{
		ps_ra(data);
		ps_ra(data);
	}
	else if (ps_check_solver(data, "x x x 1", offset))
	{
		ps_rra(data);
	}
	ps_pb(data);
	ps_three_solver(data, -1 + offset);
	ps_pa(data);
}

void	ps_five_solver(t_data *data)
{
	if (ps_check_solver(data, "x 1 x x x", 0))
	{
		ps_sa(data);
	}
	else if (ps_check_solver(data, "x x 1 x x", 0))
	{
		ps_ra(data);
		ps_ra(data);
	}
	else if (ps_check_solver(data, "x x x 1 x", 0))
	{
		ps_rra(data);
		ps_rra(data);
	}
	else if (ps_check_solver(data, "x x x x 1", 0))
	{
		ps_rra(data);
	}
	ps_pb(data);
	ps_four_solver(data, -1);
	ps_pa(data);
}

void	ps_two_solver(t_data *data)
{
	if (ps_check_solver(data, "2 1", 0))
		ps_sa(data);
}

void	ps_small_solve(t_data *data)
{
	if (data->ac == 2)
		ps_two_solver(data);
	else if (data->ac == 3)
		ps_three_solver(data, 0);
	else if (data->ac == 4)
		ps_four_solver(data, 0);
	else if (data->ac == 5)
		ps_five_solver(data);
}
