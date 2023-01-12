/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted_for_one.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:42:46 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/12 15:55:11 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_number1(int argc, char **argv, int *numbers)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < argc)
	{
		numbers[n] = ft_atoi(argv[i]);
		i++;
		n++;
	}
}

int	check_sorted_for_one(int argc, char **argv)
{
	int	*numbers;
	int	i;

	i = 0;
	numbers = malloc(sizeof(int) * (argc));
	if (!numbers)
		return (0);
	fill_number1(argc, argv, numbers);
	while (i < argc - 1)
	{
		if (numbers[i] < numbers[i + 1])
			i++;
		else
			break ;
	}
	free (numbers);
	if (i < argc - 1)
		return (1);
	if (i == argc - 1)
		return (0);
	else
		return (1);
}
