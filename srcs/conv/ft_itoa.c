#include "ft_mem.h"
#include "ft_str.h"
#include "ft_count.h"

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	len;
	int	sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0) ? 1 : 0;
	len = ft_cntdig(n, 10) + sign;
	if (!(ret = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	n *= (sign) ? -1 : 1;
	while (len)
	{
		*(ret + len - 1) = (n % 10) + '0';
		n /= 10;
		len -= 1;
	}
	if (sign)
		*(ret + len) = '-';
	return (ret);
}
