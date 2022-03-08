/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:06:37 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 14:28:09 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_solve_set.h"
#include "ps_struct.h"
#include "libft.h"
#include "stdlib.h"
#include "ps_exit_prog.h"

static void	init(t_data *data)
{
	data->solve = ft_calloc(data->ac, sizeof(int));
	if (!data->solve)
		ps_exit_prog(EXIT_FAILURE, data, "Fail malloc data->set\n");
	ft_memcpy(data->solve, data->set, data->ac * sizeof(int));
}

void	ps_solve_set(t_data *data)
{
	init(data);
	if (data->ac <= 5)
		ps_big_solver(data);
	else
		ps_big_solver(data);
}
