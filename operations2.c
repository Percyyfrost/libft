/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 12:15:47 by vnxele            #+#    #+#             */
/*   Updated: 2018/08/28 06:52:53 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_a(t_stack **a)
{
	if (!*a)
		return (0);
	append(a, (*a)->data);
	*a = (*a)->next;
	(*a)->prev = NULL;
	return (0);
}

int	rotate_b(t_stack **b)
{
	if (!*b)
		return (0);
	append(b, (*b)->data);
	*b = (*b)->next;
	(*b)->prev = NULL;
	return (0);
}

int	rr(t_stack **a, t_stack **b)
{
	rotate_a(a);
	rotate_b(b);
	return (0);
}

int	reverse_ra(t_stack **a)
{
	t_stack *tmp_a;

	tmp_a = *a;
	if(!*a)
		return (0);
	while (tmp_a)
		if (!tmp_a->next)
			break ;
		else
			tmp_a = tmp_a->next;
	if (!tmp_a->prev)
		return (0);
	tmp_a->prev->next = NULL;
	push(a, tmp_a->data);
	return (0);
}

int	reverse_rb(t_stack **b)
{
	t_stack *tmp_b;

	tmp_b = *b;
	if (!*b)
		return (0);
	while (tmp_b)
		if (!tmp_b->next)
			break ;
		else
			tmp_b = tmp_b->next;
	if (!tmp_b->prev)
		return (0);
	tmp_b->prev->next = NULL;
	push(b, tmp_b->data);
	return (0);
}
