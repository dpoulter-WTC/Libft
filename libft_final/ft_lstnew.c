/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:06:34 by dpoulter          #+#    #+#             */
/*   Updated: 2018/05/24 13:51:38 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlink;

	if (!(newlink = malloc(content_size)))
		return (NULL);
	ft_memcpy(newlink->content, content, content_size);
	newlink->content_size = content_size;
	newlink->next = NULL;
	return (newlink);
}
