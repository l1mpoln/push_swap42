/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:52:21 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:04:50 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack **head_a)
{
	t_stack	*cursor;
	t_stack	*next;

	cursor = *head_a;
	while (cursor != NULL)
	{
		next = cursor -> next;
		free(cursor);
		cursor = next;
	}
	*head_a = NULL;
}
