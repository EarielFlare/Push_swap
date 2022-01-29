/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:20:29 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:53:18 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	forw_rot(t_lst **begin, t_lst **endof)
{
	if (*begin == NULL && *endof == NULL)
		return ;
	*begin = (*begin)->next;
	*endof = (*endof)->next;
	return ;
}

void	revs_rot(t_lst **begin, t_lst **endof)
{
	if (*begin == NULL && *endof == NULL)
		return ;
	*begin = (*begin)->prev;
	*endof = (*endof)->prev;
	return ;
}

void	swap_lst(t_lst **begin, t_lst **endof)
{
	t_lst	*begin_tmp;

	if (*begin == NULL && *endof == NULL)
		return ;
	begin_tmp = *begin;
	*begin = (*begin)->next;
	(*endof)->next = *begin;
	(*begin)->prev = *endof;
	begin_tmp->next = (*begin)->next;
	begin_tmp->prev = *begin;
	(*begin)->next = begin_tmp;
	begin_tmp->next->prev = begin_tmp;
	*endof = (*begin)->prev;
	return ;
}

void	move_lst(t_lst **begina, t_lst **endofa,
		t_lst **beginb, t_lst **endofb)
{
	t_lst	*begin_tmp;

	if (*begina == NULL && *endofa == NULL)
		return ;
	begin_tmp = *begina;
	if (*beginb)
	begin_tmp = *beginb;
	*beginb = *begina;
	*begina = (*begina)->next;
	(*begina)->prev = *endofa;
	(*endofa)->next = *begina;
	if (*begina == *beginb)
	{
		*begina = NULL;
		*endofa = NULL;
	}
	if (!*endofb)
	*endofb = *beginb;
	(*beginb)->prev = *endofb;
	(*beginb)->next = begin_tmp;
	begin_tmp->prev = *beginb;
	(*endofb)->next = *beginb;
	return ;
}
