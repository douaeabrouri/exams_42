#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int prime;
	int num;

	if(argc != 2)
		return 1;
	num = atoi(argv[1]);
	prime = 2;
	if(num == 1)
		printf("1");
	while(prime <= num)
	{
		if(num % prime == 0)
		{
			printf("%d", prime);
			if(num != prime)
				printf("*");
			num /= prime;
		}
		else
			prime++;
	}
	printf("\n");
	return 0;
}