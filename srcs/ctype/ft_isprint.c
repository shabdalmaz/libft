#include "ft_ctype.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
