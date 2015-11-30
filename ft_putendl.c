#include "libft.h"

void	ft_putendl(char *s)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}