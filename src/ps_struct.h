/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:21:48 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/21 12:59:53 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_STRUCT_H
# define PS_STRUCT_H

typedef struct s_score
{
	int	up_up;
	int	down_down;
	int	up_down;
	int	down_up;
	int	up_n;
	int	down_n;
	int	n_up;
	int	n_down;
}				t_score;

typedef struct s_stack
{
	int		*mem;
	int		len;
}				t_stack;

typedef struct s_data
{
	t_stack	a;
	t_stack	b;
	int		*set;
	int		*solve;
	void	*tmp;
	int		ac;
}				t_data;

#endif