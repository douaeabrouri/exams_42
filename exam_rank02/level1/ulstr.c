#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 2)
		return 1;
	int index;
	char c;

	index = 0;
	while(argv[1][index])
	{
		if((argv[1][index] >= 'A' && argv[1][index] <= 'Z'))
		{
			c = argv[1][index] + 32;
			write(1, &c, 1);				
		}
		else if((argv[1][index] >= 'a' && argv[1][index] <= 'z'))
		{
			c = argv[1][index] - 32;
			write(1, &c, 1);			
		}
		else 
			write(1, &argv[1][index], 1);
		index++;
	}
}