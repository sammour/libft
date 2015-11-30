#include "libft.h"

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
	while (np != 0)
	{
		n = np;
		array[h - i] = abso(n % 10) + '0';
		np = np/10;
		i++;
	}
	if (n < 0)
		array[h - i] = '-';
	else
		array[h - i] = '+';
	array[h] = '\0';
	return (array);
}