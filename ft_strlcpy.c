#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len = ft_strlen(src);
	size_t i = -1;
	while (src[i] && ++i < dstsize - 1)
		dst[i] = src[i];
	if (dstsize)
		dst[i++] = '\0';
	return len;
}
