#include "libft.h"
char	*ft_strsub(const char *src,unsigned int start, size_t len)
{
	char *result;
	size_t i;

	if (src == NULL)
		return (NULL);

	if (start > ft_strlen(src))
		return (NULL);

	i = -1;
	if (!(result = malloc(sizeof(char) * (len+2))))
		return (NULL);

	while (++i < len)
		result[i] = src[i + start];

	result[i] = '\0';
	return result;
}
