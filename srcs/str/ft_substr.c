#include "ft_mem.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = NULL;
	if (!(ret = (char *)calloc(len + 1, sizeof(char))))
		return (NULL);
	ft_memmove(ret, s + start, len);
	return (ret);
}
