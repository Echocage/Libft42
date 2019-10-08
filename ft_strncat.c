/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:37:03 by phanford          #+#    #+#             */
/*   Updated: 2019/10/08 14:24:08 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *s;
	if (!dest || !src || n > ft_strlen(src))
		return (NULL);
	s = dest;
	dest += ft_strlen(dest);
	dest[n] = '\0';
	ft_memcpy(dest, src, n);
	return (s);
}
