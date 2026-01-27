#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int index;

	if (argc != 2)
		return (1);
	index = 0;
	while(argv[1][index])
	{
		if (argv[1][index] >= 65 && argv[1][index] <= 90)
		{
			i = 0;
			while(i < argv[1][index] - 64)
			{
					write(1, &argv[1][index], 1);
					i++;
			}	
		}
		else if (argv[1][index] >= 97 && argv[1][index] <= 122)
		{
			i = 0;
			while(i < argv[1][index] - 96)
			{
					write(1, &argv[1][index], 1);
					i++;
			}	
		}
		else
			write(1, &argv[1][index], 1);
		index++;
	}
	write(1, "\n", 1);
}