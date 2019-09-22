#include "libft.h"
char * ft_strcat(char *dest, const char *src)
{
  ft_strcpy(dest + strlen (dest), src);
  return dest;
}
