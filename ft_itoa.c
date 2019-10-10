/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 17:38:22 by phanford          #+#    #+#             */
/*   Updated: 2019/10/10 15:15:21 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		num_len(int num)
{
	int number_of_digits;

	number_of_digits = 0;
	while (num)
	{
		num /= 10;
		number_of_digits++;
	}
	return (number_of_digits);
}

char			*check_num(int num, int is_neg)
{
	int		mod_result;
	char	*total;
	int		length;

	length = num_len(num);
	if (!(total = ft_strnew(is_neg ? ++length : length)))
		return (NULL);
	while (num)
	{
		mod_result = num % 10;
		num /= 10;
		if (length >= is_neg ? 1 : 0)
			total[--length] = mod_result + '0';
	}
	return (total);
}

char			*ft_itoa(int num)
{
	int		neg;
	char	*total;

	if (num == -2147483648)
		return (total = ft_strdup("-2147483648"));
	if (num == 0)
		return (total = ft_strdup("0"));
	neg = 1;
	if (num < 0)
	{
		neg = -1;
		num *= neg;
	}
	if (!(total = check_num(num, neg == -1)))
		return (NULL);
	if (neg == -1 && total)
		total[0] = '-';
	return (total);
}
