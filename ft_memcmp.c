#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *cs1;
	const unsigned char *cs2;
	cs1 = (const unsigned char *) s1;
	cs2 = (const unsigned char *) s2;
	if (s1 == s2 || n == 0)
		return (0);

	while (n-- > 0)
	{
		if(cs1[n] != cs2[n])
			break;
	}
	return (cs1[n] -  cs2[n]);
}
