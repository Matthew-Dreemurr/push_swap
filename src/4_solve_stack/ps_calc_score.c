/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_calc_score.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:25:43 by mahadad           #+#    #+#             */
/*   Updated: 2022/02/21 13:29:10 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_solve_stack.h"
#include "ps_debug.h"
#include "libft.h"
#include "ps_exit_prog.h"
#include "ps_struct.h"
#include <stdlib.h>

/**
 * @brief Calculate the best way to find the next numbre,
 *          return a index for the fonction ptr call.
 * 
 * @param move_a Will define the move for [a], `-1` will rra,
 *                  `0` nothing, `1` ra.
 * @param move_b Will define the move for [b], `-1` will rrb,
 *                  `0` nothing, `1` rb.
 * @return int Return a index (0-..), return `-1` if a error occur.
 */
static int	ps_check_social_credit(int move_a, int move_b, t_data *data)
{
	if ((move_a > 1 || move_a < -1) || (move_b > 1 || move_b < -1))
		return (-1);
}

int	ps_move_calc(int move_a, int move_b, t_data *data)
{
	
	t_score social_credit;

}
