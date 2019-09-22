#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char*)haystack);

	while(haystack[i] && i < len)
	{
		j = 0;
		while(needle[j] == haystack[i + j] && i + j < len)
		{
			if(needle[j + 1] == '\0')
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
