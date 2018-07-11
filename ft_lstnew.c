/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuyaninxele <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:12:17 by vuyaninxe         #+#    #+#             */
/*   Updated: 2018/07/09 12:01:28 by vuyaninxe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *temp;

	if(!(temp = (t_list*)malloc(sizeof(t_list))))
		return(NULL);
	if(!content)
	{
		temp->content = NULL;
		temp->content_size = 0;
	}
	else if ((temp->content = malloc(content_size)))
	{
		ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;
	}
	else
		return(NULL);
	return (temp);
}
