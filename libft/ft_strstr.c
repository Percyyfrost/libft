/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 22:20:58 by vnxele            #+#    #+#             */
/*   Updated: 2018/07/04 11:53:43 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		n;

	n = ft_strlen((char *)needle);
	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack)
		if (!ft_memcmp(haystack++, needle, n))
			return ((char *)haystack - 1);
	return (0);
}
