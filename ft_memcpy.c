/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:10:17 by phanford          #+#    #+#             */
/*   Updated: 2019/10/07 23:01:08 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *srcptr;
	unsigned char *dstptr;

	if (!src || !dst)
		return (NULL);

	srcptr = (unsigned char *)src;
	dstptr = dst;
	while (n--)
	{
		*dstptr++ = *srcptr++;
	}
	return (dst = dstptr);
}
