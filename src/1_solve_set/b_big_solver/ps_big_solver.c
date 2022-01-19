/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_big_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:44:34 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/19 15:17:32 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_struct.h"
#include "ps_instruction.h"
#include "ps_solve_set.h"
#include "libft.h"
#include "ps_exit_prog.h"
#include <stdlib.h>

static void	init(t_data *data)
{
	data->set = ft_calloc(data->ac, sizeof(int));
	if (!data->set)
		ps_exit_prog(EXIT_FAILURE, data, "Fail malloc data->set\n");
}

void	ps_big_solver(t_data *data)//TODO
{
	int	index;
	int	i;

	i = 1;
	index = 0;
	while (index < data->ac)
	{
		while (i < index)
		{
			if (data->)
		}
		
	}
}
