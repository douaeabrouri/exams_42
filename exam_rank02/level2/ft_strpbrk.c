#include <stdio.h>
#include <string.h>

int comper(char c, const char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char *ft_strpbrk(const char *s1, const char *s2)
{
	int index;

	index = 0;
	while(s1[index])
	{
		if(comper(s1[index], s2))
			return ((char *)&s1[index]);
		index++;
	}
	return (NULL);
}

int main(void)
{
	const char s1[] = "hello word";
	const char s2[] = "e";

	char *res = ft_strpbrk(s1, s2);
	char *res2 = strpbrk(s1, s2);
	printf("ft_strpbrk -> %s\n", res);
	printf("strpbrk -> %s\n", res2);
}