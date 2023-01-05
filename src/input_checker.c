/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:31:15 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/22 16:49:34 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int is_number(char *argv)
{
    int i;

    i = 0;
    if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] != '\0')
        i++;
    if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] == '\0')
        return (0);
    while(argv[i])
    {
        if (!ft_isdigit(argv[i]))
            return (0);
        i++;
    }
    return (1);
}

int check_zeros(char *argv)
{
    int i;

    i = 0;
    if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] != '\0')
        i++;
    if (argv[i] != '0')
        return (0);
    return (1);
}

void fill_numbers(int argc, char **argv, int *numbers)
{
    int i;
    int n;

    i = 1;
    n = 0;
    while (i < argc)
    {
        numbers[n] = ft_atoi(argv[i]);
        i++;
        n++;
    }
}

int check(int argc, int *numbers)
{
    int	i;
	int	j;

    argc--;
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

int check_duplicates(int argc, char **argv)
{
    int *numbers;

    numbers = malloc(sizeof(int) * (argc - 1));
    if (!numbers)
        return (0);
    fill_numbers(argc, argv, numbers);
    if (!check(argc, numbers))
        return (0);
    free(numbers);
    return (1);
}

int check_int(int argc, char **argv)
{
    int i;
    long tmp;

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

int input_checker(int argc, char **argv)
{
    int i;
    int zeros;

    zeros = 0;
    i = 1;
    while (i < argc)
    {
        if (!is_number(argv[i]))
            return (0);
        zeros += check_zeros(argv[i]);
        i++;
    }
    if (zeros > 1)
        return (0);
    if (!check_duplicates(argc, argv))
        return (0);
    if (!check_int(argc, argv))
        return (0);
    return(1);
}