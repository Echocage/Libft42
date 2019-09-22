#include "libft.h"
static int get_num_strs(char *current_str, char c)
{
	int num_strs;

	num_strs = 0;
	while ((current_str= ft_strchr(current_str, c)))
	{
		num_strs++;
		current_str++;
	}
	return num_strs;
}


char ** ft_strsplit(char const *s, char c)
{
	char *current_str;
	char *past_str;
	char **str_arr;	
	int strlen;
	int index;
	index = 0;
	current_str= (char *)s;
	strlen = get_num_strs(current_str, c);
	if (!s || !(str_arr = malloc(sizeof(char *)*( strlen+ 1))))
		return (NULL);
	if(!strlen)
	{
		str_arr[0] = ft_strdup((char *)s);
		return str_arr;
	}
	current_str = (char *)s;

	while (ft_strlen(current_str))
	{
		past_str = current_str;
		current_str = ft_strchr(current_str, c);
		current_str++;
		strlen = current_str - past_str;
		if (strlen == 1)
			continue;
		past_str = ft_strdup(past_str);
		past_str[strlen - 1] = '\0';
		str_arr[index++] = past_str;
	}
	return str_arr;
}
/*int main()
{
	char teststr[] = "***salut****!**";
	char ** result = ft_strsplit(teststr, '*');
}*/
