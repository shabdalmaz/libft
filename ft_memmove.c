#include <string.h>

#define SUBSTR_SIZE sizeof(unsigned int)
typedef unsigned int substr;

void	*ft_memmove(void *dst0, const void *src0, size_t n)
{
	char		*dst;
	const char	*src;

	dst = (char *)dst0;
	src = (const char *)src0;
	if (dst == src || n == 0)
		return (dst0);
	if ((substr *)src < (substr *)dst && (substr *)src + n > (substr *)dst)
	{
		while (n >= SUBSTR_SIZE && (n -= SUBSTR_SIZE))
			*(substr *)(dst + n) = *(substr *)(src + n);
		while (n--)
			*(dst + n) = *(src + n);
		return (dst0);
	}
	return (ft_memcpy(dst0, src0, n));
}
