/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker_for_one.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:12:51 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/12 15:36:00 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_numberrr(char *argv)
{
	int	i;

	i = 0;
	if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] != '\0')
		i++;
	if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] == '\0')
		return (0);
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_zerosss(char *argv)
{
	int	i;

	i = 0;
	if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] != '\0')
		i++;
	if (argv[i] != '0')
		return (0);
	return (1);
}

void	fill_numbersss(int argc, char **argv, int *numbers)
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

int	checkkk(int argc, int *numbers)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (numbers[i] == numbers[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	input_checker_for_one(int argc, char **argv)
{
	int	i;
	int	zeros;

	zeros = 0;
	i = 0;
	while (i < argc)
	{
		if (!is_numberrr(argv[i]))
			return (0);
		zeros += check_zerosss(argv[i]);
		i++;
	}
	if (zeros > 1)
		return (0);
	if (!check_duplicates_for_one(argc, argv))
		return (0);
	if (!check_int_for_one(argc, argv))
		return (0);
	return (1);
}
