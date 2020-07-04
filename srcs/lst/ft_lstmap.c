#include "ft_lst.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;

	n_list == NULL;
	if ((*f) == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if ((n_node = ft_lstnew((*f)(lst->content))) != NULL)
			ft_lstadd_back(&n_list, n_node);
		else
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (n_list);
}
