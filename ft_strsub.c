/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 19:18:50 by vnxele            #+#    #+#             */
/*   Updated: 2018/07/04 12:07:32 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*b;

	if (!s)
		return (0);
	i = 0;
	if (!(b = (char *)malloc(len + 1)))
		return (0);
	while (i < len)
	{
		b[i] = s[start];
		i++;
		start++;
	}
	b[i] = '\0';
	return (b);
}
