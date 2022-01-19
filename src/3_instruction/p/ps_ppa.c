/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ppa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:42:00 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/19 12:46:42 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_instruction.h"
#include "libft.h"
#include "ps_debug.h"

/**
 * @brief Push all `b` to `a`
 */
void	ps_ppa(t_data *data)
{
	ps_push_all_this_there(&data->b, &data->a, "pa\n");
}
