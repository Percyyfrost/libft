/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 06:31:29 by vnxele            #+#    #+#             */
/*   Updated: 2018/08/28 07:50:44 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char **av)
{
	t_vars var;

	var.i = 1;
	var.a = NULL;
	var.b = NULL;
	while (av[var.i])
		append(&var.a, ft_atoi(av[var.i++]));
	while (var.a)
	{
		ft_putnbr(var.a->data);
		write(1, "\n", 1);
		var.a = var.a->next;
	}
	return(0);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	if (valid_av(av))
		return (push_swap(av));
	else
	{
		ft_putendl("Error");
		return (1);
	}
	return (0);
}
