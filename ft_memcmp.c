#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *cs1;
	const char *cs2;
	cs1 = (const char *) s1;
	cs2 = (const char *) s2;

	if (s1 == s2 || n == 0)
		return (0);

	while (n-- > 0)
	{
		if(cs1[n] != cs2[n])
			break;
	}
	return (cs1[n] - cs2[n]);
}
