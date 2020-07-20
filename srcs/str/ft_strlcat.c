/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:49:30 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:49:32 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dst_len;
	i = 0;
	while (len + 1 < dst_size && *(src + i))
	{
		*(dst + len) = *(src + i);
		len += 1;
		i += 1;
	}
	*(dst + len) = 0;
	return (src_len + (dst_size > dst_len ? dst_len : dst_size));
}
