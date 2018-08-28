/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 22:13:25 by vnxele            #+#    #+#             */
/*   Updated: 2017/06/07 02:45:45 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int				i;
	int				j;
	unsigned int	a;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	a = 0;
	while (src[j] && a < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
