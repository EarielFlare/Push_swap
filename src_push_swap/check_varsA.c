/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_varsA.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:42:09 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:31:49 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swapa_3_hard_sit_1(t_strct *p_strct)
{
	sa(p_strct);
	return ;
}

void	swapa_3_hard_sit_2(t_strct *p_strct)
{
	pb(p_strct);
	sa(p_strct);
	move_sorted(p_strct);
	pa(p_strct);
	return ;
}

void	swapa_3_hard_sit_3(t_strct *p_strct)
{
	pb(p_strct);
	move_sorted(p_strct);
	pa(p_strct);
	return ;
}

void	swapa_3_hard_sit_4(t_strct *p_strct)
{
	move_sorted(p_strct);
	sa(p_strct);
	return ;
}

void	swapa_3_hard_sit_5(t_strct *p_strct)
{
	pb(p_strct);
	sa(p_strct);
	move_sorted(p_strct);
	pa(p_strct);
	return ;
}
