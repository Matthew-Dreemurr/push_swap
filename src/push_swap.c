/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:16:55 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 17:01:16 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ps_parser.h"
#include "ps_exit_prog.h"
#include <stdlib.h>
#include "libft.h"

static void	arg_compactor(char **arg, int size)
{
	
}

int	main(int ac, const char **av)
{
	t_data	data;

	if (ac > 2)
		arg_compactor(av + 1, ac - 1);
	else if (!(ac == 2))
		ps_exit_prog(EXIT_FAILURE, NULL, "Bad ac amount\n");
	ps_arg_init(ac - 1, av + 1, &data);
	return (0);
}
