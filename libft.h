#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int	ft_strlen(char *str);
int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_tolower(int c);
int	ft_toupper(int c);

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *str, const char *key, size_t size);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	ft_bzero(void *list, size_t size);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *list, int c, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *list, int fill_byte, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s,int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s,int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif