/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 22:34:12 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 04:24:13 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	if (s2[0] == 0)
		return ((char*)s1);
	while (s1[i] != 0)
	{
		tmp = i;
		while (s1[i] == s2[j])
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
