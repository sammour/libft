/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:41:04 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 03:27:20 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char*)s;
	while (i < len)
	{
		tmp[i] = 0;
		i++;
	}
}
