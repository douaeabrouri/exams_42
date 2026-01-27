#include <unistd.h>
#include <stdio.h>

int ft_len(char *str)
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
	len = ft_len(str) - 1;
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
int main(void)
{
	char s2[] = "reverse me";
	char *rev = ft_strrev(s2);
	printf("%s\n", rev);
}