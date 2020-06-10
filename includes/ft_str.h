#ifndef FT_STR_H
# define FT_STR_H
# include <string.h>
# define WORD_SIZE sizeof(unsigned int)

typedef unsigned int	word;
typedef unsigned char	byte;
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst0, const char *src0, size_t n);

#endif
