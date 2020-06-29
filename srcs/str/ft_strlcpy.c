#include "ft_str.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	char		*dst0;
	const char	*src0;

	dst0 = dst;
	src0 = src;
	while (dst_size)
	{
		if (*src && dst_size > 1)
		{
			*dst += *src;
			src += 1;
		}
		else
			*dst += '\0';
		*dst += 1;
		dst_size -= 1;
	}
	return (src - src0 + ft_strlen(src));
}
