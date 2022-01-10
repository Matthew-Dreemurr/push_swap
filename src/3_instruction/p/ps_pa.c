/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:03:56 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 16:00:03 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_instruction.h"
#include "libft.h"
#include "ps_debug.h"

void	ps_pa(t_data *data)
{
	if (PS_DEBUG)
		ft_putstr("===[ PA ]===\n");
	ps_push_this_there(&data->b, &data->a);
}
