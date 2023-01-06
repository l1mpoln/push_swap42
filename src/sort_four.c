/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:56:42 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 11:49:00 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_zero(t_stack **head_a, t_stack **head_b)
{
	int	i;

	i = 0;
	if ((*head_a)->index != 0 && (*head_a)->next -> index != 0)
		while ((*head_a)->index != 0)
			rotate_a(head_a);
	else
		while ((*head_a)->index != 0)
			reverse_rotate_a(head_a);
	if ((*head_a)->index == 0)
		push_b(head_a, head_b);
}

void	sort_four(t_stack **head_a, t_stack **head_b)
{
	find_zero(head_a, head_b);
	sort_three(head_a);
	push_a(head_a, head_b);
}
