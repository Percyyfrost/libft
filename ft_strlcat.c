/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:10:23 by vnxele            #+#    #+#             */
/*   Updated: 2018/07/02 18:43:06 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	int			i;
	int			dest_len;
	int			j;
	int			size_temp;

	dest_len = 0;
	i = 0;
	j = 0;
	size_temp = size;
	j = ft_strlen((char *)src);
	while (dest[i] && i < size_temp)
		i++;
	dest_len = i;
	while (src[i - dest_len] && i < size_temp - 1)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	if (dest_len < size_temp)
		dest[i] = '\0';
	return (dest_len + j);
}
