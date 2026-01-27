#include <unistd.h>

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while(str[index])
		index++;
	return (index);
}

int main(int argc, char **argv)
{
	if(argc != 2)
		return (1);
	int	index;
	index = ft_strlen(argv[1]);
	while(index >= 0)
	{
		write(1, &argv[1][index], 1);
		index--;
	}
	write(1, "\n", 1);
}