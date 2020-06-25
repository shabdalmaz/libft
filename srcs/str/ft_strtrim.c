#include "ft_str.h"
#include "ft_mem.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*ret;
	size_t	set_len;
	size_t	s_len;

	ret = NULL;
	set_len = ft_strlen(set);
	s_len = 0;
	while (ft_memchr(set, *s, set_len))
		s += 1;
	s_len = ft_strlen(s) - 1;
	while (ft_memchr(set, *(s + len), set_len))
		s_len -= 1;
	ret = ft_substr(s, 0, s_len);
	return (ret);
}
