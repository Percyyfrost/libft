/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 06:48:03 by vnxele            #+#    #+#             */
/*   Updated: 2018/08/28 06:52:37 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     valid_av(char **av)
{
        int i;
        int j;

        i = 1;
        while (av[i])
        {
                j = 0;
                while (av[i][j])
                        if (!ft_isdigit(av[i][j++]))
                                return (0);
                i++;
        }
        i = 1;
        while (av[i])
        {
                j = 1;
                while (av[j])
                {
                        if (!ft_strcmp(av[i], av[j]) && i != j)
                                return (0);
                        j++;
                }
                i++;
        }
        return (1);
}

void push(t_stack **head, int new_data)
{
    t_stack *new_node;

    new_node = (t_stack*)malloc(sizeof(t_stack));
    new_node->data = new_data;
    new_node->next = (*head);
    new_node->prev = NULL;
    if ((*head) != NULL)
        (*head)->prev = new_node;
    (*head) = new_node;
}

void append(t_stack **head, int new_data)
{
    t_stack *new_node;
    t_stack *last;

    last = *head;
    new_node = (t_stack*)malloc(sizeof(t_stack));
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
    return ;
}

int     rrr(t_stack **a, t_stack **b)
{
        reverse_ra(a);
        reverse_rb(b);
        return (0);
}
