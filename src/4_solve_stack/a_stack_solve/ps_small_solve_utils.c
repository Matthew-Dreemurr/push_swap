/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_solve_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:42:19 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 14:52:34 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_struct.h"
#include "ps_exit_prog.h"
#include <stdlib.h>

#include <stdio.h>
/**
 * @brief /!\\ Use the right structure, `arg` = "x x x x" || "1 x x x",
 *            only digit no number [0-9]
 *          offset is use when we need to add or remove a index
 *            Check only in `stack->a`
 *  
 * @return int If the tab dont matches with the structure return `0` else `1`
 */
int	ps_check_solver(t_data *data, const char *arg, int offset)
{
	int	index;
	int	x;

	index = 0;
	x = 0;
	if (!charsetstr_strict(arg, " 1234567890x"))
		ps_exit_prog(EXIT_FAILURE, data, "ps_check_solver(): Bad arg !??\n");
	while (index < data->a.len)
	{
		if (*(arg + x) != 'x')
			if (ft_atoi(arg + x) != (data->a.mem[index] + offset))
				return (0);
		x += 2;
		index++;
	}
	return (1);
}
