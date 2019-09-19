/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:37:53 by phanford          #+#    #+#             */
/*   Updated: 2019/09/18 16:22:54 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

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
void	*ft_memcpy(void *dst, void *src, size_t n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
