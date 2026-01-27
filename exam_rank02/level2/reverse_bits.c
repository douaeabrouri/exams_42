#include <unistd.h>


void  print_bits(unsigned char octet)
{
	int i = 7;
	unsigned int result = 0;
	char c;
	while(i >= 0)
	{
		result = (octet >> i) & 1;
		c = result + 48;
		write(1, &c, 1);
		i--;
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i;

	i = 0;
	while(i <= 7)
	{	
		result = (result << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return result;
}
int main(void)
{
	print_bits(reverse_bits(2));
}