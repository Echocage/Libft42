/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 23:08:59 by phanford          #+#    #+#             */
/*   Updated: 2019/09/21 23:09:41 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = malloc(ft_strlen((char *) s) * sizeof(char));
	while(str[i])
		str[i++] = f(*s++);
	return (str);
}
