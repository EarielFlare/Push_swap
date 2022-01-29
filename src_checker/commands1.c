/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 14:19:27 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:07:38 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_lst	*create_node(int value)
{
	t_lst	*p_elem;

	p_elem = (t_lst *)malloc(sizeof(t_lst));
	if (!p_elem)
		return (NULL);
	p_elem->flag = 0;
	p_elem->value = value;
	p_elem->next = NULL;
	p_elem->prev = NULL;
	return (p_elem);
}

void	del_node(t_lst *lst)
{
	if (lst)
		free (lst);
	return ;
}

void	stack_clear(t_lst *lst)
{
	t_lst	*ptr;
	t_lst	*start;

	if (!lst)
		return ;
	start = lst;
	ptr = lst;
	while (ptr)
	{
		if (ptr->next != start)
			ptr = ptr->next;
		else
			ptr = NULL;
		del_node(lst);
		lst = ptr;
	}
	return ;
}

int	dups_found(t_lst *lst)
{
	t_lst	*ptr;
	t_lst	*end;
	int		mb_dup;

	if (!lst)
		return (0);
	mb_dup = lst->value;
	end = lst;
	ptr = lst->prev;
	while (ptr)
	{
		lst = ptr;
		if (ptr->prev != end)
			ptr = ptr->prev;
		else
			ptr = NULL;
		if (mb_dup == lst->value)
			return (1);
	}
	return (0);
}
