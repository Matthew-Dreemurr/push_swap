/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_stack.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:59:17 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/17 16:24:58 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_SOLVE_STACK_H
# define PS_SOLVE_STACK_H

# include "ps_struct.h"

void	ps_stack_solve(t_data *data);
int		ps_get_bit(int nb, int bit);
int		ps_check_stack_sort(t_stack *stack);
int		ps_solve_stack_best_move(t_data *data, int index);

#endif
