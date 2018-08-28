/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 05:01:17 by vnxele            #+#    #+#             */
/*   Updated: 2018/08/28 06:42:26 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct		s_stack
{
	int		data;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;

typedef struct		s_vars
{
	t_stack		*a;
	t_stack		*b;
	int		i;
	char		*line;
	int		flag;
}			t_vars;

void			push(t_stack **head_ref, int new_data);
void			append(t_stack **head_ref, int new_data);
int			swap_a(t_stack **a);
int			swap_b(t_stack **b);
int			ss(t_stack **a, t_stack **b);
int			push_a(t_stack **a, t_stack **b);
int			push_b(t_stack **a, t_stack **b);
int			rotate_a(t_stack **a);
int			rotate_b(t_stack **b);
int			rr(t_stack **a, t_stack **b);
int			reverse_ra(t_stack **a);
int			reverse_rb(t_stack **b);
int			rrr(t_stack **a, t_stack **b);
int			execute_operation(char *line, t_stack **a, t_stack **b);
int			check_order(t_stack *a);
int			valid_av(char **av);

# endif
