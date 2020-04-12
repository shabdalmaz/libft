#include <string.h>

#define	BUF_SIZE sizeof(unsigned int)

void	*ft_memset(void *dst, int val, size_t num)
{
	unsigned char	*d;
	unsigned int	buf;
	size_t		i;

	d = dst;
	buf = (unsigned int)val;
	buf = (buf << 8) | buf;
	buf = (buf << 16) | buf;
	i = num / BUF_SIZE;
	while (i--)
	{
		*(unsigned int *)d = buf;
		d += BUF_SIZE;
	}
	i = num % BUF_SIZE;
	while (i--)
		*d++ = buf;
	return (dst);
}
