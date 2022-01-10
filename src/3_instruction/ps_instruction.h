/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_instruction.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:56:53 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 11:49:27 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_INSTRUCTION_H
# define PS_INSTRUCTION_H
# include "ps_struct.h"

void	ps_sa(t_data *data);
void	ps_sb(t_data *data);
void	ps_ss(t_data *data);

void	ps_pa(t_data *data);

void	ps_swap_this_w_that(int *this, int *that);
void	ps_push_this_there(t_stack	*this, t_stack	*there);

#endif
