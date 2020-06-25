#include "ft_str.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*ret;
	size_t	set_len;
	size_t	s_len;

	if (!(s && set))
		return (NULL);
	ret = NULL;
	set_len = ft_strlen(set);
	s_len = 0;
	while (*s && ft_strchr(set, *s))
		s += 1;
	s_len = ft_strlen(s);
	while (s_len && ft_strchr(set, *(s + len - 1)))
		s_len -= 1;
	ret = ft_substr(s, 0, s_len);
	return (ret);
}
