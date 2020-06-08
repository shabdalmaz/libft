#include "ft_mem.h"

void	*ft_memccpy(void *dst0, const void *src0, int c, size_t n)
{
	byte	*c_ptr;
	size_t	len;

	if (n > 0)
	{
		if ((c_ptr = (byte *)ft_memchr(src0, c, n)))
			len = c_ptr - (const byte *)src0 + 1;
		if (c_ptr)
		{
			ft_memcpy(dst0, src0, len);
			return (dst0 + len);
		}
		else
			ft_memcpy(dst0, src0, n);
	}
	return (NULL);
}
