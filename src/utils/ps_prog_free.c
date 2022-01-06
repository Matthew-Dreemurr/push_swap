/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_prog_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:19:07 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/06 16:27:43 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_exit_prog.h"
#include <stdlib.h>

//TODO REMOVE
#ifdef WRA
# include "wraloc.h"
#endif

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

static void	ps_free_check(void	*ptr)
{
	if (ptr)
		free(ptr);
}

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
		ps_free_check(*ptr);
		ptr++;
		size--;
	}
	ps_free_check(start);
}

void	ps_prog_free(t_data *data)
{
	if (data->tmp)
		ps_free_data_tmp((char **)data->tmp, data->ac);
	if (data->set)
		ps_free_check(data->set);
	if (data->stack.a)
		ps_free_check(data->stack.a);
	if (data->stack.b)
		ps_free_check(data->stack.b);
	(void)data;
}
