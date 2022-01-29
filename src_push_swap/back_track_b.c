/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_track_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:28:44 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:28:45 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack_b_seq(t_lst *lst, int stack_len, char c)
{
	int		curr_value;
	int		prev_value;

	prev_value = lst->index;
	while (stack_len--)
	{
		curr_value = lst->index;
		if (c == 'd' && curr_value > prev_value)
			return (0);
		if (c == 'a' && curr_value < prev_value)
			return (0);
		prev_value = curr_value;
		lst = lst->next;
	}
	return (1);
}

int	back_track_b(t_strct *p_strct)
{
	int		stack_len;

	stack_len = p_strct->numb;
	if (check_stack_b_seq(p_strct->beginb, stack_len, 'd'))
	{
		while (stack_len--)
			pa(p_strct);
		move_sorted(p_strct);
	}
	else if (check_stack_b_seq(p_strct->beginb, stack_len, 'a'))
	{
		while (stack_len--)
		{
			pa(p_strct);
			move_sorted(p_strct);
		}
	}
	return (0);
}
