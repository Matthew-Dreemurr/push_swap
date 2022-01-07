/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:16:55 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/07 16:22:48 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

#include <stdio.h>//TODO REMOVE
//TODO REMOVE
#ifdef WRA
# include "wraloc.h"
#endif

/**
 * @brief Count word in `str`.
 */
static size_t	word_count(const char *str, char c)
{
	size_t	size;

	size = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (!*str)
			break ;
		while (*str && *str != c)
			str++;
		size++;
		if (*str)
			str++;
	}
	return (size);
}

/**
 * @brief Call ft_split(); and check if alloc dont fail
 */
static const char	**arg_split(const char *arg)
{
	const char	**ret;

	ret = (const char **)ft_split(arg, ' ');
	if (!ret)
		ps_exit_prog(EXIT_FAILURE, NULL, "ft_spilt fail\n");
	return (ret);
}

static void	init_data_var(t_data *data)
{
	data->set = NULL;
	data->solve = NULL;
	data->tmp = NULL;
	data->a.mem = NULL;
	data->b.mem = NULL;
	data->ac = 0;
	data->a.len = 0;
	data->b.len = 0;
}

int	main(int ac, const char **av)
{
	t_data	data;

	setbuf(stdout, NULL);//TODO REMOVE
	init_data_var(&data);
	if (ac > 2)
		ps_arg_init(--ac, ++av, &data);
	else if (ac == 2)
	{
		data.tmp = arg_split(*(++av));
		ps_arg_init(word_count(*av, ' '), (const char **)data.tmp, &data);
		ps_exit_prog(EXIT_SUCCESS, &data, NULL);
	}
	else
		ps_exit_prog(EXIT_FAILURE, NULL, "Bad ac amount\n");
	ps_solve_set(&data);
	ps_stack_init(&data);
	// ps_stack_solve(&data);
	ps_exit_prog(EXIT_SUCCESS, &data, NULL);
	return (0);
}
