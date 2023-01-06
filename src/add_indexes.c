/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_indexes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 03:19:55 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:26:11 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_numberss(int *numbers, t_stack **head_a)
{
	int			i;
	int			n;
	int			len;
	t_stack		*cursor;

	len = count_stack(*head_a);
	n = 0;
	i = 0;
	cursor = *head_a;
	while (i < len)
	{
		numbers[i] = cursor -> number;
		cursor = cursor -> next;
		i++;
	}
}

void	insertion_sort(int len, int *numbers)
{
	int	newelement;
	int	location;
	int	i;

	i = 1;
	while (i < len)
	{
		newelement = numbers[i];
		location = i - 1;
		while (location >= 0 && numbers[location] > newelement)
		{
			numbers[location + 1] = numbers[location];
			location = location - 1;
		}
		numbers[location + 1] = newelement;
		i++;
	}
}

void	give_index(int *numbers, int len, t_stack **head_a)
{
	int			i;
	t_stack		*cursor;

	cursor = *head_a;
	i = 0;
	while (i < len)
	{
		while (cursor -> number != numbers[i])
			cursor = cursor -> next;
		if (cursor -> number == numbers[i])
			cursor -> index = i;
		cursor = *head_a;
		i++;
	}
}

void	add_indexes(t_stack **head_a)
{
	int	i;
	int	*numbers;
	int	len;

	i = 0;
	len = count_stack(*head_a);
	numbers = malloc(sizeof(int) * count_stack(*head_a));
	if (!numbers)
		return ;
	fill_numberss(numbers, head_a);
	insertion_sort(len, numbers);
	give_index(numbers, len, head_a);
	free (numbers);
}
