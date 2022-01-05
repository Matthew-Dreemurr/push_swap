/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:01:36 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/05 16:17:11 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_parser.h"
#include "libft.h"
#include <stdlib.h>

/**
 * @brief Conv char to int.
 *        Skip white space character.
 *        Check if we will never exceed `INT_(MAX/MIN)`.
 */
static long	ps_atoi(const char *str, t_data *data)
{
	unsigned long	nbr;
	unsigned long	cutoff;
	int				cutlim;
	int				isneg;

	nbr = 0;
	isneg = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	isneg = (*str == '-');
	str += (isneg || *str == '+');
	cutoff = ((unsigned long []){INT_MAX, -(unsigned)INT_MIN}[isneg] / 10);
	cutlim = (int)((long []){INT_MAX, -(unsigned)INT_MIN}[isneg] % 10);
	while (ft_isdigit((int)*str))
	{
		if (nbr > cutoff || (nbr == cutoff && (int)(*str - '0') > cutlim))
			ps_exit_prog(EXIT_FAILURE, data, "int limit\n");
		nbr *= 10;
		nbr += (*str - '0');
		str++;
	}
	return ((int []){nbr, -nbr}[isneg]);
}

/**
 * @brief Check if 
 *         - all char in the string is numeric (!alpha)
 *         - is not < INT_MAX || > INT_MIN
 *         - and conv to int
 * 
 * @param str 
 */
static int	conv_atoi(const char *str, t_data *data)
{
	long	nb;

	if (!charsetstr_strict((const char *)str, "1234567890-"))
		ps_exit_prog(EXIT_FAILURE, data, "!charsetstr_strict\n");
	nb = ps_atoi(str, data);
	return ((int)nb);
}

/**
 * @brief 
 * 
 * @param av 
 */
void	ps_arg_check(const char **av, t_data *data)
{
	int	i;
	int	x;

	i = 0;
	while (i < data->size)
	{
		data->set[i] = conv_atoi(av[i], data);
		x = 0;
		while (x < i)
		{
			if (x != i)
				if (data->set[i] == data->set[x])
					ps_exit_prog(EXIT_FAILURE, data, "duplicate!\n");
			x++;
		}
		i++;
	}
}
