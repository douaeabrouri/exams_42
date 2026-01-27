#include <unistd.h>
#include <stdio.h>

int check_double(char c, char* str, int len)
{
	int index;

	index = 0;
	while(index < len)
	{
		if(c == str[index])
			return (0);
		index++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if(argc != 3)
		return (1);
	int index;
	int i;
	int counter;

	index = 0;
	while(argv[1][index])
	{
		i = 0;
		while(argv[2][i])
		{
			if (check_double(argv[1][index], argv[1], index) && argv[1][index] == argv[2][i]){
				write(1, &argv[1][index], 1);
				break;
			}
			i++;
		}
		index++;
	}
	write(1, "\n", 1);
}