/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:24:12 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 16:03:35 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_debug.h"

/**
 *  [ B ]  | [ B ]
 * :>[A].: |  [B]
 * :.[B]<: |  [A]
 *   [C]   |  [C]
 */
void	ps_sb(t_data *data)
{
	if (PS_DEBUG)
		ft_putstr("===[ SB ]===\n");
	ps_swap_this_w_that(&data->b.mem[0], &data->b.mem[1]);
}
