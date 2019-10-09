/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:37:03 by phanford          #+#    #+#             */
/*   Updated: 2019/10/08 17:20:06 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t length;
	size_t max_len;

	length = ft_strlen(dest);
	max_len = ft_strlen(src);
	if (max_len < n)
		n = max_len;
	ft_memcpy(dest + length, src, n);
	dest[length + n] = '\0';
	return (dest);
}
