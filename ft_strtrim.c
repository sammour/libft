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

char			*ft_strtrim(char const *s)
{
	char	*trimer;
	size_t	i;
	size_t	start;
	size_t	stop;

	trimer = NULL;
	i = 0;
	start = 0;
	stop = 0;
	if (*s != 0)
	{
		while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			start++;
		if (s[start] == 0)
			return (NULL);
		stop = ft_strlen((char*)s) - 1;
		while (s[stop] == ' ' || s[stop] == '\t' || s[stop] == '\n')
			stop--;
		if (!(trimer = (char*)malloc(sizeof(char) * (stop - start + 2))))
			return (NULL);
		ft_strncpy(trimer, (char*)&s[start], stop - start + 1);
		trimer[stop + 1] = 0;
	}
	return (trimer);
}
