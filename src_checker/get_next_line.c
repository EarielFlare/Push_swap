/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:26:36 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:13:49 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	get_next_line(char **line)
{
	int			i;
	int			rd;
	char		letter;
	static char	first_line[0];

	i = 0;
	*line = first_line;
	rd = read(0, &letter, 1);
	while (rd > 0 && letter != '\n')
	{
		first_line[i++] = letter;
		rd = read(0, &letter, 1);
	}
	first_line[i] = '\0';
	return (rd);
}

int	instr_check(t_strct *p_strct, char *line, int len)
{
	if (!ft_strncmp(line, "sa", len))
		sa(p_strct);
	else if (!ft_strncmp(line, "sb", len))
		sb(p_strct);
	else if (!ft_strncmp(line, "ss", len))
		ss(p_strct);
	else if (!ft_strncmp(line, "pa", len))
		pa(p_strct);
	else if (!ft_strncmp(line, "pb", len))
		pb(p_strct);
	else if (!ft_strncmp(line, "ra", len))
		ra(p_strct);
	else if (!ft_strncmp(line, "rra", len))
		rra(p_strct);
	else if (!ft_strncmp(line, "rb", len))
		rb(p_strct);
	else if (!ft_strncmp(line, "rrb", len))
		rrb(p_strct);
	else if (!ft_strncmp(line, "rr", len))
		rr(p_strct);
	else if (!ft_strncmp(line, "rrr", len))
		rrr(p_strct);
	else
		return (0);
	return (1);
}

int	begin_process(t_strct *p_strct)
{
	char	*line;
	int		len;

	line = NULL;
	while (get_next_line(&line) > 0)
	{
		len = ft_strlen(line);
		if (!instr_check(p_strct, line, len))
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}
