/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push_all_this_there.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:27:15 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/19 12:49:08 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_struct.h"
#include "ps_debug.h"
#include "libft.h"

/**
 * @brief Will push all `this` in `there`.
 *        If !`this`.len then return 0.
 *        Will print `msg` if true.
 */
void	ps_push_all_this_there(t_stack *this, t_stack *there, char *msg)
{
	if (!this->len)
	{
		if (PS_DEBUG)
			ft_putstr("ps_push_all_this_there(): [this] is empty!\n");
		return ;
	}
	while (this->len)
	{
		if (msg)
			ft_putstr(msg);
		else if (PS_DEBUG)
			ft_putstr("ps_push_all_this_there(): [msg] is empty!\n");
		ps_push_this_there(this, there);
	}
}
