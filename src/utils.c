/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:58:01 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/06 12:00:59 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_int(int argc, char **argv)
{
	int		i;
	long	tmp;

	i = 1;
	while (i < argc)
	{
		tmp = ft_atoi(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicates(int argc, char **argv)
{
	int	*numbers;

	numbers = malloc(sizeof(int) * (argc - 1));
	if (!numbers)
		return (0);
	fill_numbers(argc, argv, numbers);
	if (!check(argc, numbers))
		return (0);
	free(numbers);
	return (1);
}
