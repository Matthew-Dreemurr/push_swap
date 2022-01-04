/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:07:07 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 17:59:45 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_parser.h"
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

static void	debug_print_tab(t_data *data)
{
	for (int i = 0; i < data->size; i++)
		printf("%3d|[%d]\n", i, data->set[i]);
}

void	ps_arg_init(int ac, const char **arg, t_data *data)
{
	data->size = ac;
	data->set = malloc(sizeof(int) * data->size);
	if (!data->set)
		ps_exit_prog(EXIT_FAILURE, data, "Fail malloc data->set\n");
	ft_bzero(data->set, sizeof(int) * data->size);
	ps_arg_check(arg, data);
	debug_print_tab(data);
}
