#include <string.h>

#define WORD_SIZE sizeof(unsigned int)
#define FST_BIT 0x01010101
#define LST_BIT 0x80808080
typedef unsigned int word;

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c_ptr;
	unsigned char		chr;
	word			mask;

	c_ptr = (unsigned char *)s;
	chr = (unsigned char)c;
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
		c_ptr++;
	return (n ? (void *)c_ptr : NULL);
}
