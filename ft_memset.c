#include <string.h>

#define	WORD_SIZE sizeof(unsigned int)
typedef unsigned int word;

void	*ft_memset(void *dst0, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	val;
	word		mask;
	size_t		i;

	dst = (unsigned char *)dst0;
	val = (unsigned char)c;
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
