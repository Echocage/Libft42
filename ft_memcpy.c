/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:10:17 by phanford          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/10/07 23:01:08 by phanford         ###   ########.fr       */
=======
/*   Updated: 2019/10/07 17:24:14 by phanford         ###   ########.fr       */
>>>>>>> f261429005a3d7a523aebace7c554659aac86a2a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *srcptr;
	unsigned char *dstptr;
<<<<<<< HEAD

	if (!src || !dst)
		return (NULL);

=======
	
	if (!dst || !src || !n)
		return (dst);
>>>>>>> f261429005a3d7a523aebace7c554659aac86a2a
	srcptr = (unsigned char *)src;
	dstptr = dst;
	while (n--)
	{
		*dstptr++ = *srcptr++;
	}
	return (dst = dstptr);
}
