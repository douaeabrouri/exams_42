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
	if(argc != 4 || ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		return (1);
	int index;

	index = 0;
	while(argv[1][index])
	{
		if(argv[1][index] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &argv[1][index], 1);
		index++;
	}
	write(1, "\n", 1);
}