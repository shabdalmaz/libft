#include "ft_mem.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	byte		*dst0;
	const byte	*src0;

	dst0 = (byte *)dst;
	src0 = (const byte *)src;
	if (dst == src || n == 0)
		return (dst0);
	if ((word *)src < (word *)dst && (word *)src + n > (word *)dst)
	{
		while (n >= WORD_SIZE && (n -= WORD_SIZE))
			*(word *)(dst + n) = *(word *)(src + n);
		while (n--)
			*(dst + n) = *(src + n);
		return (dst0);
	}
	return (ft_memcpy(dst0, src0, n));
}
