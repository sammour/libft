/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 02:10:33 by sblancha          #+#    #+#             */
/*   Updated: 2015/11/27 05:06:47 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	def;

	res = 0;
	i = 0;
	def = 1;
	while (ft_isspace(str[i]) != 0)
		i++;
	if (str[i] == '-')
	{
		def = 0 - def;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) != 0)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	res = res * def;
	return (res);
}
