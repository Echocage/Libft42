#include "libft.h"
void * ft_memchr(const void *src, int c, size_t length)
{
	unsigned char *s;
	int i;

	i = 0;
	s = (unsigned char *)src;
	while(length-- > 0)
	{
		if (s[i] == c)
			return (void *)(src + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "aaaaaabccccccc";
	void *result = ft_memchr(str, 'b',ft_strlen(str));

}*/
