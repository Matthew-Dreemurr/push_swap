/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_exit_prog.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:03:21 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 15:57:14 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_EXIT_PROG_H
# define PS_EXIT_PROG_H

# include "ps_struct.h"

# ifndef PS_DEBUG
#  define PS_DEBUG 0
# endif

void	ps_exit_prog(int ret, t_data *data, const char *debug);
void	ps_prog_free(t_data *data);

#endif
