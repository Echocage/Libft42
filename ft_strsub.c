#include "libft.h"
char *ft_strsub(const char *src,unsigned int start, size_t len)
{
	char *result;
	int i;

	i = 0;
	result = malloc(sizeof(char) * (len+2));
	while (start < len && src[start])
		result[i++] = src[start++];
	result[i] = '\0';
	return result;
}
