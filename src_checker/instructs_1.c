/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructs_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:23:47 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:19:55 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_strct *p_strct)
{
	forw_rot(&(p_strct->begina), &(p_strct->endofa));
	p_strct->oper_cnt++;
	return ;
}

void	rb(t_strct *p_strct)
{
	forw_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	return ;
}

void	rra(t_strct *p_strct)
{
	revs_rot(&(p_strct->begina), &(p_strct->endofa));
	p_strct->oper_cnt++;
	return ;
}

void	rrb(t_strct *p_strct)
{
	revs_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	return ;
}
