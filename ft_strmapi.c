/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:36:38 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/30 00:39:48 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = NULL;
	if (!(fresh = (char*)malloc(ft_strlen((char*)s))))
		return (NULL);
	while (s[i] != 0)
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	return (fresh);
}
