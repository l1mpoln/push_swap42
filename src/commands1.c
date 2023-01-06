/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:10:28 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:22:08 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;

	if (*head_b == NULL)
		return ;
	tmp = *head_b;
	*head_b = (*head_b)->next;
	tmp -> next = *head_a;
	*head_a = tmp;
	write(1, "pa\n", 3);
}

void	rotate_a(t_stack **head)
{
	t_stack	*last;
	t_stack	*first;

	if (count_stack(*head) < 2)
		return ;
	last = *head;
	while (last -> next != NULL)
	{
		last = last -> next;
	}
	first = *head;
	*head = first -> next;
	last -> next = first;
	first -> next = NULL;
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **head)
{
	t_stack	*last;
	t_stack	*first;

	if (count_stack(*head) < 2)
		return ;
	last = *head;
	while (last -> next != NULL)
	{
		last = last -> next;
	}
	first = *head;
	*head = first -> next;
	last -> next = first;
	first -> next = NULL;
	write(1, "rb\n", 3);
}

void	rotate_rr(t_stack **head_a, t_stack **head_b)
{
	rotate_a(head_a);
	rotate_b(head_b);
	write(1, "rr\n", 3);
}
