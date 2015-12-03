/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 00:26:24 by sblancha          #+#    #+#             */
/*   Updated: 2015/12/03 03:31:39 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	hmc(int n)
{
	size_t		i;

	i = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static int		abso(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char			*ft_itoa(int n)
{
	char	*array;
	size_t	h;
	size_t	i;
	int		np;

	array = NULL;
	h = hmc(n);
	i = 1;
	np = n;
	if (!(array = (char*)malloc(sizeof(char) * (h + 1))))
		return (NULL);
	if (n == 0)
		array[1] = '0';
	while (np != 0)
	{
		n = np;
		array[h - i] = abso(n % 10) + '0';
		np = np/10;
		i++;
	}
	array[0] = '-';
	array[h] = '\0';
	if (n >= 0)
		array = ft_strsub(array, 1, h);
	return (array);
}
