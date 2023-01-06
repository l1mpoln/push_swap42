/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:39:58 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:23:37 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_number(int argc, char **argv, int *numbers)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	while (i < argc)
	{
		numbers[n] = ft_atoi(argv[i]);
		i++;
		n++;
	}
}

int	check_sorted(int argc, char **argv)
{
	int	*numbers;
	int	i;

	i = 0;
	numbers = malloc(sizeof(int) * (argc - 1));
	if (!numbers)
		return (0);
	fill_number(argc, argv, numbers);
	while (i < argc - 2)
	{
		if (numbers[i] < numbers[i + 1])
			i++;
		else
			break ;
	}
	free (numbers);
	if (i < argc - 2)
		return (1);
	if (i == argc - 2)
		return (0);
	else
		return (1);
}
