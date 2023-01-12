/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inp_check_for_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:11:05 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/12 16:01:21 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	inp_check_for_one(int argc, char **argv)
{
	if (!input_checker_for_one(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (!check_sorted_for_one(argc, argv))
		return (0);
	return (1);
}
