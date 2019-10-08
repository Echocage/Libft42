/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:30:19 by phanford          #+#    #+#             */
/*   Updated: 2019/10/05 17:24:54 by phanford         ###   ########.fr       */
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

/*int main()
{
	char *content = "Testing";
	int i = -1;
	t_list *first_l = ft_lstnew("Testing", ft_strlen(content));
	first_l->next = ft_lstnew(content, ft_strlen(content));
	t_list *second_l = first_l->next;
	while(i++ < 10)
	{
		second_l->next = ft_lstnew("Testing", ft_strlen(content));
		second_l = second_l ->next;
	}
}*/
