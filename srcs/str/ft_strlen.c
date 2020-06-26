#include "ft_str.h"

#define FST_BIT 0x01010101
#define LST_BIT 0x80808080

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (1)
	{
		if (((*(word *)(s + len) - FST_BIT) \
			& ~*(word *)(s + len) & LST_BIT))
			break ;
		len += WORD_SIZE;
	}
	while (*(s + len))
		len += 1;
	return (len);
}
