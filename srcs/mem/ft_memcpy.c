#include "ft_mem.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	byte		*dst0;
	size_t		i;

	if (n <= 0 || dst == src)
		return (dst);
	i = n / WORD_SIZE;
	dst0 = (byte *)dst;
	while (i--)
	{
		*(word *)dst = *(word *)src;
		dst += WORD_SIZE;
		src += WORD_SIZE;
	}
	i = n % WORD_SIZE;
	while (i--)
	{
		*(byte *)dst = *(byte *)src;
		dst += 1;
		src += 1;
	}
	return (dst0);
}
