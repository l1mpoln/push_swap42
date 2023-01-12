# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 21:39:49 by vkuzmin           #+#    #+#              #
#    Updated: 2023/01/12 16:02:26 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
SRCSDIR		= src
OBJSDIR		= objs
INCLUDES	= includes
EXTLIB		= includes/libft

SRCS		= main.c \
			  add_indexes.c check_sorted.c commands.c \
			  inp_check.c input_checker.c main.c push_back.c \
			  sort_five.c sort_four.c sort_three.c sorting.c swap.c \
			  free_stack.c utils.c commands1.c commands2.c \
			  work_one_line.c check_strings.c inp_check_for_one.c \
			  input_checker_for_one.c check_sorted_for_one.c \
			  push_back_for_one.c 

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

OBJS	= $(SRCS:%.c=$(OBJSDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(EXTLIB)/libft.a
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJS): $(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	@mkdir -p $(@D)
	@echo Compiling $<
	@$(CC) $(CFLAGS) -I$(INCLUDES) -I$(EXTLIB)/incs -c $< -o $@

$(EXTLIB)/libft.a:
	@echo "Compiling $@"
	@$(MAKE) -s -C $(EXTLIB) > /dev/null

clean:
	rm -rf $(OBJSDIR)
	@$(MAKE) -s -C $(EXTLIB) clean

fclean: clean
	rm -rf $(NAME)
	@$(MAKE) -s -C $(EXTLIB) fclean

re: fclean all

.PHONY: all clean fclean re test