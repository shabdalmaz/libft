#include <string.h>

void	*ft_memset(void *dst, int val, size_t num);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
