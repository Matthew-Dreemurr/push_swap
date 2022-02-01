/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_down_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:30:20 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/01 16:05:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

/**
 * @brief Will rotate the stack.
 *        If `<stack>`.len < 2 then return (0).
 */
int	ps_rotate_down_stack(t_stack *stack)
{
	int	tmp;
	int	i;
	int	y;

	if (stack->len < 2)
	{
		if (PS_DEBUG)
			ft_putstr("ps_rotate_down_stack(): `stack`->len < 2!\n");
		return (0);
	}
	tmp = stack->mem[stack->len - 1];
	i = stack->len - 2;
	y = stack->len - 1;
	while (i >= 0)
	{
		ps_swap_this_w_that(&stack->mem[i], &stack->mem[y]);
		i--;
		y--;
	}
	stack->mem[0] = tmp;
	return (1);
}
