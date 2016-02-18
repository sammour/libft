/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 02:22:07 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 03:26:12 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sa;
	unsigned char	*sb;

	i = 0;
	sa = (unsigned char *)s1;
	sb = (unsigned char *)s2;
	while (i < n)
	{
		if (sa[i] != sb[i])
			return (sa[i] - sb[i]);
		i++;
	}
	return (0);
}
