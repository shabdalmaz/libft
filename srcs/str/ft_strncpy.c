#include "ft_str.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*dst0;

	dst0 = dst;
	while (n)
	{
		if (*src)
		{
			*dst = *src;
			src += 1;
		}
		else
			*dst = '\0';
		dst += 1;
		n -= 1;
	}
	return (dst0);
}
