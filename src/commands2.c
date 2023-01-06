/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:18:11 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:21:46 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_stack **head)
{
	t_stack	*last;
	t_stack	*cursor;

	if (count_stack(*head) < 2)
		return ;
	last = NULL;
	cursor = *head;
	while (cursor -> next != NULL)
	{
		last = cursor;
		cursor = cursor -> next;
	}
	cursor -> next = (*head);
	last -> next = NULL;
	*head = cursor;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_stack **head)
{
	t_stack	*last;
	t_stack	*cursor;

	if (count_stack(*head) < 2)
		return ;
	last = NULL;
	cursor = *head;
	while (cursor -> next != NULL)
	{
		last = cursor;
		cursor = cursor -> next;
	}
	cursor -> next = (*head);
	last -> next = NULL;
	*head = cursor;
	write(1, "rrb\n", 4);
}
