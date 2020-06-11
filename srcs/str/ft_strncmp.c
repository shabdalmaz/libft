#include "ft_str.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			break ;
		s1 += 1;
		s2 += 1;
		n -= 1;
	}
	if (*s1 - *s2 == 0)
		return (0);
	return (*s1 - *s2 > 0 ? 1 : -1);
}
