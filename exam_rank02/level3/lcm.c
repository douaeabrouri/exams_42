#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int  lcm;

	if( a == 0 || b == 0)
		return 0;
	lcm = (a > b)?a:b;
	while(1337)
	{
		if ((lcm % a == 0) && (lcm % b == 0))
			return lcm;
		lcm++;
	}
}