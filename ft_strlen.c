#include "ft_mem.h"

#define FST_BIT 0x01010101
#define LST_BIT 0x80808080

size_t	ft_strlen(const char *s)
{
	size_t	len;
	word	n_ch;

	len = 0;
	n_ch = 0;
	while (1)
	{
		if ((((*(word *)s ^ n_ch) - FST_BIT) \
			& ~(*(word *)s ^ n_ch) & LST_BIT))
			break ;
		len += WORD_SIZE;
		s += WORD_SIZE;
	}
	while (*s)
	{
		s += 1;
		len += 1;
	}
	return (len);
}
