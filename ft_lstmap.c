/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuyaninxele <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 05:43:39 by vuyaninxe         #+#    #+#             */
/*   Updated: 2018/07/10 06:27:33 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*tmp;

	if (!lst && !f)
		return (NULL);
	tmp = f(lst);
	if (tmp && lst->next)
		tmp->next = ft_lstmap(lst->next, f);
	return (tmp);
}
