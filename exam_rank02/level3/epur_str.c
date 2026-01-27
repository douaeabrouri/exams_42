#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 2)
		return 1;
	int index;
	int counter;

	index = 0;
	counter = 0;
	while(argv[1][index] == ' ' || argv[1][index] == '\t')
		index++;
	while(argv[1][index])
	{
		if(argv[1][index] == ' ' || argv[1][index] == '\t')
			counter = 1;
		else{
			if (counter)
				write(1, " ", 1);
			write(1, &argv[1][index], 1);
			counter = 0;
		}
		index++;
	}
	write(1, "\n", 1);
}
