/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:44:42 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 11:50:26 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_min(t_stack **head_a, t_stack **head_b)
{
	int		max;
	int		i;
	t_stack	*cursor;

	cursor = *head_a;
	i = 1;
	max = count_stack(*head_a) - 1;
	while (cursor -> index != 0)
	{
		i++;
		cursor = cursor -> next;
	}
	while ((*head_a)->index != 0)
	{
		if (i < (max / 2))
			rotate_a(head_a);
		if (i > (max / 2))
			reverse_rotate_a(head_a);
		else
			rotate_a(head_a);
	}
	push_b(head_a, head_b);
}

void	push_pre_min(t_stack **head_a, t_stack **head_b)
{
	int		max;
	int		i;
	t_stack	*cursor;

	cursor = *head_a;
	i = 1;
	max = count_stack(*head_a) - 1;
	while (cursor -> index != 1)
	{
		i++;
		cursor = cursor -> next;
	}
	while ((*head_a)->index != 1)
	{
		if (i < (max / 2))
			rotate_a(head_a);
		if (i > (max / 2))
			reverse_rotate_a(head_a);
		else
			rotate_a(head_a);
	}
	push_b(head_a, head_b);
}

void	sort_five(t_stack **head_a, t_stack **head_b)
{
	push_min(head_a, head_b);
	push_pre_min(head_a, head_b);
	sort_three(head_a);
	push_a(head_a, head_b);
	push_a(head_a, head_b);
}
