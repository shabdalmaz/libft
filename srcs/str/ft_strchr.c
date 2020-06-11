#include "ft_str.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (byte)c && *s)
		s += 1;
	return (*s == (byte)c ? (char *)s : NULL);
}
