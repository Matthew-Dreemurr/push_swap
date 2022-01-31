/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:10:06 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/31 19:25:10 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "ps_exit_prog.h"
#include "stdlib.h"
#include "libft.h"
#include "ps_debug.h"

//TODO REMOVE
/*
#include <stdio.h>
static void	//tmp//debug_stack(t_data *data)
{
	printf("[ A ] [ B ]\n");
	for (int i = 0; i < data->ac; i++)
	{
		if (i < data->a.len)
			printf("|%-4d", data->a.mem[i]);
		else
			printf("|    ");
		if (i < data->b.len)
			printf("|%-4d|\n", data->b.mem[i]);
		else
			printf("|    |\n");
	}
}
*/

/**
 * @brief alloc stack `a` 'n `b`
 */
static void	alloc_stack(t_data *data)
{
	data->a.mem = (int *)ft_calloc(data->ac, sizeof(int *));
	if (!data->a.mem)
		ps_exit_prog(EXIT_FAILURE, data, "data->stack alloc fail!");
	data->b.mem = (int *)ft_calloc(data->ac, sizeof(int *));
	if (!data->b.mem)
		ps_exit_prog(EXIT_FAILURE, data, "data->stack alloc fail!");
}

static int	find_index(t_data *data, int nb)
{
	int	index;

	index = 0;
	while (index < data->ac)
	{
		if (data->solve[index] == nb)
			return (index);
		index++;
	}
	if (PS_DEBUG)
		ft_putstr("find_index(): Dont find the `nb` in index ?!\n");
	return (-1);
}

static void	populate_stack(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->a.len)
	{
		data->a.mem[i] = find_index(data, data->set[i]);
		i++;
	}
}

//TODO use data->solve to store the indxe of all number.
void	ps_stack_init(t_data *data)
{
	data->a.len = data->ac;
	alloc_stack(data);
	populate_stack(data);
	//tmp//debug_stack(data);//TODO REMOVE
}
