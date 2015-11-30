/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:43:27 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 04:23:56 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = dst;
	while (i < n && src[i] != 0)
	{
		tmp[i] = src[i];
		i++;
	}
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
	return (dst);
}
