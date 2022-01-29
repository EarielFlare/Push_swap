/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_proc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:58:38 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:45:17 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	qsort_atob(t_strct *p_strct, int group_depth)
{
	int		key;
	int		index;
	int		stack_len;

	key = p_strct->midpoint;
	stack_len = group_depth;
	while (stack_len--)
	{
		index = p_strct->begina->index;
		if (index <= key)
			pb(p_strct);
		else
			ra(p_strct);
	}
	return (0);
}

int	qsort_btoa(t_strct *p_strct)
{
	int		key;
	int		index;
	int		stack_len;

	back_track_b(p_strct);
	key = p_strct->midpoint;
	stack_len = p_strct->numb;
	while (stack_len--)
	{
		index = p_strct->beginb->index;
		p_strct->beginb->group = p_strct->curr_group;
		if (index > key)
			pa(p_strct);
		else
			rb(p_strct);
	}
	return (0);
}

void	stack_proc_btoa(t_strct *p_strct)
{
	while (p_strct->numb > 3)
	{
		p_strct->maxpoint = p_strct->midpoint;
		p_strct->midpoint
			= ((p_strct->maxpoint - p_strct->nextpoint) / 2)
			+ p_strct->nextpoint;
		p_strct->curr_group++;
		qsort_btoa(p_strct);
	}
	check_stack_b(p_strct);
	return ;
}
