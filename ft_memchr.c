/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 02:11:35 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 04:20:56 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	new;

	i = 0;
	f = (unsigned char *)s;
	new = c;
	while (i < n)
	{
		if (*f == new)
			return (f);
		i++;
		f++;
	}
	return (NULL);
}
