# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgregory <cgregory@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 21:14:39 by cgregory          #+#    #+#              #
#    Updated: 2022/01/24 18:07:03 by cgregory         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

NAME_BONUS		=	checker

LIBFT_NAME		=	libft.a

SRCS_DIR		=	./src_push_swap/

SRCS_DIR_BONUS	=	./src_checker/

SRCS			=	$(SRCS_DIR)main.c\
					$(SRCS_DIR)main_proc.c			$(SRCS_DIR)stack_proc.c\
					$(SRCS_DIR)check3_AB.c			$(SRCS_DIR)aux_funcs.c\
					$(SRCS_DIR)commands1.c			$(SRCS_DIR)commands2.c\
					$(SRCS_DIR)instr_funcs.c		$(SRCS_DIR)instructs_1.c\
					$(SRCS_DIR)instructs_2.c		$(SRCS_DIR)instructs_3.c\
					$(SRCS_DIR)check_varsA.c		$(SRCS_DIR)check_varsB.c\
					$(SRCS_DIR)check_stack.c		$(SRCS_DIR)back_track_b.c\
					$(SRCS_DIR)ft_atoi_char.c		$(SRCS_DIR)new_funcs.c

SRCS_BONUS		=	$(SRCS_DIR_BONUS)main.c			$(SRCS_DIR_BONUS)get_next_line.c\
					$(SRCS_DIR_BONUS)commands1.c	$(SRCS_DIR_BONUS)commands2.c\
					$(SRCS_DIR_BONUS)instructs_1.c	$(SRCS_DIR_BONUS)instructs_2.c\
					$(SRCS_DIR_BONUS)instructs_3.c	$(SRCS_DIR_BONUS)instr_funcs.c\
					$(SRCS_DIR_BONUS)ft_atoi_char.c

LIBFT			=	libft.h

LIBFT_DIR		=	./libft/

PUSH_SWAP		=	push_swap.h

PUSH_SWAP_DIR	=	./inc/

OBJ				=	$(SRCS:%.c=%.o)

OBJ_BONUS		=	$(SRCS_BONUS:%.c=%.o)

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

.PHONY			:	all clean fclean re

all				:	$(NAME) $(NAME_BONUS)

bonus			:	$(NAME_BONUS)

$(NAME)			:	$(LIBFT_NAME) $(OBJ) $(PUSH_SWAP_DIR)$(PUSH_SWAP)
					$(CC) $(OBJ) $(LIBFT_DIR)$(LIBFT_NAME) -o $(NAME)

$(NAME_BONUS)	:	$(LIBFT_NAME) $(OBJ_BONUS) $(PUSH_SWAP_DIR)$(PUSH_SWAP) $(LIBFT_DIR)$(LIBFT_NAME)
					$(CC) $(OBJ_BONUS) $(LIBFT_DIR)$(LIBFT_NAME) -o $(NAME_BONUS)

$(LIBFT_NAME)	:	
					make all -C $(LIBFT_DIR)

%.o				:	%.c $(PUSH_SWAP_DIR)$(PUSH_SWAP)
					$(CC) $(CFLAGS) -I$(PUSH_SWAP_DIR) -I$(LIBFT_DIR) -c $< -o $@

clean			:	
					rm -rf $(OBJ)
					rm -rf $(OBJ_BONUS)
					make clean -C $(LIBFT_DIR)

fclean			:	clean
					rm -f $(NAME)
					rm -f $(NAME_BONUS)
					make fclean -C $(LIBFT_DIR)

re				:	fclean all
