/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 15:14:51 by vnxele            #+#    #+#             */
/*   Updated: 2018/08/28 06:16:45 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_stack *a)
{
	int	i;
	t_stack *tmp_a;

	tmp_a = a;
	while (tmp_a)
	{
		i = tmp_a->data;
		tmp_a = tmp_a->next;
		if (tmp_a && i > tmp_a->data)
			return (1);
	}
	return (0);
}

int	execute_operation(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strcmp(line, "sa"))
		return(swap_a(a));
	if(!ft_strcmp(line, "sb"))
		return(swap_b(b));
	if (!ft_strcmp(line, "ss"))
		return(ss(a, b));
	if (!ft_strcmp(line, "pa"))
		return(push_a(a, b));
	if (!ft_strcmp(line, "pb"))
		return(push_b(a, b));
	if (!ft_strcmp(line, "ra"))
		return(rotate_a(a));
	if (!ft_strcmp(line, "rb"))
		return(rotate_b(b));
	if (!ft_strcmp(line, "rr"))
		return(rr(a, b));
	if (!ft_strcmp(line, "rra"))
		return(reverse_ra(a));
	if (!ft_strcmp(line, "rrb"))
		return(reverse_rb(b));
	if (!ft_strcmp(line, "rrr"))
		return(rrr(a, b));
	return (1);
}
