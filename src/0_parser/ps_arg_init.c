/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:07:07 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 17:00:20 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_parser.h"
#include <stdlib.h>
#include "libft.h"

void	ps_arg_init(int ac, const char **av, t_data *data)
{
	data->size = ac;
	data->set = malloc(sizeof(int) * data->size);
	if (!data->set)
		ps_exit_prog(EXIT_FAILURE, data, "Fail malloc data->set\n");
	ft_bzero(data->set, sizeof(int) * data->size);
	ps_arg_check(av, data);
}
