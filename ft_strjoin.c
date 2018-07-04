/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:46:57 by vnxele            #+#    #+#             */
/*   Updated: 2018/07/02 19:10:59 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1);
	if (!(join = ft_strnew(i + ft_strlen((char *)s2))))
		return (NULL);
	ft_strcpy(join, s1);
	j = 0;
	while (s2[j])
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
