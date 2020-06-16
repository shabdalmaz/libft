#include "ft_str.h"
#include "ft_mem.h"

char	*ft_strdup(const char *s)
{
	char	*s_ptr;
	size_t	s_len;

	s_ptr = NULL;
	s_len = ft_strlen(s) + 1;
	if (!(s_ptr = (char *)malloc(byte * s_len)))
		return (NULL);
	ft_memcpy(s_ptr, s, s_len);
	return (s_ptr);
}
