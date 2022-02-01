/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack_find_last.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:40:41 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/01 15:52:49 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_solve_stack.h"
#include "ps_struct.h"
#include "ps_instruction.h"

/**
 * @brief Check the fast way to find the biggest number.
 * 
 * @return `0` if the fast way is by revese rotate, `1` if by rotate.
 */
int	ps_solve_stack_find_last(t_data *data)
{
	int	up;
	int	down;
	int	index;

	index = data->ac - 1;
	up = 0;
	while (data->a.mem[up] != (index))
		up++;
	down = index;
	while (data->a.mem[down] != (index))
		down--;
	down = index - down;
	return ((int []){0, 1}[up > down]);
}
