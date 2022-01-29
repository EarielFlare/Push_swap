/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:35:46 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:55:40 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sorted(t_strct *p_strct)
{
	if (!stacka_is_sorted(p_strct) && p_strct->numa > 3)
	{
		while (p_strct->begina->index == p_strct->nextpoint)
		{
			p_strct->begina->group = -1;
			p_strct->nextpoint++;
			ra(p_strct);
		}
	}
	return ;
}

int	check_depth(t_lst *lst)
{
	t_lst	*ptr;
	t_lst	*start;
	int		cnt;
	int		base_group;

	cnt = 0;
	base_group = lst->group;
	start = lst;
	ptr = lst;
	while (ptr)
	{
		if (ptr->next != start)
			ptr = ptr->next;
		else
			ptr = NULL;
		if (lst->group != base_group)
			return (cnt);
		cnt++;
		lst = ptr;
	}
	return (cnt);
}

int	stacka_is_sorted(t_strct *p_strct)
{
	int		stack_len;
	t_lst	*lst;

	lst = p_strct->begina;
	stack_len = p_strct->numa;
	while (stack_len--)
	{
		if (lst->group != -1)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	swapb_3_light_sit_6(t_strct *p_strct)
{
	rrb(p_strct);
	pa(p_strct);
	rrb(p_strct);
	pa(p_strct);
	pa(p_strct);
	return ;
}
