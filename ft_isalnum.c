int ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') ||(c <= 'Z' && c >= 'A')  || (c >= '0' && c <= '9'));
}
