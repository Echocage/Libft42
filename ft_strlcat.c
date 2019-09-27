#include "libft.h"
#include <assert.h>
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t n;

	n = dstsize;

	dstlen = 0;
	while(dst[dstlen])
		dstlen++;

	srclen = 0;
	while (src[srclen])
		srclen++;

	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);

	srclen += (dstsize <= dstlen ? dstsize : dstlen);
	
	while(*src && dstlen + 1 < dstsize)
		dst[dstlen++] = *src++;
	dst[dstlen] = '\0';
	return (srclen);
}
void test1()
{
	char	buf[10];

	bzero(buf, 10);
	strcpy(buf, "abc");
	ft_strlcat(buf, "abcdefghijklmnop", 10);
	assert(strcmp(buf, "abcabcdef") == 0);
	assert(ft_strlcat(buf, "abcd", 2) == 6);
}
