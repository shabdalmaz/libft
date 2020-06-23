#include "ft_mem.h"
#include "ft_str.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;
	size_t	len1;
	size_t	len2;

	ret = NULL;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if(!(ret = (char *)ft_calloc(len1 + len2 + 1, sizeof(char))))
		return (NULL);
	ft_memmove(ret, s1, len1);
	ft_memmove(ret + len1, s2, len2);
	return (ret);	
}
