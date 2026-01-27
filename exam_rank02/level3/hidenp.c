#include <unistd.h>



int main(int argc, char **argv)
{

	if(argc != 3)
		return (1);
	int	index;
	int index_arg;

	index = 0;
	index_arg = 0;
	while(argv[1][index] && argv[2][index_arg])
	{

		if(argv[1][index_arg] == argv[2][index])
			index++;
		index_arg++;
	}

	if(argv[1][index] == 0)
		write(1, "1", 1);
	else	
		write(1, "0", 1);
	write(1, "\n", 1);
}