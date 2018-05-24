/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <daniel@poulter.co.za>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:34:16 by dpoulter          #+#    #+#             */
/*   Updated: 2018/05/23 15:55:12 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		get_str_len(int n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	* ft_itoa(int n)
{
	char	*str;
	int		str_len;
	int		ncpy;

	str_len = get_str_len(n);
	ncpy = n;
	if (n < 0)
	{
		ncpy = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = ncpy % 10 + '0';
	while (ncpy /= 10)
		str[--str_len] = ncpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
