/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:33:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:22:13 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	count_stack(t_stack *head)
{
	int		i;
	t_stack	*current;

	i = 0;
	current = head;
	while (current != NULL)
	{
		i++;
		current = current -> next;
	}
	return (i);
}

void	swap_a(t_stack **head)
{
	int	tmp_number;
	int	tmp_index;

	if (count_stack(*head) < 2)
		return ;
	tmp_number = (*head)->number;
	tmp_index = (*head)->index;
	(*head)->number = (*head)->next->number;
	(*head)->index = (*head)->next->index;
	(*head)->next->number = tmp_number;
	(*head)->next->index = tmp_index;
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **head)
{
	int	tmp_number;
	int	tmp_index;

	if (count_stack(*head) < 2)
		return ;
	tmp_number = (*head)->number;
	tmp_index = (*head)->index;
	(*head)->number = (*head)->next->number;
	(*head)->index = (*head)->next->index;
	(*head)->next->number = tmp_number;
	(*head)->next->index = tmp_index;
	write(1, "sb\n", 3);
}

void	swap_ss(t_stack **head_a, t_stack **head_b)
{
	swap_a(head_a);
	swap_b(head_b);
	write(1, "ss\n", 3);
}

void	push_b(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;

	if (*head_a == NULL)
		return ;
	tmp = *head_a;
	*head_a = (*head_a)->next;
	tmp -> next = *head_b;
	*head_b = tmp;
	write(1, "pb\n", 3);
}
