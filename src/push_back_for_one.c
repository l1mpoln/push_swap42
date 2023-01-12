/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_for_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:01:46 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/12 16:02:39 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*create_node1(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	node -> number = value;
	node -> next = NULL;
	node -> index = 0;
	return (node);
}

void	push_back_for_one(t_stack **head, int argc, char **argv)
{
	int		i;
	int		number;
	t_stack	*new_node;
	t_stack	*cursor;

	i = 0;
	while (i < argc)
	{
		number = ft_atoi(argv[i]);
		new_node = create_node1(number);
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			cursor = *head;
			while (cursor -> next != NULL)
			{
				cursor = cursor -> next;
			}
			cursor -> next = new_node;
		}
		i++;
	}
}
