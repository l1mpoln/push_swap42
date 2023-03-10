/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:55:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 11:48:05 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*middle;

	last = (*stack_a)->next->next;
	first = *stack_a;
	middle = (*stack_a)->next;
	if (first -> number > first -> next ->number)
		swap_a(stack_a);
	if (middle -> number > last -> number)
		reverse_rotate_a(stack_a);
	if ((*stack_a)->number > first -> number)
		swap_a(stack_a);
}
