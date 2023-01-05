/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:18:02 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/05 18:04:23 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
    int number;
    struct s_stack *next;
    int index;
}                   t_stack;

int main(int argc, char **argv);
int input_checker(int argc, char **argv);
int check_sorted(int argc, char **argv);
void	push_back(t_stack **head, int argc, char **argv);
int inp_check(int argc, char **argv);
t_stack	*create_node(int value);
int count_stack(t_stack *head);
void add_indexes(t_stack **head_a);

void swap_a(t_stack **head);
void swap_b(t_stack **head);
void swap_ss(t_stack **head_a, t_stack **head_b);
void push_b(t_stack **head_a, t_stack **head_b);
void push_a(t_stack **head_a, t_stack **head_b);
void rotate_a(t_stack **head);
void rotate_b(t_stack **head);
void rotate_rr(t_stack **head_a, t_stack **head_b);
void reverse_rotate_a(t_stack **head);
void reverse_rotate_b(t_stack **head);
void reverse_rr(t_stack **head_a, t_stack **head_b);

void swap(t_stack **head_a, t_stack **head_b);
void sort_three(t_stack **stack_a);
void my_sort(t_stack **head_a, t_stack **head_b);
void sorting(t_stack **head_a, t_stack **head_b, int len);
void sort_four(t_stack **head_a, t_stack **head_b);
void sort_five(t_stack **head_a, t_stack **head_b);

#endif