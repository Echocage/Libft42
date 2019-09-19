#include "libft.h"
#include <assert.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while(i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
/*int main()
{
	char	buf1[] = "Ceci est un test.";
	char	buf2[200];
	void	*p1, *p2;
	p1 = memccpy(buf2, buf1, 'i', 10);
	p2 = ft_memccpy(buf2, buf1, 'i', 10);
	assert(p1 == p2);
	assert(ft_memccpy(buf2, buf1, 'k', 5) == 0);
	assert(ft_memccpy(buf2, buf1, 0, 0) == memccpy(buf2, buf1, 0, 0));
	assert(ft_memccpy(buf2, buf1, 0, sizeof(buf1)) == memccpy(buf2, buf1, 0, sizeof(buf1)));
	assert(ft_memccpy(buf2, buf1, 'C', 10) == buf2 + 1);	
}*/
