/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:52:14 by sblancha          #+#    #+#             */
/*   Updated: 2015/12/03 02:56:39 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	dst = NULL;
	i = 0;
	if (!(dst = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (s1[i] != 0)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
