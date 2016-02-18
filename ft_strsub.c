/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:54:50 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/30 01:42:57 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*fresh;

	i = 0;
	fresh = NULL;
	if (!(fresh = (char*)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		fresh[i] = s[i + (size_t)start];
		i++;
	}
	fresh[i] = 0;
	return (fresh);
}
