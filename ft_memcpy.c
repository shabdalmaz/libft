#include <string.h>

#define BUF_SIZE sizeof(unsigned int)
typedef	unsigned int substr;

void	*ft_memcpy(void *dst0, const void *src0, size_t n)
{
	char	*dst;
	const char	*src;
	size_t		i;

	if (n <= 0 || dst0 == src0)
		return (dst0);
	i = n / BUF_SIZE;
	dst = (char *)dst0;
	src = (const char *)src0;
	while (i--)
	{
		*(substr *)dst = *(substr *)src;
		dst += BUF_SIZE;
		src += BUF_SIZE;
	}
	i = n % BUF_SIZE;
	while (i--)
	{
		*dst = *src;
		dst += 1;
		src += 1;
	}
	return (dst0);
}
