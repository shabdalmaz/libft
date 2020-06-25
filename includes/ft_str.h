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
char			*ft_strdup(const char *s);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s, const char *set);
char			*ft_strtrimchr(const char *s, char c);
size_t			*ft_substrcnt(const char *s, char delim);
char			**ft_split(const char *s, char c);

#endif
