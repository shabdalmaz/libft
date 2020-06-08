#include "ft_mem.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const byte	*str1;
	const byte	*str2;
	size_t		i;

	if (n <= 0)
		return (0);
	str1 = (const byte *)s1;
	str2 = (const byte *)s2;
	i = n / WORD_SIZE;
	while (i--)
	{
		if (*(word *)str1 != *(word *)str2)
			break ;
		str1 += WORD_SIZE;
		str2 += WORD_SIZE;
	}
	i = n % WORD_SIZE;
	while (i--)
	{
		if (*str1 != *str2)
			break ;
		str1 += 1;
		str2 += 1;
	}
	return (*str1 - *str2);
}
