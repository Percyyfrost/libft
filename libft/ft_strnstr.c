/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 22:40:11 by vnxele            #+#    #+#             */
/*   Updated: 2017/07/20 14:26:55 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		x;
	size_t	y;

	x = 0;
	y = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[x] != '\0' && len > 0)
	{
		if (big[x] == little[y])
		{
			y++;
			if (little[y] == '\0')
				break ;
		}
		len--;
		x++;
	}
	if (ft_strlen(little) == y)
	{
		y = x - (ft_strlen(little) - 1);
		return ((char *)big + y);
	}
	return (NULL);
}
