#include "libft.h"
#include <stdlib.h>

static int num_len(int num)
{
	int number_of_digits = 0;
	while (num)
	{
		num /= 10;
		number_of_digits++;
	}
	return number_of_digits;
}

char *ft_itoa(int num)
{
	int neg;
	char * total;
	int length;

	length = num_len(num);

	total = (char *) malloc(sizeof(char)*length+1);
	neg = 1;
	if (num == -2147483648)
		return ("-2147483648");
	if (num < -2147483648 || num > 2147483647)
		return (NULL);

	if (num < 0)
	{
		neg = -1;
		num *= neg;
		length+=1;
	}else if (num == 0)
		return ("0");
	while(num)
	{
		int mod_result = num % 10;
		num /= 10;
		if (length >= 0)
			total[--length] = mod_result+'0';
	}
	if (neg==-1)
	{
		total[0] = '-';
	}
	return total;
}
/*int main()
{
	int cases[] = {2, 15, 255, 4233};
	char *expected[] = {"2","15"};
	int case_len = 2;
	while (--case_len >= 0)
		assert(ft_strcmp(ft_itoa(cases[case_len]), expected[case_len]) == 0);
	
	
	

}*/
