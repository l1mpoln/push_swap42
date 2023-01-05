/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:33:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/01/05 18:16:49 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int count_stack(t_stack *head)
{
    int i;

    i = 0;
    t_stack *current = head;
    while (current != NULL)
    {
        i++;
        current = current -> next;
    }
    return (i);
}

void swap_a(t_stack **head)
{
    int tmp_number;
    int tmp_index;

    if (count_stack(*head) < 2)
        return;
    tmp_number = (*head)->number;
    tmp_index = (*head)->index;
    (*head) -> number = (*head) -> next -> number;
    (*head) -> index = (*head) -> next -> index;
    (*head) -> next -> number = tmp_number;
    (*head) -> next -> index = tmp_index;
    write(1, "sa\n", 3);
}

void swap_b(t_stack **head)
{
    int tmp_number;
    int tmp_index;

    if (count_stack(*head) < 2)
        return;
    tmp_number = (*head)->number;
    tmp_index = (*head)->index;
    (*head) -> number = (*head) -> next -> number;
    (*head) -> index = (*head) -> next -> index;
    (*head) -> next -> number = tmp_number;
    (*head) -> next -> index = tmp_index;
    write(1, "sb\n", 3);
}

void swap_ss(t_stack **head_a, t_stack **head_b)
{
    swap_a(head_a);
    swap_b(head_b);
    write(1, "ss\n", 3);
}

void push_b(t_stack **head_a, t_stack **head_b)
{
    if (*head_a == NULL)
        return;
    t_stack *tmp = *head_a;
    *head_a = (*head_a) -> next;
    tmp -> next = *head_b;
    *head_b = tmp;
    write(1, "pb\n", 3);
}

void push_a(t_stack **head_a, t_stack **head_b)
{
    if (*head_b == NULL)
        return;
    t_stack *tmp = *head_b;
    *head_b = (*head_b) -> next;
    tmp -> next = *head_a;
    *head_a = tmp;
    write(1, "pa\n", 3);
}

void rotate_a(t_stack **head)
{
    if (count_stack(*head) < 2)
        return;

    t_stack *last = *head; 
    while (last -> next != NULL)
    {
        last = last -> next;
    }
    t_stack *first = *head;
    *head = first -> next;
    last -> next = first;
    first -> next = NULL;
    write(1, "ra\n", 3);
}

void rotate_b(t_stack **head)
{
    if (count_stack(*head) < 2)
        return;

    t_stack *last = *head; 
    while (last -> next != NULL)
    {
        last = last -> next;
    }
    t_stack *first = *head;
    *head = first -> next;
    last -> next = first;
    first -> next = NULL;
    write(1, "rb\n", 3);
}

void rotate_rr(t_stack **head_a, t_stack **head_b)
{
    rotate_a(head_a);
    rotate_b(head_b);
    write(1, "rr\n", 3);
}

void reverse_rotate_a(t_stack **head)
{
    if (count_stack(*head) < 2)
        return;
    
    t_stack *last = NULL;
    t_stack *cursor = *head;
    while (cursor -> next != NULL)
    {
        last = cursor;
        cursor = cursor -> next;
    }
    cursor -> next = (*head);
    last -> next = NULL;
    *head = cursor;
    write(1, "rra\n", 4);
}

void reverse_rotate_b(t_stack **head)
{
    if (count_stack(*head) < 2)
        return;
    
    t_stack *last = NULL;
    t_stack *cursor = *head;
    while (cursor -> next != NULL)
    {
        last = cursor;
        cursor = cursor -> next;
    }
    cursor -> next = (*head);
    last -> next = NULL;
    *head = cursor;
    write(1, "rrb\n", 4);
}

void reverse_rr(t_stack **head_a, t_stack **head_b)
{
    reverse_rotate_a(head_a);
    reverse_rotate_b(head_b);
    write(1, "rrr\n", 4);
}