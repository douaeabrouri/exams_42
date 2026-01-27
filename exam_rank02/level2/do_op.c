#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

int check_operator(char *str)
{
	if(str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/' || str[0] == '%')
		return (1);
	return (0);
}

int check_string(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if(str[index] >= '0' && str[index] <= '9')
			index++;
		else
			return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{
	if(argc != 4 || check_operator(argv[2]) == 0 || ft_strlen(argv[2]) != 1 || check_string(argv[1]) == 0 || check_string(argv[3]) == 0)
	{
		write(1, "\n", 1);
		return (1);
	}
	if(argv[2][0] == '+')
		printf("%d", atoi(argv[1]) + atoi(argv[3]));
	else if(argv[2][0] == '-')
		printf("%d", atoi(argv[1]) - atoi(argv[3]));
	else if(argv[2][0] == '*')
		printf("%d", atoi(argv[1]) * atoi(argv[3]));
	else if(argv[2][0] == '/')
	{
		if(atoi(argv[3]) == 0)
			return (1);
		else
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
	}
	else if(argv[2][0] == '%')
		printf("%d", atoi(argv[1]) % atoi(argv[3]));
}