/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_solve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:55:22 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 11:22:08 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_solve_stack.h"
#include "ps_instruction.h"
#include "libft.h"
#include "ps_exit_prog.h"
#include <stdlib.h>

#include <stdio.h>//TODO REMOVE

/**
 * @brief /!\\ Use the right structure, `arg` = "x x x x" || "1 x x x",
 *            only digit no number [0-9]
 *  
 * @return int If the tab dont matches with the structure return `0` else `1`
 */
static int	ps_check_solver(t_data *data, const char *arg)
{
	int	index;
	int	x;

	index = 0;
	x = 0;
	if (!charsetstr_strict(arg, " 1234567890x"))
		ps_exit_prog(EXIT_FAILURE, data, "ps_check_solver(): Bad arg !??\n");
	while (index < data->ac)
	{
		if (*(arg + x) != 'x')
			if (ft_atoi(arg + x) != data->a.mem[index])
				return (0);
		x += 2;
		index++;
	}
	return (1);
}

void	ps_three_solver(t_data *data)
{
	if (ps_check_solver(data, "1 3 2"))
	{
		ps_sa(data);
		ps_ra(data);
	}
	else if (ps_check_solver(data, "2 1 3"))
	{
		ps_sa(data);
	}
	else if (ps_check_solver(data, "2 3 1"))
	{
		ps_rra(data);
	}
	else if (ps_check_solver(data, "3 1 2"))
	{
		ps_ra(data);
	}
	else if (ps_check_solver(data, "3 2 1"))
	{
		ps_sa(data);
		ps_rra(data);
	}
}

void	ps_four_solver(t_data *data)
{
	if (ps_check_solver(data, "x 1 x x"))
	{
		printf("%d\n", __LINE__);
		ps_sa(data);
	}
	else if (ps_check_solver(data, "x x 1 x"))
	{
		printf("%d\n", __LINE__);
		ps_ra(data);
		ps_ra(data);
	}
	else if (ps_check_solver(data, "x x x 1"))
	{
		printf("%d\n", __LINE__);
		ps_rra(data);
	}
	ps_pb(data);
}

void	ps_two_solver(t_data *data)
{
	if (ps_check_solver(data, "2 1"))
		ps_sa(data);
}

/**
 * @brief
 *
 * @param data
 */
void	ps_small_solve(t_data *data)
{
	if (data->ac == 2)
		ps_two_solver(data);
	else if (data->ac == 3)
		ps_three_solver(data);
	else if (data->ac == 4)
		ps_four_solver(data);
}
