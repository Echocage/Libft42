/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:25:35 by phanford          #+#    #+#             */
/*   Updated: 2019/10/11 23:26:43 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t len;
	size_t i;
	size_t c;
	size_t t;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	c = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (len == i)
		return (ft_strsub(s, len, 1));
	t = len - 1;
	while ((s[t - c] == ' ' || s[t - c] == '\n' || s[t - c] == '\t'))
		c++;
	return (ft_strsub(s, i, len - i - c));
}
