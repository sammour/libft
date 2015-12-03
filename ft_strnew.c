/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:31:14 by sblancha          #+#    #+#             */
/*   Updated: 2015/12/03 02:27:21 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = NULL;
	if (!(new = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	new[size] = 0;
	ft_strclr(new);
	return (new);
}
