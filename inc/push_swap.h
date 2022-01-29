/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:40:59 by cgregory          #+#    #+#             */
/*   Updated: 2022/01/24 17:15:16 by cgregory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_lst
{
	int				flag;
	int				index;
	int				group;
	int				value;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

typedef struct s_strct
{			
	int		oper_cnt;
	int		numa;
	int		numb;
	int		nextpoint;
	int		midpoint;
	int		maxpoint;
	int		curr_group;
	t_lst	*begina;
	t_lst	*endofa;
	t_lst	*beginb;
	t_lst	*endofb;
}	t_strct;

t_lst	*create_node(int value);
void	atob_proc(t_strct *p_strct);
void	btoa_proc(t_strct *p_strct);
int		check_stack_b_seq(t_lst *lst, int stack_len, char c);
int		back_track_b(t_strct *p_strct);
int		stacka_is_sorted(t_strct *p_strct);
int		check_depth(t_lst *lst);
void	move_sorted(t_strct *p_strct);
int		index_one_element(t_lst *ptr1, int key);
int		stack_indexing(t_lst *lst);
void	begin_process(t_strct *p_strct);
char	ft_atoi_char(const char *str, long int *nbr);
int		seq_parse(t_strct *p_strct, t_lst **prev_node, char *argv);
int		ft_isnum(char *str);
void	del_node(t_lst *lst);
void	stack_clear(t_lst *lst);
int		dups_found(t_lst *lst);
void	p_strct_init(t_strct *p_strct);
void	stack_proc_btoa(t_strct *p_strct);
int		qsort_atob(t_strct *p_strct, int group_depth);
int		qsort_btoa(t_strct *p_strct);
int		check_stack_a_hard(t_strct *p_strct, int group_depth);
int		check_stack_a(t_strct *p_strct);
int		check_stack_b(t_strct *p_strct);
void	set_groups(t_lst *lst, int num);
void	take_abc(t_lst *lst, int *abc);
int		check3a_light(t_strct *p_strct);
int		check3b_light(t_strct *p_strct);
void	swapa_3_hard_sit_1(t_strct *p_strct);
void	swapa_3_hard_sit_2(t_strct *p_strct);
void	swapa_3_hard_sit_3(t_strct *p_strct);
void	swapa_3_hard_sit_4(t_strct *p_strct);
void	swapa_3_hard_sit_5(t_strct *p_strct);
void	swapb_3_light_sit_1(t_strct *p_strct);
void	swapb_3_light_sit_2(t_strct *p_strct);
void	swapb_3_light_sit_3(t_strct *p_strct);
void	swapb_3_light_sit_4(t_strct *p_strct);
void	swapb_3_light_sit_5(t_strct *p_strct);
void	swapb_3_light_sit_6(t_strct *p_strct);
int		check3a_hard(t_strct *p_strct);
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
