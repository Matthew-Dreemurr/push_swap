/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:07:07 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/21 16:29:17 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_parser.h"
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

//TODO REMOVE
/**
static void	debug_print_tab(t_data *data)
{
	for (int i = 0; i < data->ac; i++)
		printf("%3d|[%d]\n", i, data->set[i]);
}
 **/

void	ps_arg_init(int ac, const char **arg, t_data *data)
{
	data->ac = ac;
	data->set = ft_calloc(data->ac, sizeof(int));
	if (!data->set)
		ps_exit_prog(EXIT_FAILURE, data, "Fail malloc data->set\n");
	ps_arg_check(arg, data);
	// debug_print_tab(data);//TODO REMOVE
}
