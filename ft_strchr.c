/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:15:51 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 04:38:29 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*st;

	i = 0;
	st = (char*)s;
	if (c == 0)
		return (st + ft_strlen(st));
	while (st[i] != 0)
	{
		if (st[i] == c)
			return (st + i);
		i++;
	}
	return (0);
}
