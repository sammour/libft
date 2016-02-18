/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 19:41:17 by sblancha          #+#    #+#             */
/*   Updated: 2015/12/03 02:18:30 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	a;
	size_t	b;

	i = ft_strlen(s1);
	a = i;
	b = ft_strlen(s2) + a;
	while (i < b)
	{
		s1[i] = s2[i - a];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
