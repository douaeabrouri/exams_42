#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}
char *ft_strrev(char *str)
{
	int index;
	int len;
	char tmp;

	index =  0;
	len = ft_strlen(str) - 1;
	while(index <= len)
	{
		tmp = str[index];
		str[index] = str[len];
		str[len] = tmp;
		len--;
		index++;
	}
	return (str);
}


int main(int argc, char **argv)
{
	if(argc != 2)
		return (1);
	int len = ft_strlen(argv[1]) - 1;
	int i = 0;
	char str[4096];
	char *result;
	while(len >= 0 && (argv[1][len] == '\t' || argv[1][len] == ' '))
		len--;
	while (len >= 0 && argv[1][len] != '\t' && argv[1][len] != ' ')
	{
		str[i] = argv[1][len];
		i++;
		len--;
	}
	str[i] = '\0';
	result = ft_strrev(str);
	i = 0;
	while(result[i])
	{
		write(1, &result[i], 1);
		i++;
	}
	write(1, "\n", 1);
}