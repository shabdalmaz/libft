/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:49:17 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:49:18 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_mem.h"

char	*ft_strdup(const char *s)
{
	char	*s_ptr;
	size_t	s_len;

	s_ptr = NULL;
	s_len = ft_strlen(s) + 1;
	if (!(s_ptr = (char *)malloc(sizeof(byte) * s_len)))
		return (NULL);
	ft_memcpy(s_ptr, s, s_len);
	return (s_ptr);
}
