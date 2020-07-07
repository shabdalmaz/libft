/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:50:59 by ashabdan          #+#    #+#             */
/*   Updated: 2020/07/06 15:51:01 by ashabdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	match;

	i = 0;
	match = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < n && *(haystack + i) && *(needle + match))
	{
		if (*(haystack + i) == *(needle + match))
			match += 1;
		else
			match = 0;
		i += 1;
	}
	return (!*(needle + match) ? (char *)haystack + i - match : NULL);
}
