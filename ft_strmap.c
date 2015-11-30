/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:18:24 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/30 00:36:15 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = NULL;
	if (!(fresh = (char*)malloc(ft_strlen((char*)s))))
		return (NULL);
	while (s[i] != 0)
	{
		fresh[i] = f(s[i]);
		i++;
	}
	return (fresh);
}
