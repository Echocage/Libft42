#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		while(++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
		while (len-- > 0)
			*(d++) = *(s++);
	}
	return dst;
}
