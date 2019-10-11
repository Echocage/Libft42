/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:35:47 by phanford          #+#    #+#             */
/*   Updated: 2019/10/11 16:09:26 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

int			ft_atoi(const char *str)
{
	long total;
	long neg;

	total = 0;
	neg = 0;
	while (ft_iswhitespace(*str))
		++str;
	if (*str == '-')
		neg = 1;
	if (*str == '+' || *str == '-')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		total = total * 10 + (*str++ - '0');
	}
	return (neg ? (int)-total : (int)total);
}
