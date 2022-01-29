/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:29:06 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:38:13 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack_a_hard(t_strct *p_strct, int group_depth)
{
	int	flag;

	flag = 0;
	if (group_depth <= 3)
	{
		if (group_depth == 2)
		{
			if (p_strct->begina->value > p_strct->begina->next->value)
				sa(p_strct);
		}
		else if (group_depth == 3)
			check3a_hard(p_strct);
		flag = 1;
	}
	move_sorted(p_strct);
	group_depth = check_depth(p_strct->begina);
	return (flag);
}

int	check_stack_a(t_strct *p_strct)
{
	int	flag;

	flag = 0;
	if (p_strct->numa <= 3)
	{
		set_groups(p_strct->begina, p_strct->numa);
		if (p_strct->numa == 2)
		{
			if (p_strct->begina->value > p_strct->begina->next->value)
				sa(p_strct);
		}
		else if (p_strct->numa == 3)
			check3a_light(p_strct);
		flag = 1;
	}
	return (flag);
}

int	check_stack_b(t_strct *p_strct)
{
	int	flag;

	flag = 0;
	if (p_strct->numb <= 3)
	{
		set_groups(p_strct->beginb, p_strct->numb);
		if (p_strct->numb == 1)
			pa(p_strct);
		else if (p_strct->numb == 2)
		{
			if (p_strct->beginb->value < p_strct->beginb->next->value)
				sb(p_strct);
			pa(p_strct);
			pa(p_strct);
		}
		else if (p_strct->numb == 3)
			check3b_light(p_strct);
		flag = 1;
	}
	move_sorted(p_strct);
	return (flag);
}
