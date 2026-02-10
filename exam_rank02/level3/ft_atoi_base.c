#include <stdio.h>

int	is_valid(char c, int baslen)
{
	char *lsbase = "0123456789abcdef";
	char *upbase = "0123456789ABCDEF";
	
	int index = 0;
	while(index < baslen)
	{
		if(c == lsbase[index] || c == upbase[index])
			return 1;
		index++;
	}
	return 0;
}
int is_space(char c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return 1;
	return 0;
}

int	ft_atoi_base(const char *str, int str_base)
{

	int index;
	index = 0;

	int number;
	int sign;

	sign = 1;
	number = 0;
	while (is_space(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	
	while (str[index] && is_valid(str[index], str_base))
	{
		number *= str_base;
		if (str[index] >= '0' && str[index]  <= '9')
			number = number + (str[index] - '0');
		else if(str[index] >= 'a' && str[index] <= 'z')
			number += str[index] - 'a' + 10;
		else if(str[index] >= 'A' && str[index] <= 'Z')
			number += str[index] - 'A' + 10;
		index++;
	}
	return (number*sign);
}

int main(void)
{
	printf("%d\n", ft_atoi_base("abcd", 16));	
}