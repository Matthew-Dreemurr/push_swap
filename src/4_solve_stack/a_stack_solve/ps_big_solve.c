/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_big_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:51:54 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 14:30:49 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_solve_stack.h"
#include "ps_instruction.h"

static int	ps_get_bit(int nb, int bit)
{
	return (1 & (nb >> bit));
}

static int	ps_max_bit_size(int nb)
{
	int	bit;
	int	tmp;
	int	int_bits;

	bit = 0;
	tmp = 0;
	int_bits = (int)(sizeof(int) * 8);
	while (bit < int_bits)
	{
		if (1 & (nb >> bit))
			tmp = bit;
		bit++;
	}
	return (tmp);
}

void	ps_big_solve(t_data *data)
{
	int	i;
	int	x;
	int	max_bits;

	i = 0;
	x = 0;
	max_bits = ps_max_bit_size(data->ac);
	while (i <= max_bits)
	{
		while (x < data->ac)
		{
			if (!ps_get_bit(data->a.mem[0], i))
				ps_pb(data);
			else
				ps_ra(data);
			x++;
		}
		ps_ppa(data);
		i++;
		x = 0;
	}
}
