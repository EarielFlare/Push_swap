/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_proc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:40:16 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:40:57 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	steps_exec(t_strct *p_strct)
{
	int	steps;

	steps = check_depth(p_strct->begina);
	steps = p_strct->numa - steps;
	while (steps--)
		rra(p_strct);
	return ;
}

void	atob_proc(t_strct *p_strct)
{
	int	group_depth;

	p_strct->maxpoint = p_strct->numa;
	p_strct->midpoint
		= ((p_strct->maxpoint - p_strct->nextpoint) / 2) + p_strct->nextpoint;
	group_depth = check_depth(p_strct->begina);
	p_strct->curr_group = p_strct->begina->group;
	if (!check_stack_a(p_strct)
		|| !check_stack_a_hard(p_strct, group_depth))
	{
		qsort_atob(p_strct, group_depth);
		steps_exec(p_strct);
	}
	check_stack_a(p_strct);
	stack_proc_btoa(p_strct);
}

void	btoa_proc(t_strct *p_strct)
{
	int	group_depth;

	while (p_strct->begina->group > 0)
	{
		group_depth = check_depth(p_strct->begina);
		if (!check_stack_a_hard(p_strct, group_depth))
		{
			p_strct->midpoint = p_strct->nextpoint + group_depth - 1;
			while (group_depth--)
				pb(p_strct);
			p_strct->curr_group = p_strct->begina->group;
			stack_proc_btoa(p_strct);
		}
	}
}

void	begin_process(t_strct *p_strct)
{
	stack_indexing(p_strct->begina);
	p_strct->nextpoint = 1;
	while (p_strct->begina->group > -1)
	{
		atob_proc(p_strct);
		btoa_proc(p_strct);
	}
}
