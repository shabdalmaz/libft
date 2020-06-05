#ifndef FT_MEM_H
# define FT_MEM_H
# include <string.h>
# define WORD_SIZE sizeof(unsigned int)

typedef unsigned int	word;
typedef unsigned char	byte;
void			*ft_memset(void *dst0, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst0, const void *src0, size_t n);
void			*ft_memmove(void *dst0, const void *src0, size_t n);
void			*ft_memchr(const void *s, int c, size_t);
void			*ft_memccpy(void *dst0, const void *src0, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
