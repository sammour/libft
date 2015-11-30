#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	buf[5];
	ft_strcpy(buf, "poi");
	printf("%zu", ft_strlcat(buf, "lol", 5));
	return(0);
}
