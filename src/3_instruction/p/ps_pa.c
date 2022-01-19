/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:03:56 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/19 12:39:09 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_instruction.h"
#include "libft.h"
#include "ps_debug.h"

/**
 * @brief Push `b` to `a`
 */
void	ps_pa(t_data *data)
{
	if (ps_push_this_there(&data->b, &data->a))
		ft_putstr("pa\n");
	else if (PS_DEBUG)
		ft_putstr("==] Fail pa ! [==\n");
}
