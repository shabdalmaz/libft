#include <stdlib.h>
#include "ft_io.h"
#include "ft_conv.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	(n < 0) ? ft_putchar_fd('-', fd) : 0;
	n = (n < 0) ? -n : n;
	if (n < 10)
		ft_putchar_fd('0' + n, fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
