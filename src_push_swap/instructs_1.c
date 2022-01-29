/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructs_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:23:47 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:54:22 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_strct *p_strct)
{
	forw_rot(&(p_strct->begina), &(p_strct->endofa));
	p_strct->oper_cnt++;
	write(1, "ra\n", 3);
	return ;
}

void	rb(t_strct *p_strct)
{
	forw_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	write(1, "rb\n", 3);
	return ;
}

void	rra(t_strct *p_strct)
{
	revs_rot(&(p_strct->begina), &(p_strct->endofa));
	p_strct->oper_cnt++;
	write(1, "rra\n", 4);
	return ;
}

void	rrb(t_strct *p_strct)
{
	revs_rot(&(p_strct->beginb), &(p_strct->endofb));
	p_strct->oper_cnt++;
	write(1, "rrb\n", 4);
	return ;
}
