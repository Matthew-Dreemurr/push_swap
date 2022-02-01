/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:58:16 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/01 15:59:01 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

void	ps_rra(t_data *data)
{
	if (ps_rotate_down_stack(&data->a))
		ft_putstr("rra\n");
	else if (PS_DEBUG)
		ft_putstr("==] Fail rra ! [==\n");
}