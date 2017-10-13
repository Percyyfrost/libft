/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 22:20:58 by vnxele            #+#    #+#             */
/*   Updated: 2017/06/08 01:40:39 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t		n;

	n = ft_strlen((char *)little);
	if (*little == 0)
		return ((char *)big);
	while (*big)
		if (!ft_memcmp(big++, little, n))
			return ((char *)big - 1);
	return (0);
}
