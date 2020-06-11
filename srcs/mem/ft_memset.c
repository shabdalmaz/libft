#include "ft_mem.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	byte	*dst0;
	byte	val;
	word	mask;
	size_t	i;

	dst0 = (byte *)dst;
	val = (byte)c;
	mask = (word)val;
	mask = (mask << 8) | mask;
	mask = (mask << 16) | mask;
	i = n / WORD_SIZE;
	while (i--)
	{
		*(word *)dst = mask;
		dst += WORD_SIZE;
	}
	i = n % WORD_SIZE;
	while (i--)
		*dst++ = val;
	return (dst0);
}
