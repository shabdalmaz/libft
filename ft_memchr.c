#include "ft_mem.h"

#define FST_BIT 0x01010101
#define LST_BIT 0x80808080

/*
 * byte - unsigned char
 * word - unsigned int
 * WORD_SIZE - sizeof(unsigned int)
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const byte	*c_ptr;
	byte		chr;
	word		mask;

	c_ptr = (const byte *)s;
	chr = (byte)c;
	if (n > WORD_SIZE)
	{
		mask = (word)chr;
		mask = mask | (mask << 8);
		mask = mask | (mask << 16);
		while (n >= WORD_SIZE)
		{
			if ((((*(word *)c_ptr ^ mask) - FST_BIT) \
			& ~(*(word *)c_ptr ^ mask) & LST_BIT))
				break ;
			n -= WORD_SIZE;
			c_ptr += WORD_SIZE;
		}
	}
	while (n-- && *c_ptr != chr)
		c_ptr += 1;
	return (n ? (void *)c_ptr : NULL);
}
