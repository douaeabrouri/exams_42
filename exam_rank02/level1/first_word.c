#include <unistd.h>

int main(int argc, char **argv)
{
	int index;

	index = 0;
	if(argc != 2)
		return (0);
	while(argv[1][index] == 32 || argv[1][index] == 9)
		index++;
	while((argv[1][index] != 32 && argv[1][index] != 9) && argv[1][index])
	{
		write(1, &argv[1][index], 1);
		index++;
	}
	write(1, "\n", 1);
}