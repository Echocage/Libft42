/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 23:10:59 by phanford          #+#    #+#             */
/*   Updated: 2019/09/21 23:11:38 by phanford         ###   ########.fr       */
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
	str = malloc(ft_strlen((char *) s) * sizeof(char));
	while (str[++i])
		str[i] = f(i, *s++);
	return (str);
}
