/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_one_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:14:20 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/15 15:53:52 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	count_strings(char *str)
{
	int	i;
	int	spaces;

	i = 0;
	spaces = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			i++;
		if (str[i] == ' ')
		{
			spaces++;
			i++;
		}
	}
	spaces++;
	return (spaces);
}

int	work_one_line(char *str, t_stack **head_a)
{
	int		i;
	char	**strings;
	int		number_of_strings;

	i = 0;
	strings = ft_split(str, ' ');
	number_of_strings = count_strings(str);
	if (!inp_check_for_one(number_of_strings, strings))
		return (0);
	push_back_for_one(head_a, number_of_strings, strings);
	while (i < number_of_strings)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (1);
}
