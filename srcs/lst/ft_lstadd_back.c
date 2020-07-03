#include "ft_lst.h"

void	ft_lstadd_back(t_list **alst, t_list *new_node)
{
	if (new_node != NULL)
	{
		if (alst == NULL)
			alst = &new_node;
		else if (*alst == NULL)
			*alst = new_node;
		else
			ft_lstlast(*alst)->next = new_node;
	}
}
