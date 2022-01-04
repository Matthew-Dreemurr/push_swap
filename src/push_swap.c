/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:16:55 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/04 18:09:37 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ps_parser.h"
#include "ps_exit_prog.h"
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>//TODO REMOVE

/**
 * @brief Count word in `str`.
 * 
 * @param str
 * @param c
 * @return size_t
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

static const char	**arg_split(const char *arg)
{
	const char	**ret;

	ret = (const char **)ft_split(arg, ' ');
	if (!ret)
		ps_exit_prog(EXIT_FAILURE, NULL, "ft_spilt fail\n");
	return (ret);
}

int	main(int ac, const char **av)
{
	t_data	data;

	setbuf(stdout, NULL);//TODO REMOVE
	data.tmp = NULL;
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
	return (0);
}
