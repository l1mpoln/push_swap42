/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inp_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:54:13 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/27 17:41:47 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int inp_check(int argc, char **argv)
{
    if (!input_checker(argc, argv))
    {
        ft_putstr_fd("Error\n", 2);
        return (0);
    }
    if (!check_sorted(argc, argv))
        return (0);
    return (1);
}