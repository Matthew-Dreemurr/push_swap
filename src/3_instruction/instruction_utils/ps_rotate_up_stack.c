/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_up_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:30:20 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/18 16:50:31 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

/**
 * @brief Will rotate the stack.
 *        If `<stack>`.len < 2 then return (0).
 */
int	ps_rotate_up_stack(t_stack *stack)
{
	int	tmp;
	int	i;
	int	y;

	if (stack->len < 2)
	{
		if (PS_DEBUG)
			ft_putstr("ps_rotate_up_stack(): `stack`->len null!\n");
		return (0);
	}
	tmp = stack->mem[0];
	i = 1;
	y = 0;
	while (i < stack->len)
	{
		ps_swap_this_w_that(&stack->mem[i], &stack->mem[y]);
		i++;
		y++;
	}
	stack->mem[stack->len - 1] = tmp;
	return (1);
}
