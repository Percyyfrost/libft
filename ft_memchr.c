/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 19:43:02 by vnxele            #+#    #+#             */
/*   Updated: 2017/06/22 00:48:18 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	char			*s;
	char			*temp;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (char)c)
		{
			temp = &s[i];
			return (temp);
		}
		i++;
	}
	return (NULL);
}
