/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:32:21 by lkohn             #+#    #+#             */
/*   Updated: 2024/11/11 14:43:07 by lkohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <limits.h>
# include <malloc.h>
# include <stdbool.h>
# include <stdint.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(const char *str);
int		ft_isprint(int c);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isdigit(int i);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strncmp(const char *str1, const char *str2, size_t n);

#endif
