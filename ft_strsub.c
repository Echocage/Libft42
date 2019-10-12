/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:29:02 by phanford          #+#    #+#             */
/*   Updated: 2019/10/11 23:06:01 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *src, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (src == NULL)
		return (NULL);
	if (start > ft_strlen(src))
		return (NULL);
	i = -1;
	if (!(result = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (++i < len)
		result[i] = src[i + start];
	result[i] = '\0';
	return (result);
}
