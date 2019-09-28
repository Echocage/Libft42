/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 17:38:22 by phanford          #+#    #+#             */
/*   Updated: 2019/09/27 18:15:21 by phanford         ###   ########.fr       */
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

char			*check_num(int num, int length, int neg)
{
	int		mod_result;
	char	*total;

	length = num_len(num);
	total = (char *)malloc(sizeof(char) * length + 1);
	if (num == -2147483648)
		return ("-2147483648");
	if (num < -2147483648 || num > 2147483647)
		return (NULL);
	else if (num == 0)
		return ("0");
	while (num)
	{
		mod_result = num % 10;
		num /= 10;
		if (length >= 0)
			total[--length] = mod_result + '0';
	}
	return (total);
}

char			*ft_itoa(int num)
{
	int		neg;
	char	*total;

	neg = 1;
	if (num < 0)
	{
		neg = -1;
		num *= neg;
	}
	total = check_num(num, 0, neg);
	if (neg == -1)
		total[0] = '-';
	return (total);
}
