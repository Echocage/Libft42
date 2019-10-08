/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:34:06 by phanford          #+#    #+#             */
/*   Updated: 2019/10/05 18:19:35 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	while (size--)
		*str++ = '\0';
	return (str);
}
