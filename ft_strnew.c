#include "libft.h"
char * ft_strnew(size_t size)
{
	char *str;

	if (!(str = malloc(sizeof(char) * ++size)))
		return (NULL);

	while(size-- > 0)
		*str++ = '\0';

	return (str);
}
