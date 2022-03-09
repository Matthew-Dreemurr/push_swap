/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_set.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:05:45 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/09 11:00:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_SOLVE_SET_H
# define PS_SOLVE_SET_H

# include "ps_struct.h"

void	ps_solve_set(t_data *data);

void	ps_litle_solver(t_data *data);
void	ps_big_solver(t_data *data);
#endif
