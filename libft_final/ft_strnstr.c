/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:13:03 by dpoulter          #+#    #+#             */
/*   Updated: 2018/05/23 17:36:45 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		k;
	int		found;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	found = 1;
	while (*(haystack + ++i) && i < (int)len)
	{
		j = 0;
		if (*(haystack + i) == *(needle))
		{
			k = i;
			found = 1;
			while (*(haystack + k) && *(needle + j) && j < (int)len && k < (int)len)
				if (*(haystack + k++) != *(needle + j++))
					found = 0;
			if (found && !*(needle + j))
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
