/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:58:16 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/01 16:10:16 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

void	ps_rrb(t_data *data)
{
	if (ps_rotate_down_stack(&data->b))
		ft_putstr("rrb\n");
	else if (PS_DEBUG)
		ft_putstr("==] Fail rrb ! [==\n");
}