#include "ft_mem.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (!(ptr = (void *)malloc(nmemb * size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
