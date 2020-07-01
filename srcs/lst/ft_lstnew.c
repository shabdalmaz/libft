#include "ft_lst.h"
#include "ft_str.h"
#include "ft_mem.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	size_t	content_size;

	node = (t_list *)malloc(sizeof(t_list));
	if (!(content && node))
		return (NULL);
	content_size = ft_strlen(content) * sizeof(void);
	if ((node->content = malloc(content_size)))
		ft_memcpy(node->content, content, content_size);
	else
		node->content = NULL;
	node->next = NULL;
	return (node);
}
