/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:28:13 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 17:05:41 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

void	ps_rb(t_data *data)
{
	if (PS_DEBUG)
		ft_putstr("===[ RB ]===\n");
	ps_rotate_up_stack(&data->b);
}
