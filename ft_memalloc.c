/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:21:23 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/29 23:27:01 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*fresh;

	fresh = NULL;
	if (!(fresh = (char*)malloc(size)))
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
