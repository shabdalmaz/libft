#include "ft_count.h"

size_t	ft_cntdig(int n, int base)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		n /= base;
		len += 1;
	}
	return (len);
}
