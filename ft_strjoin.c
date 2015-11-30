/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 01:44:02 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/30 01:50:25 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;

	conc = NULL;
	if (!(conc = (char*)malloc(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1)))
		return (NULL);
	conc[0] = 0;
	conc = ft_strcat(conc, s1);
	conc = ft_strcat(conc, s2);
	return (conc);
}
