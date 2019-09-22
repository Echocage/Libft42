#include "libft.h"
char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *s;

	s = dest;
	dest += ft_strlen(dest);
	size_t size = ft_strlen(dest);
	dest[size] = '\0';
	ft_memcpy(dest, src, n);

	return s;
}
