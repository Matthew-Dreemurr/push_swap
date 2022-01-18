/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:28:13 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/18 16:46:46 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

void	ps_ra(t_data *data)
{
	if (ps_rotate_up_stack(&data->a))
		ft_putstr("ra\n");
	else if (PS_DEBUG)
		ft_putstr("==] Fail ra ! [==\n");
}
