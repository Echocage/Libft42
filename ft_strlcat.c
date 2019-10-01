/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:37:47 by phanford          #+#    #+#             */
/*   Updated: 2019/09/28 18:40:59 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t n;

	n = dstsize;
	dstlen = 0;
	while (dst[dstlen])
		dstlen++;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	srclen += (dstsize <= dstlen ? dstsize : dstlen);
	while (*src && dstlen + 1 < dstsize)
		dst[dstlen++] = *src++;
	dst[dstlen] = '\0';
	return (srclen);
}
