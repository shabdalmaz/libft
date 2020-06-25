#include "ft_str.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*ret;
	size_t	len;

	if (!(s && set))
		return (NULL);
	ret = NULL;
	len = 0;
	while (*s && ft_strchr(set, *s))
		s += 1;
	len = ft_strlen(s);
	while (len && ft_strchr(set, *(s + len - 1)))
		len -= 1;
	ret = ft_substr(s, 0, len);
	return (ret);
}
