/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructs_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:10:16 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:55:04 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_strct *p_strct)
{
	forw_rot(&(p_strct->begina), &(p_strct->endofa));
	forw_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	p_strct->oper_cnt++;
	write(1, "rr\n", 3);
	return ;
}

void	rrr(t_strct *p_strct)
{
	revs_rot(&(p_strct->begina), &(p_strct->endofa));
	revs_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	p_strct->oper_cnt++;
	write(1, "rrr\n", 4);
	return ;
}

void	sa(t_strct *p_strct)
{
	swap_lst(&(p_strct->begina), &(p_strct->endofa));
	p_strct->oper_cnt++;
	write(1, "sa\n", 3);
	return ;
}

void	sb(t_strct *p_strct)
{
	swap_lst(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	write(1, "sb\n", 3);
	return ;
}

void	ss(t_strct *p_strct)
{
	swap_lst(&(p_strct->begina), &(p_strct->endofa));
	swap_lst(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	p_strct->oper_cnt++;
	write(1, "ss\n", 3);
	return ;
}
