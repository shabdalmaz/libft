#include <stdlib.h>
#include "ft_str.h"
#include "ft_count.h"

static void	*ft_sptclr(char **dblarr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(*(dblarr + i));
		*(dblarr + i) = NULL;
		i += 1;
	}
	free(dblarr);
	dblarr = NULL;
	return (dblarr);
}

static char	*ft_spttran(char *s, size_t len, char c)
{
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = s;
	s += len;
	s = ft_strtrimchr(s, c);
	free(tmp);
	tmp = NULL;
	return (s);
}

char		**ft_split(const char *s, char c)
{
	char	**ret;
	char	*trmd;
	size_t	words;
	size_t	w_len;
	size_t	i;

	if (!s)
		return (NULL);
	trmd = ft_strtrimchr(s, c);
	words = ft_substrcnt(trmd, c);
	i = 0;
	w_len = 0;
	if (!(ret = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		w_len = (i == words - 1) ? 0 : ft_strchr(trmd, c) - trmd;
		if (!(ret[i] = !w_len ? trmd : ft_substr(trmd, 0, w_len)))
			return (ft_sptclr(ret, i));
		trmd = !w_len ? NULL : ft_spttran(trmd, w_len, c);
		i += 1;
	}
	if (!(ret[i] = ft_strdup("\0")))
		return (ft_spt_clr(ret, i));
	return (ret);
}
