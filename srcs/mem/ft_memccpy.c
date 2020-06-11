#include "ft_mem.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	byte	*c_ptr;
	size_t	len;

	if (n > 0)
	{
		if ((c_ptr = (byte *)ft_memchr(src, c, n)))
			len = c_ptr - (const byte *)src + 1;
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
