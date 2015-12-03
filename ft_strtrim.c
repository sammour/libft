/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 01:50:53 by sblancha          #+#    #+#             */
/*   Updated: 2015/12/03 05:55:23 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	begin(char *s)
{
	size_t	i;

	i = 0;
	while (ft_isspace(s[i]) != 0)
		i++;
	return (i);
}

static size_t	last(char *s, size_t len)
{
	size_t	i;

	i = 1;
	while (ft_isspace(s[len - i]) != 0)
		i++;
	return (len - i);
}

char			*ft_strtrim(char const *s)
{
	char	*trimer;
	size_t	i;
	size_t	start;
	size_t	stop;

	trimer = NULL;
	i = 0;
	start = begin((char*)s);
	stop = last((char*)s, ft_strlen(s));
	if (!(trimer = (char*)malloc(sizeof(char) * (stop - start + 2))))
		return (NULL);
	while (i + start <= stop)
	{
		trimer[i] = s[i + start];
	}
	trimer[i] = 0;
	return (trimer);
}
