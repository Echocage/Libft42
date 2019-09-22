#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	char *last_match;

	last_match = NULL;
	while(*s)
	{
		if(*s == c)
			last_match = (char *) s;
		s++;
	}
	return (last_match);
}
