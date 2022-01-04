/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:16:55 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 16:00:44 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ps_parser.h"
#include "ps_exit_prog.h"
#include <stdlib.h>

int	main(int ac, const char **av)
{
	t_data	data;

	if (ac < 2)
		ps_exit_prog(EXIT_FAILURE, NULL, "Bad ac amount\n");
	av++;
	ps_arg_init(ac, av, &data);
	return (0);
}
