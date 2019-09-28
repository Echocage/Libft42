/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:54:03 by phanford          #+#    #+#             */
/*   Updated: 2019/09/28 14:17:33 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (char *)haystack;
	j = 0;
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[j + i] == needle[j])
			if (needle[++j] == '\0')
				return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
