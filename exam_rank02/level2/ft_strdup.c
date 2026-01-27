#include <unistd.h>

size_t len(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int index;
	char *tmp;

	index = 0;
	tmp = malloc(sizeof(char) * len(src));
	while(src[index])
	{
		tmp[index] = src[index];
		index++;
	}
	return (tmp);
}