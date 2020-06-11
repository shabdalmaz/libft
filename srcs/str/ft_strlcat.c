#include "ft_str.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_end;

	dst_end = ft_strlen(dst);
	return (dst_end + ft_strlcpy(dst + dst_end, src, dst_size - dst_end));
}
