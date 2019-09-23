#include "libft.h"
#include <assert.h>
void	*ft_memchr(const void *src, int c, size_t length)
{
	unsigned char *s;
	unsigned long i;

	if (src == NULL)
		return (NULL);
	i = 0;
	s = (unsigned char *)src;
	while(length-- > 0)
	{
		if ((unsigned char) s[i] == (unsigned char)c)
			return (void *)(src + i);
		i++;
	}
	return (NULL);
}
