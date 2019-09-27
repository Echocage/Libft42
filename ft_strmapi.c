/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 23:10:59 by phanford          #+#    #+#             */
/*   Updated: 2019/09/25 21:39:24 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	if (!s || !f)
		return (NULL);
	i = -1;
	str = malloc(ft_strlen((char *)s)+1 * sizeof(char));
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
