/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_up_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:30:20 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 17:00:19 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"

void	ps_rotate_up_stack(t_stack *stack)
{
	int	tmp;
	int	i;
	int	y;

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
}
