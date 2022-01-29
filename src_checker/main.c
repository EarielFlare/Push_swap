/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:06:48 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:33:30 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "checker.h"

void	p_strct_init(t_strct *p_strct)
{
	p_strct->oper_cnt = 0;
	p_strct->numa = 0;
	p_strct->numb = 0;
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
	return (flag);
}

void	form_stack_a(t_strct *p_strct)
{
	int	numb;

	numb = p_strct->numb;
	while (numb --)
		pa(p_strct);
	return ;
}

void	free_res(t_strct *p_strct)
{
	stack_clear(p_strct->begina);
	stack_clear(p_strct->beginb);
	free (p_strct);
	exit (1);
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
		{
			if (!begin_process(p_strct))
				free_res(p_strct);
			if (!check_sequence(p_strct->begina)
				&& p_strct->beginb == NULL && p_strct->endofb == NULL)
				write (1, "OK\n", 3);
			else
				write (1, "KO\n", 3);
		}
		free_res(p_strct);
	}
	return (0);
}
