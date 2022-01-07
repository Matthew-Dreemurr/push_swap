/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:06:37 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/07 16:22:42 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_solve_set.h"
#include "ps_struct.h"

void	ps_solve_set(t_data *data)//TODO implement hardcode solver for n <= 5
{
	if (data->a.len <= 5)
		ps_litle_solver(data);
	else
		ps_big_solver(data);
}
