#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 2)
		return 1;
	int index;

	index = 0;
	while(argv[1][index])
	{
		if (argv[1][index] >= 'A'  && argv[1][index] <= 'Z')
		{
			argv[1][index] += 32;
			write(1,  "_", 1);
		}
		write(1, &argv[1][index], 1);
		index++;
	}
}