/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 12:37:11 by phanford          #+#    #+#             */
/*   Updated: 2019/09/28 18:32:12 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_match;

	last_match = NULL;
	while (*s)
	{
		if (*s == c)
			last_match = (char *)s;
		s++;
	}
	if (*s == c)
		return (char *)s;
	return (last_match);
}
