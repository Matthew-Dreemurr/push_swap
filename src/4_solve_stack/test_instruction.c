/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:58:24 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 12:04:15 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_solve_stack.h"

void	ps_stack_solve(t_data *data)
{
	ps_push_this_there(&data->a, &data->b);
}
