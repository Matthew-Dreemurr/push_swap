/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:28:13 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/18 16:46:40 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

void	ps_rb(t_data *data)
{
	if (ps_rotate_up_stack(&data->b))
		ft_putstr("rb\n");
	else if (PS_DEBUG)
		ft_putstr("==] Fail rb ! [==\n");
}
