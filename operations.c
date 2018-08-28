/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 21:25:49 by vnxele            #+#    #+#             */
/*   Updated: 2018/08/28 05:53:06 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_a(t_stack **a)
{
	t_stack *tmp_node;

	tmp_node = (t_stack*)malloc(sizeof(t_stack));
	if (!*a || !(*a)->next)
		return (0);
	tmp_node->data = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = tmp_node->data;
	return (0);
}

int	swap_b(t_stack **b)
{
	t_stack *tmp_node;

	tmp_node = (t_stack*)malloc(sizeof(t_stack));
	if (!*b || !(*b)->next)
		return (0);
	tmp_node->data = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = tmp_node->data;
	return (0);
}

int	ss(t_stack **a, t_stack **b)
{
	swap_a(a);
	swap_b(b);
	return (0);
}

int	push_a(t_stack **a, t_stack **b)
{
	if(!*b)
		return (0);
	push(a, (*b)->data);
	*b = (*b)->next;
	if (*b)
	(*b)->prev = NULL;
	return (0);
}

int	push_b(t_stack **a, t_stack **b)
{
	if(!*a)
		return (0);
	push(b, (*a)->data);
	*a = (*a)->next;
	if (*a)
	(*a)->prev = NULL;
	return (0);
}
