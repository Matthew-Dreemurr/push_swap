/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:08:45 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/01 16:16:49 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

void	ps_rrr(t_data *data)
{
	if (ps_rotate_down_stack(&data->a) || ps_rotate_down_stack(&data->b))
		ft_putstr("rrr\n");
	else if (PS_DEBUG)
		ft_putstr("==] Fail rrr ! [==\n");
}
