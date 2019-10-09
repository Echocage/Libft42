/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:25:35 by phanford          #+#    #+#             */
/*   Updated: 2019/10/08 20:42:34 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		c;
	char	*result;

	if (!s)
		return (NULL);
	i = 0;
	c = 0;
	while (s[i] && is_whitespace(s[i]))
		i++;
	if (!s[i])
		return ("");
	j = ft_strlen((char *)s) - 1;
	while (is_whitespace(s[j]))
		j--;
	if (!(result = ft_strnew((j - i) + 1)))
			return (NULL);
	while (i <= j)
		result[c++] = s[i++];
	result[c] = '\0';
	return (result);
}
