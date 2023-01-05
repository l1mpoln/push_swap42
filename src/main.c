/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:17:54 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/02 20:52:56 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    
    stack_a = NULL;
    stack_b = NULL;
    if (argc < 2)
        return (0);
    if (!inp_check(argc, argv))
        return (0);
    push_back(&stack_a, argc, argv);
    add_indexes(&stack_a);
    swap(&stack_a, &stack_b);

    while (stack_a != NULL)
    {
        printf("%d\n", stack_a -> number);
        stack_a = stack_a -> next;
    }

    return (0);
}
