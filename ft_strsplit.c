/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:02:10 by phanford          #+#    #+#             */
/*   Updated: 2019/10/11 20:52:57 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

static int			get_word_len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char			**lazy_init(char const *s, char c, int i, int j)
{
	char	**str_arr;
	int		strlen;
	int		k;

	k = 0;
	strlen = get_word_len(s, c);
	if (!s || !(str_arr = (char **)malloc(sizeof(*str_arr) * (strlen + 1))))
		return (NULL);
	while (++i < strlen)
	{
		k = 0;
		if (!(str_arr[i] = ft_strnew(get_word_len(&s[j], c) + 1))
				|| !get_word_len(&s[j], c))
			str_arr[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str_arr[i][k++] = s[j++];
		if (str_arr[i])
			str_arr[i][k] = '\0';
	}
	str_arr[i] = NULL;
	return (str_arr);
}

char				**ft_strsplit(char const *s, char c)
{
	char **str_arr;

	if (!s)
		return (NULL);
	str_arr = lazy_init(s, c, -1, 0);
	return (str_arr);
}
