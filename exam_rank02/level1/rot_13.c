#include <unistd.h>

int main(int argc, char **argv)
{
	int index;
	char c;

	if(argc != 2)
		return (1);
	index = 0;
	while(argv[1][index])
	{
		if((argv[1][index] >= 'A' && argv[1][index] <= 'm') || (argv[1][index] >= 'a' && argv[1][index] <= 'm'))
		{
			c  = argv[1][index] + 13;
			write(1, &c, 1);;
		}
		else if((argv[1][index] >= 'M' && argv[1][index] <= 'Z') || (argv[1][index] >= 'm' && argv[1][index] <= 'z'))
		{
			c  = argv[1][index] - 13;
			write(1, &c, 1);
		}
		else
			write(1, &argv[1][index], 1);
		index++;
	}
	write(1, "\n", 1);
}