/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_prog_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:19:07 by mahadad           #+#    #+#             */
/*   Updated: 2022/03/07 13:53:34 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_exit_prog.h"
#include <stdlib.h>
#include "ps_struct.h"
#include "ps_debug.h"

/**
DONE XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
DONE
TODO Free all allocated var in `t_data`
DONE
DONE  Free data.tmp int main after conv all string to int
DONE    Split alloc data.tmp, so all tab are NULL if no string are
DONE    alloc inside
DONE
DONE XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
**/

/**
 * @brief All tab of tmp are alloc in ft_split.
 *        ft_split guarantee that all tab are set to NULL adress
 */
static void	ps_free_data_tmp(char **ptr, int size)
{
	void	*start;

	start = ptr;
	while (size && ptr)
	{
		free(*ptr);
		ptr++;
		size--;
	}
	free(start);
}

void	ps_prog_free(t_data *data)
{
	if (data->tmp)
		ps_free_data_tmp((char **)data->tmp, data->ac);
	free(data->set);
	free(data->solve);
	free(data->a.mem);
	free(data->b.mem);
	(void)data;
}
