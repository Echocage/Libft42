#include "libft.h"
#include <string.h>
char *ft_strdup(const char *s1)
{
	int length;
	char *final;
	int i;
	i = 0;
	length = ft_strlen((char *) s1);
	if (!length)
		return (char *) s1;
	final = malloc(sizeof(char *) * length);
	while(i < length)
	{
		final[i] = s1[i];
		i++;
	}
	final[++i] = '\0';
	return final;
}
/*int main()
{
	return (0);
}*/
