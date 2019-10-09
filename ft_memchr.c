/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 16:02:07 by phanford          #+#    #+#             */
/*   Updated: 2019/10/08 16:43:19 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void	*ft_memchr(const void *src, int c, size_t length)
{
	unsigned char *s;
	unsigned long i;

	i = 0;
	s = (unsigned char *)src;
	while (length-- > 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return (void *)(src + i);
		i++;
	}
	return (NULL);
}
