#include "ft_io.h"
#include "ft_str.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_len);
}