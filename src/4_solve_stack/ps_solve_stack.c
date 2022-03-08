/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 14:30:32 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_solve_stack.h"
#include "ps_debug.h"
#include "ps_struct.h"

/**
 * When i have the index that i shearch, i will calculate how mutch
 *  `ra` or `rra` i need to put the shearch index at the firt place.
 * Then i push to `B`.
 */
void	ps_stack_solve(t_data *data)
{
	if (ps_check_stack_sort(&data->a))
	{
		if (PS_DEBUG)
			ft_putstr("Stack sort :)\n");
		return ;
	}
	if (data->ac < 6)
		ps_small_solve(data);
	else
		ps_big_solve(data);
	if (!ps_check_stack_sort(&data->a))
		if (PS_DEBUG)
			ft_putstr("Stack no sort !?\n");
}
