/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:34:44 by sblancha          #+#    #+#             */
/*   Updated: 2015/12/03 02:16:43 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	b;

	i = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (a >= size)
	{
		return (size + b);
	}
	else if (a + b >= size)
	{
		i = a;
		while (i < size)
		{
			dst[i] = src[i - a];
			i++;
		}
		dst[size - 1] = 0;
	}
	else
		dst = ft_strcat(dst, src);
	return (a + b);
}
