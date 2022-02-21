/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pre_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:11:14 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/21 16:14:37 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_debug.h"
#include "ps_solve_stack.h"
#include "libft.h"

/**
 * Will find the preview index of `data->b.mem[0]`.
 */

int	get_pre_index(int index, int max)
{
	if (index < 0 || index > max)
	{
		if (PS_DEBUG)
		{
			ft_putstr("get_pre_index(): Negatif index or > max !\n");
			return (-1);
		}
	}
	if (!index)
		return (max - 1);
	else
		return (index - 1);
}
