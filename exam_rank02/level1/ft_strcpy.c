#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int index;

	index = 0;
	while(s2[index])
	{
		s1[index] = s2[index];
		index++;
 	}
	s1[index] = '\0';
	return (s1);
}
// int main(void)
// {
// 	char *str = "hello";
// 	char *dest;
// 	printf("%s\n", ft_strcpy(dest, str));
	
// }