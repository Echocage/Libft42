/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isallnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 00:06:44 by phanford          #+#    #+#             */
/*   Updated: 2019/10/12 00:29:52 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isallnumbers(char *s)
{
	while (*s)
	{
		if (!(ft_isdigit(*s)) && *s != '-' && *s++ != '+')
			return (0);
	}
	return (1);
}
