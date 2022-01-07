/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push_this_there.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:08:51 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/07 16:50:10 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_struct.h"
#include "ps_debug.h"

static int	check(int len)
{
	if (!len)
		if (PS_DEBUG)
			ft_putstr("[PA]: [B] empty!\n");
	return (len);
}

/**
 * @brief Will push the first element in the stack of `this` to `there`.
 *        Check `this->len` if the stack `this` is not empty.
 */
void	ps_push_this_there(t_stack *this, t_stack *there)
{
	int	i;

	i = 0;
	if (!check(this->len))
		return ;
	//TODO WIP
}
