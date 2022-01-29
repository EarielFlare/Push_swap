/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:40:59 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/19 21:14:28 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_lst
{
	int				flag;
	int				value;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

typedef struct s_strct
{			
	int		oper_cnt;
	int		numa;
	int		numb;
	t_lst	*begina;
	t_lst	*endofa;
	t_lst	*beginb;
	t_lst	*endofb;
}	t_strct;

t_lst	*create_node(int value);
void	free_res(t_strct *p_strct);
int		instr_check(t_strct *p_strct, char *line, int len);
int		get_next_line(char **line);
int		begin_process(t_strct *p_strct);
char	ft_atoi_char(const char *str, long int *nbr);
int		seq_parse(t_strct *p_strct, t_lst **prev_node, char *argv);
int		ft_isnum(char *str);
void	del_node(t_lst *lst);
void	stack_clear(t_lst *lst);
int		dups_found(t_lst *lst);
int		stack_not_done(t_lst *lst);
void	p_strct_init(t_strct *p_strct);
void	form_stack_a(t_strct *p_strct);
int		stack_flags(t_lst *begin, int num);
int		check_r_stack(t_lst *begin, int num, char stack);
int		r_stack(t_strct *p_strct, t_lst *begin,
			int safe_num, char stack);
int		proc_sequence(t_strct *p_strct,
			t_lst **prev_node, char *str);
int		read_sequence(int argc,
			char **argv, t_strct *p_strct);
int		check_sequence(t_lst *lst);
void	forw_rot(t_lst **begin, t_lst **endof);
void	revs_rot(t_lst **begin, t_lst **endof);
void	swap_lst(t_lst **begin, t_lst **endof);
void	move_lst(t_lst **begina, t_lst **endofa,
			t_lst **beginb, t_lst **endofb);
void	ra(t_strct *p_strct);
void	rb(t_strct *p_strct);
void	rr(t_strct *p_strct);
void	rra(t_strct *p_strct);
void	rrb(t_strct *p_strct);
void	rrr(t_strct *p_strct);
void	sa(t_strct *p_strct);
void	sb(t_strct *p_strct);
void	ss(t_strct *p_strct);
void	pa(t_strct *p_strct);
void	pb(t_strct *p_strct);
#endif
