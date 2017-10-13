/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 02:42:22 by vnxele            #+#    #+#             */
/*   Updated: 2017/06/10 03:15:51 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	k;

	if (!s || !f)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (new == 0)
		return (0);
	k = 0;
	while (s[k])
	{
		new[k] = (*f)(k, s[k]);
		k++;
	}
	return (new);
}
