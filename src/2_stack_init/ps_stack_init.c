/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:10:06 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/05 20:22:00 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "ps_exit_prog.h"
#include "stdlib.h"
#include "libft.h"

static void	alloc_stack(t_data *data)
{
	data->sep = data->size + 1;
	data->size *= 2;
	data->stack = (int *)ft_calloc(data->size, sizeof(int *));
	if (!data->stack)
		ps_exit_prog(EXIT_FAILURE, data, "data->stack alloc fail!");
}

void	ps_stack_init(t_data *data)
{
	alloc_stack(data);
}
