/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:42:55 by phanford          #+#    #+#             */
/*   Updated: 2019/09/19 11:17:23 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char	*ft_strdup(char *s1)
{
	int length;
	char *final;
	int i;

	i = 0;
	length = ft_strlen(s1);
	if (!(final= malloc(sizeof(char) * (length+ 1))))
		return (NULL);
	while(s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	final[i] = '\0';
	return final;
}
