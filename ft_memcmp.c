/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 15:59:20 by phanford          #+#    #+#             */
/*   Updated: 2019/10/10 15:12:13 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	int				i;

	i = -1;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (++i < (int)n)
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
	return (0);
}
