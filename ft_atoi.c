/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:35:47 by phanford          #+#    #+#             */
/*   Updated: 2019/09/21 23:46:53 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int total;
	int neg;

	total = 0;
	neg = 1;
	while (*str && (*str >= 0 && *str <= 32))
		++str;
	if (*str == '-')
	{
		neg = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		total = total * 10 + (*str - '0');
		++str;
	}
	return (total * neg);
}
