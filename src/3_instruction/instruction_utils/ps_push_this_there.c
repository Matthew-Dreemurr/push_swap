/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push_this_there.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:08:51 by mahadad           #+#    #+#             */
/*   Updated: 2022/01/10 16:28:10 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_instruction.h"
#include "ps_struct.h"
#include "ps_debug.h"
#include "libft.h"

//TODO REMOVE
/*
#include "stdio.h"
static void	ps_debug_stack(t_stack *a, t_stack *b)
{
	int pad = 3;

	printf("[ %d ] [ %d ]\n", a->len, b->len);
	for (int i = 0; i < ((a->len > b->len) ? a->len : b->len); i++)
	{
		if (i < a->len)
			printf("|%-*d", pad, a->mem[i]);
		else
			printf("|%*s", pad, "");
		if (i < b->len)
			printf("|%-*d|\n", pad, b->mem[i]);
		else
			printf("|%*s\n", pad, "");
	}
	printf("\n");
}
*/

static int	check(int len)
{
	if (!len)
		if (PS_DEBUG)
			ft_putstr("ps_push_this_there(): [this] is empty!\n");
	return (len);
}

/**
 * @brief Will move back all the elements by one.
 */
static void	there_init(t_stack *there)
{
	int	i;

	i = there->len;
	while (i > 0)
	{
		there->mem[i] = there->mem[i - 1];
		i--;
	}
}

/**
 * @brief 
 */
static void	this_clear(t_stack *this)
{
	int	i;

	i = 0;
	while (i < this->len)
	{
		this->mem[i] = this->mem[i + 1];
		i++;
	}
}

/**
 * `;` == `<stack>`->len
 *
 *                | there_init();  | there->mem[0] = | this_clear(this);
 *                |                | this->mem[0];   |
 * ===================================================================
 * [this] [there] | [this] [there] | [this] [there]  | [this] [there]
 * [3]    [4]     | [3]    [4]     | [3]    [3]      | [2]    [3]    
 * [2]    [5]     | [2]    [4]     | [2]    [4]      | [1];   [4]    
 * [1];   [6];    | [1];   [5]     | [1];   [5]      | [1]    [5]    
 * [ ]    [ ]     | [ ]    [6];    | [ ]    [6];     | [ ]    [6];   
 * [ ]    [ ]     | [ ]    [ ]     | [ ]    [ ]      | [ ]    [ ]    
 * [ ]    [ ]     | [ ]    [ ]     | [ ]    [ ]      | [ ]    [ ]    
 * ==============
 */

/**
 * @brief Will push the first element in the stack of `this` to `there`.
 *        Check `this->len` if the stack `this` is not empty.
 */
void	ps_push_this_there(t_stack *this, t_stack *there)
{
	if (!check(this->len))
		return ;
	// ps_debug_stack(this, there);//TODO REMOVE
	if (there->len)
		there_init(there);
	// ps_debug_stack(this, there);//TODO REMOVE
	there->mem[0] = this->mem[0];
	there->len++;
	// ps_debug_stack(this, there);//TODO REMOVE
	if (check(this->len))
		this_clear(this);
	this->len--;
	// ps_debug_stack(this, there);//TODO REMOVE
}
