/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructs_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:59:38 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:21:06 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rr(t_strct *p_strct)
{
	forw_rot(&(p_strct->begina), &(p_strct->endofa));
	forw_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	p_strct->oper_cnt++;
	return ;
}

void	rrr(t_strct *p_strct)
{
	revs_rot(&(p_strct->begina), &(p_strct->endofa));
	revs_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	p_strct->oper_cnt++;
	return ;
}

void	sa(t_strct *p_strct)
{
	swap_lst(&(p_strct->begina), &(p_strct->endofa));
	p_strct->oper_cnt++;
	return ;
}

void	sb(t_strct *p_strct)
{
	swap_lst(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	return ;
}

void	ss(t_strct *p_strct)
{
	swap_lst(&(p_strct->begina), &(p_strct->endofa));
	swap_lst(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	p_strct->oper_cnt++;
	return ;
}
