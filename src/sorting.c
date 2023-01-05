/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:16:57 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/05 18:37:24 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void find_n(int len, int n)
{
    if (len == 100)
        n = 15;
    if (len == 500)
        n = 30;
    if (len == 9)
        n = 3;
    else 
        n = 1;
}

void fill_b(t_stack **head_a, t_stack **head_b, int len)
{
    int counter;
    int n;
    
    n = 0;
    find_n(len, n);
    counter = 0;
    while ((*head_a) != NULL)
    {
        if ((*head_a) -> index <= counter)
        {
            push_b(head_a, head_b);
            rotate_b(head_b);
            counter++;
        }
        else if ((*head_a) -> index <= counter + n)
        {
            push_b(head_a, head_b);
            counter++;
        }
        else 
            rotate_a(head_a);
    }
}

void count_rotate(t_stack **head_b, int max)
{
    int i;
    t_stack *cursor = *head_b;

    i = 0;
    while (cursor -> index != max)
    {
        cursor = cursor -> next;
        i++;
    }
    if (i == (max / 2))
        rotate_b(head_b);
    else if (i > (max / 2))
        while ((*head_b) -> index != max)
            reverse_rotate_b(head_b);
    else if (i < (max / 2))
        while ((*head_b) -> index != max)
            rotate_b(head_b);
}

void transfer_to_a(t_stack **head_a, t_stack **head_b, int len)
{
    int max;

    max = len - 1;
    while ((*head_b) != NULL)    
    {    
        while ((*head_b) -> index != max)
            count_rotate(head_b, max);
        if ((*head_b) -> index == max)
        {
            push_a(head_a, head_b);
            max--;
        }
    }
}

void sorting(t_stack **head_a, t_stack **head_b, int len)
{  
    fill_b(head_a, head_b, len);
    transfer_to_a(head_a, head_b, len);
}   