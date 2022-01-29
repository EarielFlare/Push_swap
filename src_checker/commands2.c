/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:58:24 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 20:11:21 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	proc_sequence(t_strct *p_strct,
	t_lst **prev_node, char *str)
{
	t_lst		*new_node;
	long int	value;
	int			flag;

	flag = 1;
	ft_atoi_char(str, &value);
	if (ft_atoi_char(str, &value) != 'K')
		flag = 0;
	new_node = NULL;
	new_node = create_node(value);
	if (*prev_node)
		(*prev_node)->next = new_node;
	new_node->prev = *prev_node;
	*prev_node = new_node;
	if (!p_strct->begina)
		p_strct->begina = new_node;
	new_node->next = p_strct->begina;
	p_strct->endofa = new_node;
	return (flag);
}

int	seq_parse(t_strct *p_strct, t_lst **prev_node, char *argv)
{
	int		k;
	char	**arr;
	int		flag;

	k = 0;
	flag = 1;
	arr = ft_split(argv, ' ');
	while (arr[k])
	{
		if (!ft_isnum(arr[k])
			|| !proc_sequence(p_strct, prev_node, arr[k])
			|| dups_found(p_strct->endofa))
			flag = 0;
		p_strct->numa += 1;
		k++;
	}
	while (k--)
		free (arr[k]);
	free (arr);
	return (flag);
}

int	read_sequence(int argc, char **argv, t_strct *p_strct)
{
	int		cnt;
	t_lst	*prev_node;

	prev_node = NULL;
	cnt = 0;
	while (cnt++ < argc - 1)
	{
		if (!seq_parse(p_strct, &prev_node, argv[cnt]))
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	(p_strct->begina)->prev = p_strct->endofa;
	return (1);
}

int	check_sequence(t_lst *lst)
{
	t_lst	*ptr;
	t_lst	*start;
	int		curr_value;
	int		prev_value;

	if (!lst)
		return (0);
	start = lst;
	ptr = lst;
	prev_value = (lst)->value;
	while (ptr)
	{
		if (ptr->next != start)
			ptr = ptr->next;
		else
			ptr = NULL;
		curr_value = (lst)->value;
		if (curr_value < prev_value)
			return (1);
		prev_value = curr_value;
		lst = ptr;
	}
	return (0);
}

int	stack_not_done(t_lst *lst)
{
	t_lst	*ptr;
	t_lst	*start;

	start = lst;
	ptr = lst;
	while (ptr)
	{
		if (ptr->next != start)
			ptr = ptr->next;
		else
			ptr = NULL;
		if (lst->flag == 0)
			return (1);
		lst = ptr;
	}
	return (0);
}
