/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:48:03 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 17:25:13 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

#define FST_BIT 0x01010101
#define LST_BIT 0x80808080

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_byte	*c_ptr;
	t_byte			chr;
	t_word			mask;
	size_t			word_size;

	c_ptr = (const t_byte *)s;
	chr = (t_byte)c;
	word_size = sizeof(t_word);
	if (n > word_size)
	{
		mask = (t_word)chr;
		mask = mask | (mask << 8);
		mask = mask | (mask << 16);
		while (n >= word_size)
		{
			if ((((*(t_word *)c_ptr ^ mask) - FST_BIT) \
			& ~(*(t_word *)c_ptr ^ mask) & LST_BIT))
				break ;
			n -= word_size;
			c_ptr += word_size;
		}
	}
	while (n-- && *c_ptr != chr)
		c_ptr += 1;
	return (n ? (void *)c_ptr : NULL);
}
