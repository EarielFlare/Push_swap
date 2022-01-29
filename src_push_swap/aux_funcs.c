/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:01:59 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:27:48 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_groups(t_lst *lst, int num)
{
	while (num--)
	{
		lst->group = -1;
		lst = lst->next;
	}
	return ;
}

void	take_abc(t_lst *lst, int *abc)
{
	abc[0] = lst->value;
	abc[1] = lst->next->value;
	abc[2] = lst->next->next->value;
	return ;
}

int	index_one_element(t_lst *lst, int key)
{
	t_lst	*ptr;
	t_lst	*start;
	int		val;
	int		index;

	index = 1;
	start = lst;
	ptr = lst->next;
	while (ptr)
	{
		val = ptr->value;
		if (val < key)
			index++;
		if (ptr->next != start)
			ptr = ptr->next;
		else
			ptr = NULL;
	}
	return (index);
}

int	stack_indexing(t_lst *lst)
{
	t_lst	*ptr;
	t_lst	*start;
	int		key;

	start = lst;
	ptr = lst;
	while (ptr)
	{
		key = lst->value;
		lst->index = index_one_element(ptr, key);
		if (ptr->next != start)
			ptr = ptr->next;
		else
			ptr = NULL;
		lst = ptr;
	}
	return (0);
}
