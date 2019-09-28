/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 17:34:51 by phanford          #+#    #+#             */
/*   Updated: 2019/09/28 14:36:04 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		index;

	index = 0;
	if (!(result = malloc(sizeof(char) * (2 + ft_strlen((char *)s1) +
						ft_strlen((char *)s2)))))
		return (NULL);
	while (*s1)
		result[index++] = *s1++;
	while (*s2)
		result[index++] = *s2++;
	result[index++] = ('\0');
	return (result);
}
