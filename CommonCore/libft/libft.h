#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *str, int c, size_t n);
size_t ft_strlen(const char *s);
void *ft_memmove(void *dest, const void *src, size_t n);
char *stpcpy(char *dst, const char *src);
size_t strlcat(char *dst, const char *src, size_t siz);
int ft_toupper(int c);

#endif