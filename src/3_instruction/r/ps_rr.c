/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:08:45 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 17:10:12 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

void	ps_rr(t_data *data)
{
	if (PS_DEBUG)
		ft_putstr("===[ RR ]===\n");
	ps_rotate_up_stack(&data->a);
	ps_rotate_up_stack(&data->b);
}
