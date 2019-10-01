/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:38:53 by phanford          #+#    #+#             */
/*   Updated: 2019/09/28 18:39:46 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;

	len = ft_strlen(src);
	i = -1;
	while (src[i] && ++i < dstsize - 1)
		dst[i] = src[i];
	if (dstsize)
		dst[i++] = '\0';
	return (len);
}
