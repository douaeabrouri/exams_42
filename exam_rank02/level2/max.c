#include <unistd.h>
#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	if(!tab)
		return (0);
	int max;
	int index;

	max = 0;
	index = 0;
	while(index < len)
	{
		if(tab[index] >= max)
			max = tab[index];
		index++;
	}
}