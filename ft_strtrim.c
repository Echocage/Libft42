#include "libft.h"
static int is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
char * ft_strtrim(char const *s)
{
	int i;
	int j;

	char * result;
	i = 0;
	result = malloc(sizeof(char) * (ft_strlen((char *) s)+1));
	while(s[i] && is_whitespace(s[i]))
		i++;
	j = ft_strlen((char *) s);
	while(is_whitespace(s[j]))
		j--;
	while(i < j)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
