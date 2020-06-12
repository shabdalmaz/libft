#ifndef FT_STR_H
# define FT_STR_H
# include <string.h>
# define WORD_SIZE sizeof(unsigned int)

typedef unsigned int	word;
typedef unsigned char	byte;
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t			ft_strlcat(char *dst, const char *src, size_t dst_size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);

#endif
