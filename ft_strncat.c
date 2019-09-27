#include "libft.h"
#include <assert.h>
char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *s;

	s = dest;
	dest += ft_strlen(dest);
	//size_t size = ft_strlen(dest);
	dest[n] = '\0';
	ft_memcpy(dest, src, n);
	return s;
}
/*int main()
{
	char	buf[20];

	strcpy(buf, "1234567890123456789");
	strcpy(buf, "To be ");
	ft_strncat(buf, "or not to be", 6);
	assert(strcmp(buf, "To be or not") == 0);
}*/
