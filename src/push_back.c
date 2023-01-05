/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 02:32:43 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/02 03:18:26 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*create_node(int value)
{
	t_stack *node = malloc(sizeof(t_stack));

	node -> number = value;
	node -> next = NULL;
	node -> index = 0;

	return (node);
}

void	push_back(t_stack **head, int argc, char **argv)
{
	int i;
	int number;

	i = 1;
	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		t_stack *new_node = create_node(number);
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			t_stack *cursor = *head;
			while (cursor -> next != NULL)
			{
				cursor = cursor -> next;
			}
			cursor -> next = new_node;
		}
		i++;
	}
}