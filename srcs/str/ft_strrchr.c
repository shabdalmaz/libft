#include "ft_str.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	last;

	last = ft_strlen(s);
	while (last && *(s + last) != (byte)c)
		last -= 1;
	return (*(s + last) == (byte)c ? (char *)s + last : NULL);
}
