/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <daniel@poulter.co.za>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:27:36 by dpoulter          #+#    #+#             */
/*   Updated: 2018/05/23 17:39:39 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if(!s1 || !s2)
		return (0);
	return(ft_strncmp(s1, s2, n) ? 0 : 1);
}
