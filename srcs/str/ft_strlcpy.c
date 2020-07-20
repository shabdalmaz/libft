/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:50:43 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:50:44 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	const char	*src0;

	if (!dst || !src)
		return (0);
	src0 = src;
	while (dst_size)
	{
		if (*src && dst_size > 1)
		{
			*dst = *src;
			dst += 1;
			src += 1;
		}
		else
		{
			*dst = 0;
			break ;
		}
		dst_size -= 1;
	}
	return ((src - src0) + ft_strlen(src));
}
