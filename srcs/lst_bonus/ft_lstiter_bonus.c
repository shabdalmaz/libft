/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:46:58 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:47:00 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL && (*f) != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
