/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:10:06 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/06 16:38:30 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "ps_exit_prog.h"
#include "stdlib.h"
#include "libft.h"

//TODO REMOVE
#include <stdio.h>

static void	alloc_stack(t_data *data)
{
	data->stack.a = (int *)ft_calloc(data->ac, sizeof(int *));
	if (!data->stack.a)
		ps_exit_prog(EXIT_FAILURE, data, "data->stack alloc fail!");
	data->stack.b = (int *)ft_calloc(data->ac, sizeof(int *));
	if (!data->stack.b)
		ps_exit_prog(EXIT_FAILURE, data, "data->stack alloc fail!");
}

static void	populate_stack(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->stack.len_a)
	{
		data->stack.a[i] = data->set[i];
		i++;
	}
}

static void	debug_stack(t_data *data)
{
	printf("[ A ] [ B ]\n");
	for (int i = 0; i < data->ac; i++)
	{
		if (i < data->stack.len_a)
			printf("|%-2d", data->stack.a[i]);
		else
			printf("  |\n");
		if (i < data->stack.len_b)
			printf("  |%-2d|\n", data->stack.b[i]);
		else
			printf("  |\n");
	}
}

void	ps_stack_init(t_data *data)
{
	data->stack.len_a = data->ac;
	alloc_stack(data);
	populate_stack(data);
	debug_stack(data);
}
