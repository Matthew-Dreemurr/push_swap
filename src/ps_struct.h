/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:21:48 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/06 16:18:42 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_STRUCT_H
# define PS_STRUCT_H

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		len_a;
	int		len_b;
}				t_stack;

typedef struct s_data
{
	t_stack	stack;
	int		*set;
	int		*solve;
	void	*tmp;
	int		ac;
}				t_data;

#endif