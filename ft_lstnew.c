#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*n;

	n = NULL;
	if (!(n = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	n->content = NULL;
	n->content_size = 0;
	n->next = NULL;
	if (ft_strlen((char*)content) == 0)
		return (n);
	n->content_size = content_size;
	if (!(n->content = (void*)malloc(sizeof(content) * (content_size + 1))))
	{
		free(n);	
		return (NULL);
	}
	n->content = ft_memcpy(n->content, content, content_size);
	return (n);
}