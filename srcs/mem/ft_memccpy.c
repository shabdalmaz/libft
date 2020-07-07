/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:47:58 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 16:54:01 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_byte	*c_ptr;
	size_t	len;

	if (n > 0)
	{
		if ((c_ptr = (t_byte *)ft_memchr(src, c, n)))
			len = c_ptr - (const t_byte *)src + 1;
		if (c_ptr)
		{
			ft_memcpy(dst, src, len);
			return (dst + len);
		}
		else
			ft_memcpy(dst, src, n);
	}
	return (NULL);
}
