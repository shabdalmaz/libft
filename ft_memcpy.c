#include "ft_mem.h"

/*
 * byte - unsigned char
 * word - unsigned int
 * WORD_SIZE - sizeof(unsigned int)
 */

void	*ft_memcpy(void *dst0, const void *src0, size_t n)
{
	byte		*dst;
	const byte	*src;
	size_t		i;

	if (n <= 0 || dst0 == src0)
		return (dst0);
	i = n / WORD_SIZE;
	dst = (byte *)dst0;
	src = (const byte *)src0;
	while (i--)
	{
		*(word *)dst = *(word *)src;
		dst += WORD_SIZE;
		src += WORD_SIZE;
	}
	i = n % WORD_SIZE;
	while (i--)
	{
		*dst = *src;
		dst += 1;
		src += 1;
	}
	return (dst0);
}
