/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnxele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 16:19:43 by vnxele            #+#    #+#             */
/*   Updated: 2017/07/20 16:36:27 by vnxele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*s;
	unsigned char	*ss;
	int				i;

	i = 0;
	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	while (s[i] && ss[i] && ss[i] == s[i])
	{
		i++;
	}
	return (s[i] - ss[i]);
}
