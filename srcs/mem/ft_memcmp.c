/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:48:32 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:23:32 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const t_byte	*str1;
	const t_byte	*str2;
	size_t			i;

	if (n <= 0)
		return (0);
	str1 = (const t_byte *)s1;
	str2 = (const t_byte *)s2;
	i = n / sizeof(t_word);
	while (i--)
	{
		if (*(t_word *)str1 != *(t_word *)str2)
			break ;
		str1 += sizeof(t_word);
		str2 += sizeof(t_word);
	}
	i = n % sizeof(t_word);
	while (i--)
	{
		if (*str1 != *str2)
			break ;
		str1 += 1;
		str2 += 1;
	}
	return (*str1 - *str2);
}
