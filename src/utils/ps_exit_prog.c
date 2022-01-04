/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_exit_prog.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:08:14 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 13:26:08 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_exit_prog.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

/**
 * @brief 
 * 
 */
void	ps_exit_prog(int ret, t_data *data)
{
	if (data)
		ps_prog_free(&data);
	if (ret == EXIT_FAILURE)
		ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(ret);
}
