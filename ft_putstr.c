/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:56:23 by phanford          #+#    #+#             */
/*   Updated: 2019/09/21 23:49:51 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar(char c);

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
