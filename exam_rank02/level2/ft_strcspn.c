#include <unistd.h>

int found(char c, char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if(c == str[index])
			return (0);
		index++;
	}
	return (1);
}

size_t ft_strcspn(const char *s, const char *reject)
{
	int index = 0;

	while(s[index])
	{
		if(!found(s[index], reject))
			index++;
		return (index);
	}
	return (index);
}