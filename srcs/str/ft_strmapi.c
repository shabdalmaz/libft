#include "ft_mem.h"
#include "ft_str.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;
	size_t	i;

	if (!(s && (*f)))
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	if (!(ret = (char *)calloc(len + 1, sizeof(char))))
		return (NULL);
	while (i < len)
	{
		*(ret + i) = (*f)(i, *(s + i));
		i += 1;
	}
	return (ret);
}
