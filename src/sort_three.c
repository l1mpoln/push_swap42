/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:55:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/30 20:25:55 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_three(t_stack **stack_a)
{
    t_stack *last = (*stack_a) -> next -> next;
    t_stack *first = *stack_a;
    t_stack *middle = (*stack_a) -> next;
    if (first -> number > first -> next ->number)
        swap_a(stack_a);
    if (middle -> number > last -> number)
        reverse_rotate_a(stack_a);
    if ((*stack_a) -> number > first -> number)
        swap_a(stack_a);
}