/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:04:39 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:00:53 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_stack **head_a, t_stack **head_b)
{
	if (count_stack(*head_a) == 2)
		swap_a(head_a);
	if (count_stack(*head_a) == 3)
		sort_three(head_a);
	if (count_stack(*head_a) == 4)
		sort_four(head_a, head_b);
	if (count_stack(*head_a) == 5)
		sort_five(head_a, head_b);
	if (count_stack(*head_a) > 5)
		sorting(head_a, head_b, count_stack(*head_a));
}
