#include <unistd.h>


void	print_bits(unsigned char octect)
{
	int i;
	unsigned int result;
	char c;

	i = 7;
	result = 0;
	while(i >= 0)
	{
		result = (octect >> i) & 1;
		c = result + 48;
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
}

int main(void)
{
	print_bits(7);
}