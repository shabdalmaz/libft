#include <stdlib.h>
#include "ft_io.h"
#include "ft_conv.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*n_str;

	if ((n_str = ft_itoa(n)))
	{
		ft_putstr_fd(n_str, fd);
		free(n_str);
		n_str = NULL;
	}
}
