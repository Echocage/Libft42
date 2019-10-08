/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:35:47 by phanford          #+#    #+#             */
/*   Updated: 2019/10/05 16:03:00 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	will_overflow(int total)
{
	return (total > 2147483647 / 10);
}

int			ft_atoi(const char *str)
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
		if (will_overflow(total))
			return (-1);
		total = total * 10 + (*str - '0');
		++str;
	}
	return (total * neg);
}
