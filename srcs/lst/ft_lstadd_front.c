#include "ft_lst.h"

void	ft_lstadd_front(t_list **alst, t_list *new_node)
{
	if (new_node != NULL)
	{
		if (alst != NULL)
		{
			new_node->next = *alst;
			*alst = new_node;
		}
		else
			alst = &new_node;
	}
}
