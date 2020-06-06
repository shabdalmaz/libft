#include "ft_str.h"

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
		if ((((*(word *)(s + len) ^ n_ch) - FST_BIT) \
			& ~(*(word *)(s + len) ^ n_ch) & LST_BIT))
			break ;
		len += WORD_SIZE;
	}
	while (*(s + len))
		len += 1;
	return (len);
}
