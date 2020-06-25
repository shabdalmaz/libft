#include <string.h>

size_t	ft_substrcnt(const char *s, char delim)
{
	size_t	substrs;
	int	is_substr;

	substrs = 0;
	is_substr = 0;
	while (*s)
	{
		if (*s != delim && is_substr == 0)
		{
			substrs += 1;
			is_substr = 1;
		}
		else if (*s == delim)
			is_substr = 0;
		s += 1;
	}
	return (substrs);
}
