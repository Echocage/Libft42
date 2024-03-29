/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:37:53 by phanford          #+#    #+#             */
/*   Updated: 2019/10/12 19:12:35 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				ft_putnbr(int n);
void				ft_putendl_fd(char const *s, int fd);
void				*ft_memalloc(size_t size);
char				*ft_strtrim(char const *s);
char				*ft_strcat(char *dest, const char *source);
char				*ft_strchr(const char *s, int c);
void				ft_striter(char *s, void (*f)(char *));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				*ft_memchr(const void *s, int c, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strstr(const char *haystack, const char *needle);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strncat(char *dst, const char *src, size_t n);
void				*ft_memset(void *dest, int val, size_t len);
char				**ft_strsplit(char const *s, char c);
char				*ft_strnew(size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strrchr(const char *s, int c);
void				ft_memdel(void **ap);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_strdel(char **as);
void				ft_putchar_fd(int c, int fd);
void				ft_putchar(int c);
void				ft_putendl(char const *s);
char				*ft_itoa(int n);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_putstr(char const *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_bzero(void *to, size_t count);
int					ft_atoi(const char *str);
char				*ft_strcpy(char *dest, const char *source);
void				*ft_memmove(void *dest, const void *source, size_t len);
char				*ft_strdup(const char *s1);
char				*ft_strncpy(char *dest, const char *source, size_t len);
char				*ft_strnstr(const char *htk, const char *ndl, size_t len);
int					ft_strequ(char const *s1, char const *s2);
void				ft_strclr(char *s);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_tolower(int c);
int					ft_isalnum(int c);
int					ft_containsnum(char *s);
int					ft_countnum(char *s);
int					ft_isallnumbers(char *s);
int					ft_iswhitespace(char c);
int					ft_isalllower(char *s);
int					ft_isallupper(char *s);
typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new_l);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
#endif
