#include "ft_lst.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size += 1;
		lst = lst->next;
	}
	return (size);
}
