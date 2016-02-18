/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 02:13:02 by sblancha          #+#    #+#             */
/*   Updated: 2015/12/03 05:54:04 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenght(char *s, char c)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	while (s[start] == c)
		start++;
	while (s[i + start] != c)
		i++;
	return (i);
}

static char		**newchain(int split, char c, char *s, char **tab)
{
	int		count;
	size_t	len;
	int		i;

	count = 0;
	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (count < split)
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i + 1] && (s[i + 1] == s[i]))
			i++;
		i++;
		count++;
	}
	if (!(tab[count] = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = lenght(&(s[i]), c);
	tab[count] = ft_strncpy(tab[count], &(s[i]), len);
	tab[count][len] = 0;
	return (tab);
}

static int		splits(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] == 0)
		return (0);
	while (s[i] != 0)
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = splits((char*)s, c);
	tab = NULL;
	if (!(tab = (char**)malloc(sizeof(char*) * (j + 1))))
		return (NULL);
	while (i < j)
	{
		if (!(tab = newchain(i++, c, (char*)s, tab)))
			return (NULL);
	}
	tab[j] = NULL;
	return (tab);
}
