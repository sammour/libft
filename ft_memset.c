/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:38:35 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 03:25:25 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*newb;

	i = 0;
	newb = (unsigned char *)b;
	len = len * sizeof(*b);
	while (i < len)
	{
		newb[i] = c;
		i++;
	}
	return (b);
}
