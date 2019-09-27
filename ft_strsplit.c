#include "libft.h"
#include <assert.h>
static int		get_word_len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char **str_arr;
	int strlen;
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = -1;
	strlen = get_word_len(s, c);
	if (!s || !(str_arr = (char **) malloc(sizeof(*str_arr)*(strlen+ 1))))
		return (NULL);

	while (++i < strlen)
	{
		k = 0;
		if (!(str_arr[i] = ft_strnew(get_word_len(&s[j], c) + 1)) || !get_word_len(&s[j], c))
			str_arr[i] = NULL;
		while(s[j] == c)
			j++;
		while(s[j] != c && s[j])
			str_arr[i][k++] = s[j++];
		if(str_arr[i])
			str_arr[i][k] = '\0';
	}
	str_arr[i] = NULL;
	return str_arr;
}
/*int main()
{
	char **tt;
	//tt = ft_strsplit("***salut****!**", '*');
	//assert(strcmp(tt[0], "salut") == 0);
	//assert(strcmp(tt[1], "!") == 0);
	//assert(tt[2] == NULL);
	tt = ft_strsplit("*****", '*');
	assert(tt[0] == NULL);
	tt = ft_strsplit("coucou", '*');
	assert(strcmp(tt[0], "coucou") == 0);
	assert(tt[1] == NULL);

	tt = ft_strsplit("salut****", '*');
	assert(strcmp(tt[0], "salut") == 0);
	assert(tt[1] == NULL);
	tt = ft_strsplit("****salut", '*');
	assert(strcmp(tt[0], "salut") == 0);
	assert(tt[1] == NULL);


}*/
