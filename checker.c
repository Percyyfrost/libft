/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 06:31:10 by vnxele            #+#    #+#             */
/*   Updated: 2018/08/28 06:49:50 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(char **av)
{
	t_vars	var;

	var.flag = 0;
	var.i = 1;
	var.a = NULL;
	var.b = NULL;
	while (av[var.i])
		append(&var.a, ft_atoi(av[var.i++]));
	while (get_next_line(1, &var.line) != 42)
	{
		if (!ft_strcmp(var.line, ""))
			break ;
		var.flag = execute_operation(var.line, &var.a, &var.b);
		if(var.flag)
		{
                        ft_putendl("Error");
                        return(1);
		}
		free(var.line);
	}
	if (check_order(var.a) || var.b)
	{
		ft_putendl("KO");
		return(0);
	}
	else
		ft_putendl("OK");
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	if (valid_av(av))
		return(check(av));
	else
	{
		ft_putendl("Error");
		return (1);
	}

	return (0);
}
