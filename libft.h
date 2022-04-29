/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:35:54 by kmalhotr          #+#    #+#             */
/*   Updated: 2021/10/17 16:15:59 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t len);
char		*ft_strchr(const char *str, int character);
char		*ft_substr(char const *str, unsigned int start, size_t len);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strdup(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t len);

void		*ft_memset(void *ptr, int value, size_t num);
void		*ft_memcpy(void *dst, const void *src, size_t num);
void		*ft_memccpy(void *dst, const void *src, int c, size_t num);
void		*ft_memmove(void *dst, const void *src, size_t num);
void		*ft_memchr(const void *ptr, int c, size_t num);
void		ft_bzero(void *ptr, size_t num);
int			ft_memcmp(const void *s1, const void *s2, size_t num);

void		*ft_calloc(size_t num, size_t size);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_itoa(int n);
int			ft_atoi(const char *str);
int			ft_isalnum(int character);
int			ft_isalpha(int character);
int			ft_isascii(int character);
int			ft_isdigit(int character);
int			ft_isprint(int character);
int			ft_tolower(int character);
int			ft_toupper(int character);

#endif
