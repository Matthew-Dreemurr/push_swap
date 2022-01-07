/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:21:48 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/07 16:21:42 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_STRUCT_H
# define PS_STRUCT_H

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