/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 09:36:04 by vnxele            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/07/09 11:41:47 by vuyaninxe        ###   ########.fr       */
=======
/*   Updated: 2018/07/04 12:46:57 by vuyaninxe        ###   ########.fr       */
>>>>>>> da39addc2c7a84bd999e3249019c8339fb6e60ea
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	cpy;

	len = ft_dstrlen(n);
	cpy = n;
	if (n < 0)
	{
		cpy = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
		str[--len] = cpy % 10 + '0';
	while (cpy /= 10)
		str[--len] = cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
