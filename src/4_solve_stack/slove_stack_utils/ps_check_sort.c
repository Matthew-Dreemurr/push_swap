/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:22:34 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/20 17:37:33 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_solve_stack.h"
#include "ps_struct.h"
#include "ps_debug.h"

/**
 * @brief Check if the stack is sort.
 *        If `stack->len` is false then return `0` and a error message
 *         if PS_DBUG is define.
 */
int	ps_check_stack_sort(t_stack *stack)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	if (!stack->len)
	{
		if (PS_DEBUG)
			ft_putstr("ps_check_stack_sort(): `stack->len` null!\n");
		return (0);
	}
	while (y < stack->len)
	{
		if (stack->mem[x] > stack->mem[y])
			return (0);
		x++;
		y++;
	}
	return (1);
}
