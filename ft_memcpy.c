/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:10:17 by phanford          #+#    #+#             */
/*   Updated: 2019/09/18 09:23:29 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned char *srcptr;
	unsigned char *dstptr;
	unsigned long i;

	i = 0;
	srcptr = (unsigned char*) &src;
	dstptr = (unsigned char*) malloc(sizeof(unsigned char) * n);
	while(i < n)
	{
		dstptr[i]=srcptr[i];
		i++;
	}
	return (dst=dstptr);
}
