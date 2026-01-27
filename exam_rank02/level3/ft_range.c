#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;

	int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
	int *range = (int*)malloc(len*sizeof(int));
	while(i < len)
	{
		if(start < end)
			range[i] = start++;
		else
			range[i] = start--;
		i++;
	}
	return (range);
}

int main(void)
{
	int *tmp = ft_range(-1, 3);
	int index;
	int size = 5;

	index = 0;	
	while(index < size)
	{
		printf("%d\n", tmp[index]);
		index++;
	}
	printf("\n");
	free(tmp);
}

