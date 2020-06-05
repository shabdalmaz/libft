#include "ft_mem.h"

/*
 * byte - unsigned char
 * word - unsigned int
 * WORD_SIZE - sizeof(unsigned int)
 */

void	*ft_memset(void *dst0, int c, size_t n)
{
	byte	*dst;
	byte	val;
	word	mask;
	size_t	i;

	dst = (byte *)dst0;
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
