/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:37:53 by phanford          #+#    #+#             */
/*   Updated: 2019/09/21 21:56:22 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
void	ft_bzero(void *to, size_t count);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putstr(char *str);
void	ft_putstr_ft(char *string, char * filename);
void	ft_putnbr(int i);
int		ft_toupper(int c);
int		ft_atoi(char * str);
int		ft_strlen(char * str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
void	*ft_memcpy(void *dst,const void *src, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
char	*ft_itoa(int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strdup(char *s1);
char	*ft_strcpy(char * dst, const char *src);
void	*ft_memccpy(void *dst,const void *src, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_isprint(int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strtrim(char const *s);
void	*ft_memchar(const void *s, int c, size_t n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	**ft_strsplit(char const *s, char c);
char	*ft_strnew(size_t size);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dst, const void *src, size_t len);
char *ft_strmap(char const *s, char (*f)(char));
