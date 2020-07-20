/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:49:52 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:49:53 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*un_s1;
	unsigned char	*un_s2;

	i = 0;
	un_s1 = (unsigned char *)s1;
	un_s2 = (unsigned char *)s2;
	while (i < n && *(un_s1 + i) && *(un_s2 + i))
	{
		if (*(un_s1 + i) != *(un_s2 + i))
			break ;
		i += 1;
	}
	return (*(un_s1 + i) - *(un_s2 + i));
}
