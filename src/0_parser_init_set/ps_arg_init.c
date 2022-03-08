/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:07:07 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/08 14:26:14 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_parser.h"
#include <stdlib.h>
#include "libft.h"

void	ps_arg_init(int ac, const char **arg, t_data *data)
{
	data->ac = ac;
	data->set = ft_calloc(data->ac, sizeof(int));
	if (!data->set)
		ps_exit_prog(EXIT_FAILURE, data, "Fail malloc data->set\n");
	ps_arg_check(arg, data);
}
