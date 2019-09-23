#include "libft.h"
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t dstlen = ft_strlen(dst);
	if (!dstsize)
		return (0);
	if (dstlen > dstsize)
		return dstsize;
	return dstlen + ft_strlcpy(dst+dstlen, src, dstsize);
}
