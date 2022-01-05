/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_exit_prog.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:08:14 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/05 19:32:39 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_exit_prog.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

//TODO REMOVE
#ifdef WRA
# include "wraloc.h"
#endif

/**
 * @brief 
 * 
 */
void	ps_exit_prog(int ret, t_data *data, const char *debug)
{
	if (data)
		ps_prog_free(data);
	if (ret == EXIT_FAILURE)
		ft_putstr_fd("Error\n", STDERR_FILENO);
	if (PS_DEBUG)
		ft_putstr_fd((char *)debug, STDOUT_FILENO);
	else
		(void)debug;
	exit(ret);
}
