/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 01:14:28 by vnxele            #+#    #+#             */
/*   Updated: 2018/07/11 18:06:52 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
<<<<<<< HEAD
		ft_putchar(n + '0');
=======
		if (n > 0)
			ft_putchar(nb + '0');
		else
			ft_putchar(-nb + '0');
>>>>>>> da39addc2c7a84bd999e3249019c8339fb6e60ea
}
