/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:25:14 by phanford          #+#    #+#             */
/*   Updated: 2019/09/17 12:32:03 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void * ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;
	if (!len)
	{
		return (b);
	}
	tmp = b;
	while (len--)
	{
		*tmp = (unsigned char) c;
		if (len)
			tmp++;
	}
	return b;
}
