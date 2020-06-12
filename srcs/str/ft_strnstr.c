#include "ft_strnstr.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	match;

	i = 0;
	match = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < n && *(haystack + i) && *(needle + match))
	{
		if (*(haystack + i) == *(needle + match))
			match += 1;
		else
			match = 0;
		i += 1;
	}
	return (!*(needle + match) ? (char *)haystack + i - match : NULL);
}
