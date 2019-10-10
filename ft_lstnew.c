/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:16:41 by phanford          #+#    #+#             */
/*   Updated: 2019/10/10 15:09:51 by phanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	struct s_list *s;

	if (!(s = (struct s_list *)malloc(sizeof(struct s_list))))
		return (NULL);
	if (!content || !content_size)
	{
		s->content_size = 0;
		s->content = NULL;
	}
	else
	{
		s->content_size = content_size;
		if (!(s->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(s->content, content, content_size);
		s->content_size = content_size;
	}
	s->next = (NULL);
	return (s);
}
