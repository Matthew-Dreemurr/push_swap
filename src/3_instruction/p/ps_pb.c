/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:03:56 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/19 12:38:47 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_instruction.h"
#include "libft.h"
#include "ps_debug.h"

/**
 * @brief Push `a` to `b`
 */
void	ps_pb(t_data *data)
{
	if (ps_push_this_there(&data->a, &data->b))
		ft_putstr("pb\n");
	else if (PS_DEBUG)
		ft_putstr("==] Fail pa ! [==\n");
}
