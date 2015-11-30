/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:56:31 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 03:21:54 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	a;
	size_t	b;

	i = ft_strlen(s1);
	a = i;
	b = i;
	if ((i = ft_strlen((char*)s2)) > n)
		b = b + n;
	else
		b = b + i;
	i = a;
	while (i < b)
	{
		s1[i] = s2[i - a];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
