/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:00:42 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 17:36:10 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_PARSER_H
# define PS_PARSER_H

# include "push_swap.h"
# include "ps_exit_prog.h"

void	ps_arg_init(int ac, const char **arg, t_data *data);
void	ps_arg_check(const char **av, t_data *data);

#endif
