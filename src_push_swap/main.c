/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:06:48 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:35:19 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "push_swap.h"

void	p_strct_init(t_strct *p_strct)
{
	p_strct->oper_cnt = 0;
	p_strct->numa = 0;
	p_strct->numb = 0;
	p_strct->nextpoint = 0;
	p_strct->midpoint = 0;
	p_strct->maxpoint = 0;
	p_strct->curr_group = 0;
	p_strct->begina = NULL;
	p_strct->endofa = NULL;
	p_strct->beginb = NULL;
	p_strct->endofb = NULL;
	return ;
}

int	ft_isnum(char *str)
{
	int	flag;

	flag = 0;
	if (*str == '-')
		str++;
	while (*str && ft_isdigit(*str))
	{
		flag = 1;
		str++;
	}
	if (*str != '\0' && !ft_isdigit(*str))
		flag = 0;
	if (flag == 0)
		write (2, "Error\n", 6);
	return (flag);
}

int	main(int argc, char **argv)
{
	t_strct	*p_strct;

	if (argc != 1)
	{
		p_strct = (t_strct *)malloc(sizeof(t_strct));
		if (!p_strct)
			return (0);
		p_strct_init(p_strct);
		if (read_sequence(argc, argv, p_strct))
			if (check_sequence(p_strct->begina))
				begin_process(p_strct);
		stack_clear(p_strct->begina);
		stack_clear(p_strct->beginb);
		free (p_strct);
	}
	return (0);
}
