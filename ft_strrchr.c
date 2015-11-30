/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:26:42 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 05:14:22 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char*)s);
	if (c == 0)
		return ((char*)s + ft_strlen((char*)s));
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}
