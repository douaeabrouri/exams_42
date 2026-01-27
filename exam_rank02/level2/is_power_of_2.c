#include <unistd.h>
#include <stdio.h>


int	is_power_of_2(unsigned int n)
{
	unsigned int magic_number;

	magic_number = 1;
	while(magic_number <= n)
	{
		if(magic_number == n)
			return (1);
		magic_number *= 2;
	}
	return (0);
}

int main(void)
{
	printf("%u\n", is_power_of_2(3));
}