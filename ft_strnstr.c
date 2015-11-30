/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:10:32 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 04:23:37 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	if (s2[0] == 0)
		return ((char*)s1);
	while (s1[i] != 0 && i < n)
	{
		tmp = i;
		while (s1[i] == s2[j] && i < n)
		{
			i++;
			j++;
			if (s2[j] == 0)
				return ((char*)s1 + tmp);
		}
		j = 0;
		i = tmp + 1;
	}
	return (NULL);
}
