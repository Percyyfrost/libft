/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:23:10 by vnxele            #+#    #+#             */
/*   Updated: 2018/07/04 12:34:07 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int			i;
	int			j;
	char		*str;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	while (s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n')
		j--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		j--;
	if (j <= 0)
		j = 0;
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	s += i;
	i = -1;
	while (++i < j)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
