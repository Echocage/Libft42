#include "libft.h"
#include <assert.h>
char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (char *) haystack;
	j = 0;
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while(needle[j] && haystack[j+i] == needle[j])
		{
			if(needle[j+1] == '\0')
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
	
}
/*int main()
{
	char *haystacks[] = {"Ceci n'est pas une pipe."};
	char *needles[] = {"une", "C", ".","","aaaaa","ozarboze"};
	int i = 0;
	while (i < 5)
	{
		char *result = ft_strstr(haystacks[0], needles[i]);
		char *expected_result = strstr(haystacks[0], needles[i]);
		assert(result ==  expected_result );
		ft_putstr("Finished");
		i++;
	}
}*/
