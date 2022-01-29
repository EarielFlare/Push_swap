/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check3_AB.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:46:01 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:32:30 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check3a_light(t_strct *p_strct)
{
	int	abc[3];

	take_abc(p_strct->begina, abc);
	if (abc[0] > abc[1] && abc[0] < abc[2])
		sa(p_strct);
	else if (abc[1] < abc[0] && abc[1] > abc[2])
	{
		sa(p_strct);
		rra(p_strct);
	}
	else if (abc[2] < abc[0] && abc[2] > abc[1])
		ra(p_strct);
	else if (abc[2] > abc[0] && abc[2] < abc[1])
	{
		sa(p_strct);
		ra(p_strct);
	}
	else if (abc[0] < abc[1] && abc[0] > abc[2])
		rra(p_strct);
	return (1);
}

int	check3a_hard(t_strct *p_strct)
{
	int	abc[3];

	take_abc(p_strct->begina, abc);
	if (abc[0] > abc[1] && abc[0] < abc[2])
		swapa_3_hard_sit_1(p_strct);
	else if (abc[1] < abc[0] && abc[1] > abc[2])
		swapa_3_hard_sit_2(p_strct);
	else if (abc[2] < abc[0] && abc[2] > abc[1])
		swapa_3_hard_sit_3(p_strct);
	else if (abc[2] > abc[0] && abc[2] < abc[1])
		swapa_3_hard_sit_4(p_strct);
	else if (abc[0] < abc[1] && abc[0] > abc[2])
		swapa_3_hard_sit_5(p_strct);
	return (1);
}

int	check3b_light(t_strct *p_strct)
{
	int	abc[3];

	take_abc(p_strct->beginb, abc);
	if (abc[0] > abc[1] && abc[0] < abc[2])
		swapb_3_light_sit_1(p_strct);
	else if (abc[1] < abc[0] && abc[1] > abc[2])
		swapb_3_light_sit_2(p_strct);
	else if (abc[2] < abc[0] && abc[2] > abc[1])
		swapb_3_light_sit_3(p_strct);
	else if (abc[2] > abc[0] && abc[2] < abc[1])
		swapb_3_light_sit_4(p_strct);
	else if (abc[0] < abc[1] && abc[0] > abc[2])
		swapb_3_light_sit_5(p_strct);
	else
		swapb_3_light_sit_6(p_strct);
	return (1);
}
