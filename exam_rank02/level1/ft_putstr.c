#include <unistd.h>

void	ft_putstr(char *str)
{
	int  index;

	index = 0;
	while(str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

// int main(void)
// {
// 	char *str = "hello world";
// 	ft_putstr(str);
// }