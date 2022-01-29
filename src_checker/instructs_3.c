/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructs_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:59:49 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:30:44 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_strct *p_strct)
{
	move_lst(&(p_strct->beginb), &(p_strct->endofb),
		&(p_strct->begina), &(p_strct->endofa));
	p_strct->numa += 1;
	p_strct->numb -= 1;
	p_strct->oper_cnt++;
	return ;
}

void	pb(t_strct *p_strct)
{
	move_lst(&(p_strct->begina), &(p_strct->endofa),
		&(p_strct->beginb), &(p_strct->endofb));
	p_strct->numa -= 1;
	p_strct->numb += 1;
	p_strct->oper_cnt++;
	return ;
}
